#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "imx6ulltest.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //ui->setupUi(this);

    // 设置MainWindow的底部栏为黑色背景
    QString styleSheet = "QStatusBar { background-color: black; }";
    statusBar()->setStyleSheet(styleSheet);

    this->setGeometry(0, 0, 1024, 600);

    /* widget小部件实例化 */
    widget = new QWidget(this);
    widget->setStyleSheet("border-image: url(:/images/bg.png)");
    //widget->resize(this->size());

    /* 设置居中 */
    this->setCentralWidget(widget);

    /* 垂直布局实例化 */
    hBoxLayout = new QHBoxLayout();

    /* 堆栈部件实例化 */
    stackedWidget = new QStackedWidget();


    /* 列表实例化 */
    listWidget = new QListWidget();

    QListWidgetItem *item1 = new QListWidgetItem("Item 1");
    item1->setTextColor(Qt::white); // 将项目文字颜色设置为红色
    item1->setTextAlignment(Qt::AlignCenter);
    item1->setSizeHint(QSize(100, 40)); // 将第一个项目的高度设置为 50
    listWidget->addItem(item1);

    QListWidgetItem *item2 = new QListWidgetItem("Item 2");
    item2->setTextColor(Qt::white); // 将项目文字颜色设置为红色
    item2->setTextAlignment(Qt::AlignCenter);
    item2->setSizeHint(QSize(100, 40)); // 将第一个项目的高度设置为 50
    listWidget->addItem(item2);

    QListWidgetItem *item3 = new QListWidgetItem("Item 3");
    item3->setTextColor(Qt::white); // 将项目文字颜色设置为红色
    item3->setTextAlignment(Qt::AlignCenter);
    item3->setSizeHint(QSize(100, 40)); // 将第一个项目的高度设置为 50
    listWidget->addItem(item3);


    QList <QString>strLabelList;
    strLabelList<<"标签一"<<"标签二"<<"标签三";


    label[0] = new QLabel();
    label[0]->setText("hello world");
    label[0]->setAlignment(Qt::AlignCenter);
    stackedWidget->addWidget(label[0]);

    imx6ullTest *w = new imx6ullTest();
    stackedWidget->addWidget(w);


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

MainWindow::~MainWindow()
{
    delete ui;
}

