/********************************************************************************
** Form generated from reading UI file 'mqtt_demo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTT_DEMO_H
#define UI_MQTT_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mqtt_demo
{
public:
    QLabel *Host_label;
    QLabel *Port_label;
    QLabel *ClientID_label;
    QLabel *Name_label;
    QLabel *Password_label;
    QLabel *Conection_label;
    QLabel *Topic_label;
    QPlainTextEdit *log_plainTextEdit;
    QLabel *QoS_label;
    QLabel *Publish_label;
    QLabel *Log_label;
    QPushButton *Publish_pushButton;
    QLineEdit *Name_lineEdit;
    QLineEdit *Port_lineEdit;
    QLineEdit *Password_lineEdit;
    QLineEdit *ClientID_lineEdit;
    QLineEdit *Topic_lineEdit;
    QLineEdit *QoS_lineEdit;
    QLineEdit *Host_lineEdit;

    void setupUi(QWidget *Mqtt_demo)
    {
        if (Mqtt_demo->objectName().isEmpty())
            Mqtt_demo->setObjectName(QString::fromUtf8("Mqtt_demo"));
        Mqtt_demo->resize(800, 600);
        Mqtt_demo->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));
        Host_label = new QLabel(Mqtt_demo);
        Host_label->setObjectName(QString::fromUtf8("Host_label"));
        Host_label->setGeometry(QRect(10, 50, 91, 41));
        Host_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Host_label->setAlignment(Qt::AlignCenter);
        Port_label = new QLabel(Mqtt_demo);
        Port_label->setObjectName(QString::fromUtf8("Port_label"));
        Port_label->setGeometry(QRect(280, 50, 91, 41));
        Port_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Port_label->setAlignment(Qt::AlignCenter);
        ClientID_label = new QLabel(Mqtt_demo);
        ClientID_label->setObjectName(QString::fromUtf8("ClientID_label"));
        ClientID_label->setGeometry(QRect(560, 50, 91, 41));
        ClientID_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        ClientID_label->setAlignment(Qt::AlignCenter);
        Name_label = new QLabel(Mqtt_demo);
        Name_label->setObjectName(QString::fromUtf8("Name_label"));
        Name_label->setGeometry(QRect(10, 130, 91, 41));
        Name_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Name_label->setAlignment(Qt::AlignCenter);
        Password_label = new QLabel(Mqtt_demo);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setGeometry(QRect(300, 130, 91, 41));
        Password_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Password_label->setAlignment(Qt::AlignCenter);
        Conection_label = new QLabel(Mqtt_demo);
        Conection_label->setObjectName(QString::fromUtf8("Conection_label"));
        Conection_label->setGeometry(QRect(20, 10, 141, 51));
        Conection_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Conection_label->setAlignment(Qt::AlignCenter);
        Topic_label = new QLabel(Mqtt_demo);
        Topic_label->setObjectName(QString::fromUtf8("Topic_label"));
        Topic_label->setGeometry(QRect(10, 260, 91, 41));
        Topic_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Topic_label->setAlignment(Qt::AlignCenter);
        log_plainTextEdit = new QPlainTextEdit(Mqtt_demo);
        log_plainTextEdit->setObjectName(QString::fromUtf8("log_plainTextEdit"));
        log_plainTextEdit->setGeometry(QRect(30, 390, 731, 181));
        log_plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:20px;\n"
"font-size: 18px;"));
        QoS_label = new QLabel(Mqtt_demo);
        QoS_label->setObjectName(QString::fromUtf8("QoS_label"));
        QoS_label->setGeometry(QRect(270, 260, 91, 41));
        QoS_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        QoS_label->setAlignment(Qt::AlignCenter);
        Publish_label = new QLabel(Mqtt_demo);
        Publish_label->setObjectName(QString::fromUtf8("Publish_label"));
        Publish_label->setGeometry(QRect(10, 220, 141, 51));
        Publish_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Publish_label->setAlignment(Qt::AlignCenter);
        Log_label = new QLabel(Mqtt_demo);
        Log_label->setObjectName(QString::fromUtf8("Log_label"));
        Log_label->setGeometry(QRect(-10, 340, 141, 51));
        Log_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Log_label->setAlignment(Qt::AlignCenter);
        Log_label->setGeometry(QRect(570, 170, 191, 31));
        Log_label->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Publish_pushButton = new QPushButton(Mqtt_demo);
        Publish_pushButton->setObjectName(QString::fromUtf8("Publish_pushButton"));
        Publish_pushButton->setGeometry(QRect(570, 300, 191, 31));
        Publish_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Name_lineEdit = new QLineEdit(Mqtt_demo);
        Name_lineEdit->setObjectName(QString::fromUtf8("Name_lineEdit"));
        Name_lineEdit->setGeometry(QRect(30, 170, 191, 31));
        Name_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Port_lineEdit = new QLineEdit(Mqtt_demo);
        Port_lineEdit->setObjectName(QString::fromUtf8("Port_lineEdit"));
        Port_lineEdit->setGeometry(QRect(300, 90, 191, 31));
        Port_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Password_lineEdit = new QLineEdit(Mqtt_demo);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(300, 170, 191, 31));
        Password_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        ClientID_lineEdit = new QLineEdit(Mqtt_demo);
        ClientID_lineEdit->setObjectName(QString::fromUtf8("ClientID_lineEdit"));
        ClientID_lineEdit->setGeometry(QRect(570, 90, 191, 31));
        ClientID_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Topic_lineEdit = new QLineEdit(Mqtt_demo);
        Topic_lineEdit->setObjectName(QString::fromUtf8("Topic_lineEdit"));
        Topic_lineEdit->setGeometry(QRect(30, 300, 191, 31));
        Topic_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        QoS_lineEdit = new QLineEdit(Mqtt_demo);
        QoS_lineEdit->setObjectName(QString::fromUtf8("QoS_lineEdit"));
        QoS_lineEdit->setGeometry(QRect(300, 300, 191, 31));
        QoS_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Host_lineEdit = new QLineEdit(Mqtt_demo);
        Host_lineEdit->setObjectName(QString::fromUtf8("Host_lineEdit"));
        Host_lineEdit->setGeometry(QRect(30, 90, 191, 31));
        Host_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));

        retranslateUi(Mqtt_demo);

        QMetaObject::connectSlotsByName(Mqtt_demo);
    } // setupUi

    void retranslateUi(QWidget *Mqtt_demo)
    {
        Mqtt_demo->setWindowTitle(QApplication::translate("Mqtt_demo", "Form", nullptr));
        Host_label->setText(QApplication::translate("Mqtt_demo", "Host", nullptr));
        Port_label->setText(QApplication::translate("Mqtt_demo", "Port", nullptr));
        ClientID_label->setText(QApplication::translate("Mqtt_demo", "ClientID", nullptr));
        Name_label->setText(QApplication::translate("Mqtt_demo", "Name", nullptr));
        Password_label->setText(QApplication::translate("Mqtt_demo", "Password", nullptr));
        Conection_label->setText(QApplication::translate("Mqtt_demo", "Conection", nullptr));
        Topic_label->setText(QApplication::translate("Mqtt_demo", "Topic", nullptr));
        QoS_label->setText(QApplication::translate("Mqtt_demo", "QoS", nullptr));
        Publish_label->setText(QApplication::translate("Mqtt_demo", "Publish", nullptr));
        Log_label->setText(QApplication::translate("Mqtt_demo", "Log", nullptr));
        Log_label->setText(QApplication::translate("Mqtt_demo", "Connect", nullptr));
        Publish_pushButton->setText(QApplication::translate("Mqtt_demo", "Publish", nullptr));
        Port_lineEdit->setPlaceholderText(QApplication::translate("Mqtt_demo", "1883", nullptr));
        Host_lineEdit->setPlaceholderText(QApplication::translate("Mqtt_demo", "120.26.202.2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mqtt_demo: public Ui_Mqtt_demo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTT_DEMO_H
