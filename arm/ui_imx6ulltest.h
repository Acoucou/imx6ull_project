/********************************************************************************
** Form generated from reading UI file 'imx6ulltest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMX6ULLTEST_H
#define UI_IMX6ULLTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_imx6ullTest
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ledBt;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *beepBt;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QTextEdit *alsEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *irEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *psEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnStartAndStop;
    QSpacerItem *horizontalSpacer_6;
    QChartView *graphicsView;
    QWidget *tab_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *gxdataEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *gydataEdit;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *gzdataEdit;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *axdataEdit;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *aydataEdit;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *azdataEdit;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *tempdataEdit;
    QLabel *label_10;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *stop2060Bt;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *start2060Bt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *imx6ullTest)
    {
        if (imx6ullTest->objectName().isEmpty())
            imx6ullTest->setObjectName(QString::fromUtf8("imx6ullTest"));
        imx6ullTest->resize(824, 600);
        imx6ullTest->setMinimumSize(QSize(800, 600));
        imx6ullTest->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 32);"));
        centralwidget = new QWidget(imx6ullTest);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 824, 600));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:black;\n"
"color: white;\n"
""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 821, 491));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        ledBt = new QPushButton(layoutWidget);
        ledBt->setObjectName(QString::fromUtf8("ledBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ledBt->sizePolicy().hasHeightForWidth());
        ledBt->setSizePolicy(sizePolicy1);
        ledBt->setMinimumSize(QSize(200, 60));
        ledBt->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));

        horizontalLayout_2->addWidget(ledBt);

        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        beepBt = new QPushButton(layoutWidget);
        beepBt->setObjectName(QString::fromUtf8("beepBt"));
        beepBt->setMinimumSize(QSize(200, 60));
        beepBt->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));

        horizontalLayout_2->addWidget(beepBt);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font-size: 40px;text-align: center;"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClear = new QPushButton(tab_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(0, 50));
        btnClear->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        horizontalLayout->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        alsEdit = new QTextEdit(tab_2);
        alsEdit->setObjectName(QString::fromUtf8("alsEdit"));
        alsEdit->setMinimumSize(QSize(60, 30));
        alsEdit->setMaximumSize(QSize(60, 30));
        alsEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout->addWidget(alsEdit);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        irEdit = new QTextEdit(tab_2);
        irEdit->setObjectName(QString::fromUtf8("irEdit"));
        irEdit->setMinimumSize(QSize(60, 30));
        irEdit->setMaximumSize(QSize(60, 30));
        irEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_2->addWidget(irEdit);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        psEdit = new QTextEdit(tab_2);
        psEdit->setObjectName(QString::fromUtf8("psEdit"));
        psEdit->setMinimumSize(QSize(60, 30));
        psEdit->setMaximumSize(QSize(60, 30));
        psEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_3->addWidget(psEdit);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnStartAndStop = new QPushButton(tab_2);
        btnStartAndStop->setObjectName(QString::fromUtf8("btnStartAndStop"));
        btnStartAndStop->setMinimumSize(QSize(0, 50));
        btnStartAndStop->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        horizontalLayout->addWidget(btnStartAndStop);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout);

        graphicsView = new QChartView(tab_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_4->addWidget(graphicsView);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 8);

        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 130, 751, 60));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gxdataEdit = new QTextEdit(layoutWidget_2);
        gxdataEdit->setObjectName(QString::fromUtf8("gxdataEdit"));
        gxdataEdit->setMaximumSize(QSize(60, 30));
        gxdataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_5->addWidget(gxdataEdit);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_10 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gydataEdit = new QTextEdit(layoutWidget_2);
        gydataEdit->setObjectName(QString::fromUtf8("gydataEdit"));
        gydataEdit->setMaximumSize(QSize(60, 30));
        gydataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_6->addWidget(gydataEdit);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSpacer_11 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gzdataEdit = new QTextEdit(layoutWidget_2);
        gzdataEdit->setObjectName(QString::fromUtf8("gzdataEdit"));
        gzdataEdit->setMaximumSize(QSize(60, 30));
        gzdataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_7->addWidget(gzdataEdit);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_12 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        axdataEdit = new QTextEdit(layoutWidget_2);
        axdataEdit->setObjectName(QString::fromUtf8("axdataEdit"));
        axdataEdit->setMaximumSize(QSize(60, 30));
        axdataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_8->addWidget(axdataEdit);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_8);

        horizontalSpacer_13 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        aydataEdit = new QTextEdit(layoutWidget_2);
        aydataEdit->setObjectName(QString::fromUtf8("aydataEdit"));
        aydataEdit->setMaximumSize(QSize(60, 30));
        aydataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_9->addWidget(aydataEdit);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_9);

        horizontalSpacer_14 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        azdataEdit = new QTextEdit(layoutWidget_2);
        azdataEdit->setObjectName(QString::fromUtf8("azdataEdit"));
        azdataEdit->setMaximumSize(QSize(60, 30));
        azdataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_10->addWidget(azdataEdit);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_10);

        horizontalSpacer_15 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        tempdataEdit = new QTextEdit(layoutWidget_2);
        tempdataEdit->setObjectName(QString::fromUtf8("tempdataEdit"));
        tempdataEdit->setMaximumSize(QSize(60, 30));
        tempdataEdit->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        verticalLayout_11->addWidget(tempdataEdit);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_10);


        horizontalLayout_3->addLayout(verticalLayout_11);

        layoutWidget_3 = new QWidget(tab_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(260, 220, 291, 101));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stop2060Bt = new QPushButton(layoutWidget_3);
        stop2060Bt->setObjectName(QString::fromUtf8("stop2060Bt"));
        stop2060Bt->setMinimumSize(QSize(100, 50));
        stop2060Bt->setMaximumSize(QSize(100, 50));
        stop2060Bt->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        horizontalLayout_4->addWidget(stop2060Bt);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);

        start2060Bt = new QPushButton(layoutWidget_3);
        start2060Bt->setObjectName(QString::fromUtf8("start2060Bt"));
        start2060Bt->setMinimumSize(QSize(100, 50));
        start2060Bt->setMaximumSize(QSize(100, 50));
        start2060Bt->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        horizontalLayout_4->addWidget(start2060Bt);

        tabWidget->addTab(tab_3, QString());
        imx6ullTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(imx6ullTest);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 22));
        imx6ullTest->setMenuBar(menubar);
        statusbar = new QStatusBar(imx6ullTest);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        imx6ullTest->setStatusBar(statusbar);

        retranslateUi(imx6ullTest);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(imx6ullTest);
    } // setupUi

    void retranslateUi(QMainWindow *imx6ullTest)
    {
        imx6ullTest->setWindowTitle(QApplication::translate("imx6ullTest", "MainWindow", nullptr));
        ledBt->setText(QApplication::translate("imx6ullTest", "LED", nullptr));
        beepBt->setText(QApplication::translate("imx6ullTest", "BEEP)", nullptr));
        label_11->setText(QApplication::translate("imx6ullTest", "Hello World", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("imx6ullTest", "led&&beep", nullptr));
        btnClear->setText(QApplication::translate("imx6ullTest", "\346\270\205\351\231\244\346\233\262\347\272\277", nullptr));
        label->setText(QApplication::translate("imx6ullTest", "als", nullptr));
        label_2->setText(QApplication::translate("imx6ullTest", "ir", nullptr));
        label_3->setText(QApplication::translate("imx6ullTest", "ps", nullptr));
        pushButton->setText(QApplication::translate("imx6ullTest", "\345\201\234\346\255\242\346\243\200\346\265\213", nullptr));
        btnStartAndStop->setText(QApplication::translate("imx6ullTest", "\345\220\257\345\212\250\346\243\200\346\265\213", nullptr));
        graphicsView->setStyleSheet(QApplication::translate("imx6ullTest", "background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("imx6ullTest", "AP3216c", nullptr));
        label_4->setText(QApplication::translate("imx6ullTest", "gxdata", nullptr));
        label_5->setText(QApplication::translate("imx6ullTest", "gydata", nullptr));
        label_6->setText(QApplication::translate("imx6ullTest", "gzdata", nullptr));
        label_7->setText(QApplication::translate("imx6ullTest", "axdata", nullptr));
        label_8->setText(QApplication::translate("imx6ullTest", "aydata", nullptr));
        label_9->setText(QApplication::translate("imx6ullTest", "azdata", nullptr));
        label_10->setText(QApplication::translate("imx6ullTest", "tempdata", nullptr));
        stop2060Bt->setText(QApplication::translate("imx6ullTest", "\345\205\263\351\227\255\344\274\240\346\204\237\345\231\250", nullptr));
        start2060Bt->setText(QApplication::translate("imx6ullTest", "\345\274\200\345\220\257\344\274\240\346\204\237\345\231\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("imx6ullTest", "icm2060", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imx6ullTest: public Ui_imx6ullTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMX6ULLTEST_H
