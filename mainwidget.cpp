#include "mainwidget.h"
#include "ui_mainwidget.h"

#include "opencv.h"
#include "imx6ulltest.h"
#include "facedetect.h"
#include "musicplay.h"
#include "videoplayer.h"
#include "banna.h"
#include "mqtt_client.h"

struct WidgetItemData {
    QString title;

    // 使用函数指针，返回QWidget *
    typedef QWidget *(*CreateInstanceFunc)();
    CreateInstanceFunc createInstance;
};

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

    /*
    在创建WidgetItemData数组时即创建了每个窗口的实例。
    如果这些窗口在程序启动时并未立即用到，过早的实例化确实会消耗不必要的资源。
    考虑一种惰性加载（Lazy Loading）的方式，即在需要使用窗口时再将其实例化。
    这种方式需要配合工厂模式（Factory Pattern）使用，通过使用工厂方法在运行时动态创建相应的对象。
    */
    WidgetItemData items[] = {
        {"轮播图", []() -> QWidget * { return new banna; } },
        {"OpenCV测试", []() -> QWidget * { return new opencv; } },
        {"摄像头人脸识别", []() -> QWidget * { return new faceDetect; } },
        {"imx6ull板级设备", []() -> QWidget * { return new imx6ullTest; } },
        {"音频播放器", []() -> QWidget * { return new MusicPlay; } },
        {"视频播放器", []() -> QWidget * { return new VideoPlayer; } },
        {"MQTT_CLIENT", []() -> QWidget * { return new mqtt_client; } },
        {"FFMPEG_TEST待完成", nullptr },
    };

    for(auto & itemData : items) {
        QListWidgetItem *item = new QListWidgetItem(itemData.title);
        item->setTextColor(Qt::white);
        item->setTextAlignment(Qt::AlignCenter);
        item->setSizeHint(QSize(100, 60));
        listWidget->addItem(item);

        // 如果有对应的工厂函数，添加到stackedWidget中
        if (itemData.createInstance) {
            stackedWidget->addWidget(itemData.createInstance());
        }
    }

    // 将焦点设置为第一个项目
    if(listWidget->count() > 0) {
        QListWidgetItem* item1 = listWidget->item(0);
        listWidget->setCurrentItem(item1);
        listWidget->setItemSelected(item1, true);
        item1->setSelected(true);
        listWidget->setFocus();
    }

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



