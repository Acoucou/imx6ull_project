#include "banna.h"
#include "ui_banna.h"

#include "QDebug"
#include <QFile>

banna::banna(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::banna)
{
    ui->setupUi(this);
    this->initValue();
}

banna::~banna()
{
    delete ui;
}

// 初始化数据
void banna::initValue()
{
    //this->setWindowFlags(Qt::FramelessWindowHint);
    changeImageTimer = new QTimer(this);
    connect(changeImageTimer, SIGNAL(timeout()), this, SLOT(slot_changeImageTimer()));
    changeImageTimer->setInterval(BannaSpace::INTERVAL_TIMER);
    changeImageTimer->start();

    buttonGroup.addButton(ui->pushButtonFirst);
    buttonGroup.addButton(ui->pushButtonSecond);
    buttonGroup.addButton(ui->pushButtonThird);
    buttonGroup.addButton(ui->pushButtonFourth);
    buttonGroup.addButton(ui->pushButtonFifth);

    ui->labelThird->raise();
    ui->labelFifth->lower();

    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFirst;
        bannaData.currentImageLabel = ui->labelFirst;
        bannaData.nextImageLabel = ui->labelSecond;
        bannaData.preImageLabel = ui->labelFifth;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFirst, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonSecond;
        bannaData.currentImageLabel = ui->labelSecond;
        bannaData.nextImageLabel = ui->labelThird;
        bannaData.preImageLabel = ui->labelFirst;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelSecond, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonThird;
        bannaData.currentImageLabel = ui->labelThird;
        bannaData.nextImageLabel = ui->labelFourth;
        bannaData.preImageLabel = ui->labelSecond;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelThird, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFourth;
        bannaData.currentImageLabel = ui->labelFourth;
        bannaData.nextImageLabel = ui->labelFifth;
        bannaData.preImageLabel = ui->labelThird;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFourth, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }


    {
        BannaData bannaData;
        bannaData.pushButton = ui->pushButtonFifth;
        bannaData.currentImageLabel = ui->labelFifth;
        bannaData.nextImageLabel = ui->labelFirst;
        bannaData.preImageLabel = ui->labelFourth;
        bannaData.proAnimation = new QPropertyAnimation(ui->labelFifth, BannaSpace::ANIMATION_GEOMETRY);
        bannaDataList.append(bannaData);
    }

    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).currentImageLabel->installEventFilter(this);
        bannaDataList.at(i).proAnimation->setDuration(BannaSpace::ANIMATION_DURTION);
        bannaDataList.at(i).proAnimation->setEasingCurve(QEasingCurve::BezierSpline);
        animationGroup.addAnimation(bannaDataList.at(i).proAnimation);
    }


    QList<QString> listImagePath;
    listImagePath.append(BannaSpace::FIRST_IMAGE_PATH);
    listImagePath.append(BannaSpace::SECOND_IMAGE_PATH);
    listImagePath.append(BannaSpace::THIRD_IMAGE_PATH);
    listImagePath.append(BannaSpace::FOURTH_IMAGE_PATH);
    listImagePath.append(BannaSpace::FIFTH_IMAGE_PATH);
    this->addAnimationPixmap(listImagePath);

    ui->pushButtonLeft->raise();
    ui->pushButtonRight->raise();
}

// 为轮播图添加图片
void banna::addAnimationPixmap(QList<QString> &listPixmap)
{
    if(listPixmap.size() != bannaDataList.size()) return;


    for(int i = 0; i < bannaDataList.size(); i++)
    {
        QString styleSheet = BannaSpace::STYLE_SHEET.arg(listPixmap.at(i));
        bannaDataList.at(i).currentImageLabel->setStyleSheet(styleSheet);
    }
}

// 每3S进行一次动画操作
void banna::slot_changeImageTimer()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)
    {
        this->setNextAnimation();
    }
}

// 向左移动
void banna::on_pushButtonLeft_clicked()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)
    {
        this->setPreAnimation();
    }
}

// 向右移动
void banna::on_pushButtonRight_clicked()
{
    if(animationGroup.state() != QParallelAnimationGroup::Running)
    {
        this->setNextAnimation();
    }
}

// 获取最右边的Label的Index
int banna::getMaxGeometryIndex(const QList<BannaData> &listData)
{
    int maxPosX = 0;
    int maxIndex = 0;
    for(int i = 0; i < listData.size(); i++)
    {
        int geometryX = listData.at(i).currentImageLabel->geometry().x();
        if(maxPosX < geometryX)
        {
            maxPosX = geometryX;
            maxIndex = i;
        }
    }
    return maxIndex;
}

// 图层排序
void banna::sortGeometry(const bool &isNextFlage)
{
    /******************************************
     * 思路：
     * 将五张图片进行排序，根据其移动后的位置
     * 来确定哪个图层在上，哪个图层在下
     * lower函数 将图层沉下去
     * raise函数 将图层浮上来
     * *****************************************/
    QList<BannaData>listData = bannaDataList;
    QLabel *topImageLabel = nullptr;
    int countNumber = 0;
    while(!listData.isEmpty())
    {
        int index = getMaxGeometryIndex(listData);
        if(index < listData.size())
        {
            switch (countNumber)
            {
            case BannaSpace::SORT_FIRST:
            {
                listData.at(index).currentImageLabel->lower();
                break;
            }
            case BannaSpace::SORT_SECOND:
            {
                if(isNextFlage)
                {
                    topImageLabel = listData.at(index).currentImageLabel;
                    listData.at(index).pushButton->setChecked(true);
                }
                listData.at(index).currentImageLabel->raise();
                break;
            }
            case BannaSpace::SORT_THIRD:
            {
                listData.at(index).currentImageLabel->raise();
                break;
            }
            case BannaSpace::SORT_FOURTH:
            {
                if(!isNextFlage)
                {
                    topImageLabel = listData.at(index).currentImageLabel;
                    listData.at(index).pushButton->setChecked(true);
                }
                listData.at(index).currentImageLabel->lower();
                break;
            }
            case BannaSpace::SORT_FIFTH:
            {
                if(!isNextFlage)
                {
                    listData.at(index).currentImageLabel->raise();
                }
                else
                {
                    listData.at(index).currentImageLabel->lower();
                }
                break;
            }
            }
            listData.removeAt(index);
        }
        countNumber++;
    }

    if(topImageLabel)
    {
        topImageLabel->raise();
    }
    ui->pushButtonLeft->raise();
    ui->pushButtonRight->raise();
}

// 设置向右移动动画
void banna::setNextAnimation()
{
    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).proAnimation->setStartValue(bannaDataList.at(i).currentImageLabel->geometry());
        bannaDataList.at(i).proAnimation->setEndValue(bannaDataList.at(i).preImageLabel->geometry());
    }
    animationGroup.start();
    this->sortGeometry(true);
}

// 设置向左移动动画
void banna::setPreAnimation()
{
    for(int i = 0; i < bannaDataList.size(); i++)
    {
        bannaDataList.at(i).proAnimation->setStartValue(bannaDataList.at(i).currentImageLabel->geometry());
        bannaDataList.at(i).proAnimation->setEndValue(bannaDataList.at(i).nextImageLabel->geometry());
    }
    animationGroup.start();
    this->sortGeometry(false);
}
