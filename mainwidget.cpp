#include "mainwidget.h"
#include "ui_mainwidget.h"

#include "opencv.h"
#include "imx6ulltest.h"
#include "facedetect.h"
#include "musicplay.h"
#include "videoplayer.h"
#include "banna.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    //ui->setupUi(this);

    widget = new QWidget(this);
    this->setGeometry(0, 0, 1024, 600);
    this->setObjectName("project");
    widget->resize(this->size());

    this->windows_init();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::windows_init(){
    /* 垂直布局实例化 */
    hBoxLayout = new QHBoxLayout();

    /* 堆栈部件实例化 */
    stackedWidget = new QStackedWidget();

    /* 列表实例化 */
    listWidget = new QListWidget(this);
    listWidget->setStyleSheet("background-color: black;");


    QListWidgetItem *item1 = new QListWidgetItem("轮播图");
    // 将焦点设置为第一个项目
    listWidget->setCurrentItem(item1);
    listWidget->setItemSelected(item1, true);
    item1->setSelected(true);
    listWidget->setFocus();
    item1->setTextColor(Qt::white);
    item1->setTextAlignment(Qt::AlignCenter);
    item1->setSizeHint(QSize(100, 60));
    listWidget->addItem(item1);
    // 添加窗口
    banna *w = new banna;
    stackedWidget->addWidget(w);

    QListWidgetItem *item2 = new QListWidgetItem("OpenCV测试");
    item2->setTextColor(Qt::white);
    item2->setTextAlignment(Qt::AlignCenter);
    item2->setSizeHint(QSize(100, 60));
    listWidget->addItem(item2);

    opencv *w1 = new opencv;
    stackedWidget->addWidget(w1);

    QListWidgetItem *item4 = new QListWidgetItem("摄像头人脸识别");
    item4->setTextColor(Qt::white);
    item4->setTextAlignment(Qt::AlignCenter);
    item4->setSizeHint(QSize(100, 60));
    listWidget->addItem(item4);

    faceDetect *w3 = new faceDetect;
    stackedWidget->addWidget(w3);

    QListWidgetItem *item3 = new QListWidgetItem("imx6ull板级设备");
    item3->setTextColor(Qt::white);
    item3->setTextAlignment(Qt::AlignCenter);
    item3->setSizeHint(QSize(100, 60));
    listWidget->addItem(item3);

    imx6ullTest *w2 = new imx6ullTest;
    stackedWidget->addWidget(w2);


    QListWidgetItem *item5 = new QListWidgetItem("音频播放器");
    item5->setTextColor(Qt::white);
    item5->setTextAlignment(Qt::AlignCenter);
    item5->setSizeHint(QSize(100, 60));
    listWidget->addItem(item5);

    MusicPlay *W4 = new MusicPlay;
    stackedWidget->addWidget(W4);

    QListWidgetItem *item6 = new QListWidgetItem("视频播放器");
    item6->setTextColor(Qt::white);
    item6->setTextAlignment(Qt::AlignCenter);
    item6->setSizeHint(QSize(100, 60));
    listWidget->addItem(item6);

    VideoPlayer *W5 = new VideoPlayer;
    stackedWidget->addWidget(W5);

    QListWidgetItem *item7 = new QListWidgetItem("MQTT_TEST待完成");
    item7->setTextColor(Qt::white);
    item7->setTextAlignment(Qt::AlignCenter);
    item7->setSizeHint(QSize(100, 60));
    listWidget->addItem(item7);



    QListWidgetItem *item8 = new QListWidgetItem("FFMPEG_TEST待完成");
    item8->setTextColor(Qt::white);
    item8->setTextAlignment(Qt::AlignCenter);
    item8->setSizeHint(QSize(100, 60));
    listWidget->addItem(item8);


    /* 设置列表的最大宽度 */
    listWidget->setMaximumWidth(200);
    /* 添加到水平布局 */
    hBoxLayout->addWidget(listWidget);
    hBoxLayout->addWidget(stackedWidget);

    /* 将widget的布局设置成hboxLayout */
    widget->setLayout(hBoxLayout);

    /* 利用listWidget的信号函数currentRowChanged()与
         * 槽函数setCurrentIndex(),进行信号与槽连接
    */
    connect(listWidget, SIGNAL(currentRowChanged(int)),
                stackedWidget, SLOT(setCurrentIndex(int)));
}

