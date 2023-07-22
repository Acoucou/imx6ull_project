/********************************************************************************
** Form generated from reading UI file 'banna.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNA_H
#define UI_BANNA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_banna
{
public:
    QWidget *widgetImage;
    QLabel *labelFirst;
    QLabel *labelSecond;
    QLabel *labelThird;
    QLabel *labelFourth;
    QLabel *labelFifth;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QFrame *frameDot;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFirst;
    QPushButton *pushButtonSecond;
    QPushButton *pushButtonThird;
    QPushButton *pushButtonFourth;
    QPushButton *pushButtonFifth;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *banna)
    {
        if (banna->objectName().isEmpty())
            banna->setObjectName(QString::fromUtf8("banna"));
        banna->resize(824, 600);
        banna->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));
        widgetImage = new QWidget(banna);
        widgetImage->setObjectName(QString::fromUtf8("widgetImage"));
        widgetImage->setGeometry(QRect(0, -10, 824, 471));
        widgetImage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-radius:6px;\n"
"}"));
        labelFirst = new QLabel(widgetImage);
        labelFirst->setObjectName(QString::fromUtf8("labelFirst"));
        labelFirst->setGeometry(QRect(30, 180, 320, 200));
        labelFirst->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        labelSecond = new QLabel(widgetImage);
        labelSecond->setObjectName(QString::fromUtf8("labelSecond"));
        labelSecond->setGeometry(QRect(80, 150, 400, 250));
        labelSecond->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        labelThird = new QLabel(widgetImage);
        labelThird->setObjectName(QString::fromUtf8("labelThird"));
        labelThird->setGeometry(QRect(160, 130, 480, 300));
        labelThird->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        labelFourth = new QLabel(widgetImage);
        labelFourth->setObjectName(QString::fromUtf8("labelFourth"));
        labelFourth->setGeometry(QRect(340, 150, 400, 250));
        labelFourth->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        labelFifth = new QLabel(widgetImage);
        labelFifth->setObjectName(QString::fromUtf8("labelFifth"));
        labelFifth->setGeometry(QRect(480, 180, 320, 200));
        labelFifth->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        pushButtonLeft = new QPushButton(widgetImage);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(30, 260, 48, 48));
        pushButtonLeft->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/images/banna_pic/other/less_than.png);"));
        pushButtonRight = new QPushButton(widgetImage);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(750, 260, 48, 48));
        pushButtonRight->setStyleSheet(QString::fromUtf8("background-color: transparent;background-color: transparent;\n"
"border-image: url(:/images/banna_pic/other/more_than.png);"));
        frameDot = new QFrame(banna);
        frameDot->setObjectName(QString::fromUtf8("frameDot"));
        frameDot->setGeometry(QRect(0, 430, 824, 161));
        frameDot->setMinimumSize(QSize(0, 30));
        frameDot->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image: url(:/images/banna_pic/other/normal_gray.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"border-image: url(:/images/banna_pic/other/hover_blue.png);\n"
"}"));
        frameDot->setFrameShape(QFrame::StyledPanel);
        frameDot->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frameDot);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 25, 0, 35);
        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonFirst = new QPushButton(frameDot);
        pushButtonFirst->setObjectName(QString::fromUtf8("pushButtonFirst"));
        pushButtonFirst->setMinimumSize(QSize(16, 16));
        pushButtonFirst->setMaximumSize(QSize(16, 16));
        pushButtonFirst->setCheckable(true);

        horizontalLayout_4->addWidget(pushButtonFirst);

        pushButtonSecond = new QPushButton(frameDot);
        pushButtonSecond->setObjectName(QString::fromUtf8("pushButtonSecond"));
        pushButtonSecond->setMinimumSize(QSize(16, 16));
        pushButtonSecond->setMaximumSize(QSize(16, 16));
        pushButtonSecond->setCheckable(true);

        horizontalLayout_4->addWidget(pushButtonSecond);

        pushButtonThird = new QPushButton(frameDot);
        pushButtonThird->setObjectName(QString::fromUtf8("pushButtonThird"));
        pushButtonThird->setMinimumSize(QSize(16, 16));
        pushButtonThird->setMaximumSize(QSize(16, 16));
        pushButtonThird->setCheckable(true);
        pushButtonThird->setChecked(true);

        horizontalLayout_4->addWidget(pushButtonThird);

        pushButtonFourth = new QPushButton(frameDot);
        pushButtonFourth->setObjectName(QString::fromUtf8("pushButtonFourth"));
        pushButtonFourth->setMinimumSize(QSize(16, 16));
        pushButtonFourth->setMaximumSize(QSize(16, 16));
        pushButtonFourth->setCheckable(true);

        horizontalLayout_4->addWidget(pushButtonFourth);

        pushButtonFifth = new QPushButton(frameDot);
        pushButtonFifth->setObjectName(QString::fromUtf8("pushButtonFifth"));
        pushButtonFifth->setMinimumSize(QSize(16, 16));
        pushButtonFifth->setMaximumSize(QSize(16, 16));
        pushButtonFifth->setCheckable(true);

        horizontalLayout_4->addWidget(pushButtonFifth);

        horizontalSpacer_2 = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        retranslateUi(banna);

        QMetaObject::connectSlotsByName(banna);
    } // setupUi

    void retranslateUi(QWidget *banna)
    {
        banna->setWindowTitle(QApplication::translate("banna", "Form", nullptr));
        labelFirst->setText(QString());
        labelSecond->setText(QString());
        labelThird->setText(QString());
        labelFourth->setText(QString());
        labelFifth->setText(QString());
        pushButtonLeft->setText(QString());
        pushButtonRight->setText(QString());
        pushButtonFirst->setText(QString());
        pushButtonSecond->setText(QString());
        pushButtonThird->setText(QString());
        pushButtonFourth->setText(QString());
        pushButtonFifth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class banna: public Ui_banna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNA_H
