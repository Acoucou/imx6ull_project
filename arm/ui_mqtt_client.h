/********************************************************************************
** Form generated from reading UI file 'mqtt_client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTT_CLIENT_H
#define UI_MQTT_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mqtt_client
{
public:
    QLabel *Topic_label;
    QLineEdit *QoS_lineEdit;
    QPlainTextEdit *log_plainTextEdit;
    QLabel *Conection_label;
    QLabel *Host_label;
    QLabel *Port_label;
    QLineEdit *Topic_lineEdit;
    QLineEdit *Port_lineEdit;
    QLabel *QoS_label;
    QLineEdit *Host_lineEdit;
    QLabel *Subscribe_label;
    QPushButton *connect_pushbutton;
    QPushButton *Subscribe_pushbutton;
    QLineEdit *Topic_lineEdit_2;
    QLabel *Publish_label;
    QLabel *Topic_label_2;
    QPushButton *Publish_pushbutton;
    QLineEdit *Msg_lineEdit;
    QLabel *Msg_label;
    QLabel *Log_label;

    void setupUi(QWidget *mqtt_client)
    {
        if (mqtt_client->objectName().isEmpty())
            mqtt_client->setObjectName(QString::fromUtf8("mqtt_client"));
        mqtt_client->resize(800, 600);
        mqtt_client->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));
        Topic_label = new QLabel(mqtt_client);
        Topic_label->setObjectName(QString::fromUtf8("Topic_label"));
        Topic_label->setGeometry(QRect(10, 150, 91, 41));
        Topic_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Topic_label->setAlignment(Qt::AlignCenter);
        QoS_lineEdit = new QLineEdit(mqtt_client);
        QoS_lineEdit->setObjectName(QString::fromUtf8("QoS_lineEdit"));
        QoS_lineEdit->setGeometry(QRect(300, 190, 191, 31));
        QoS_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        log_plainTextEdit = new QPlainTextEdit(mqtt_client);
        log_plainTextEdit->setObjectName(QString::fromUtf8("log_plainTextEdit"));
        log_plainTextEdit->setGeometry(QRect(30, 390, 741, 181));
        log_plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:20px;\n"
"font-size: 18px;"));
        log_plainTextEdit->setCenterOnScroll(false);
        Conection_label = new QLabel(mqtt_client);
        Conection_label->setObjectName(QString::fromUtf8("Conection_label"));
        Conection_label->setGeometry(QRect(20, 0, 141, 51));
        Conection_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Conection_label->setAlignment(Qt::AlignCenter);
        Host_label = new QLabel(mqtt_client);
        Host_label->setObjectName(QString::fromUtf8("Host_label"));
        Host_label->setGeometry(QRect(10, 40, 91, 41));
        Host_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Host_label->setAlignment(Qt::AlignCenter);
        Port_label = new QLabel(mqtt_client);
        Port_label->setObjectName(QString::fromUtf8("Port_label"));
        Port_label->setGeometry(QRect(280, 40, 91, 41));
        Port_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Port_label->setAlignment(Qt::AlignCenter);
        Topic_lineEdit = new QLineEdit(mqtt_client);
        Topic_lineEdit->setObjectName(QString::fromUtf8("Topic_lineEdit"));
        Topic_lineEdit->setGeometry(QRect(30, 190, 191, 31));
        Topic_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Port_lineEdit = new QLineEdit(mqtt_client);
        Port_lineEdit->setObjectName(QString::fromUtf8("Port_lineEdit"));
        Port_lineEdit->setGeometry(QRect(300, 80, 191, 31));
        Port_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        QoS_label = new QLabel(mqtt_client);
        QoS_label->setObjectName(QString::fromUtf8("QoS_label"));
        QoS_label->setGeometry(QRect(270, 150, 91, 41));
        QoS_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        QoS_label->setAlignment(Qt::AlignCenter);
        Host_lineEdit = new QLineEdit(mqtt_client);
        Host_lineEdit->setObjectName(QString::fromUtf8("Host_lineEdit"));
        Host_lineEdit->setGeometry(QRect(30, 80, 191, 31));
        Host_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Subscribe_label = new QLabel(mqtt_client);
        Subscribe_label->setObjectName(QString::fromUtf8("Subscribe_label"));
        Subscribe_label->setGeometry(QRect(20, 110, 141, 51));
        Subscribe_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Subscribe_label->setAlignment(Qt::AlignCenter);
        connect_pushbutton = new QPushButton(mqtt_client);
        connect_pushbutton->setObjectName(QString::fromUtf8("connect_pushbutton"));
        connect_pushbutton->setGeometry(QRect(580, 80, 191, 31));
        connect_pushbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 226, 52);\n"
"background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Subscribe_pushbutton = new QPushButton(mqtt_client);
        Subscribe_pushbutton->setObjectName(QString::fromUtf8("Subscribe_pushbutton"));
        Subscribe_pushbutton->setGeometry(QRect(580, 190, 191, 31));
        Subscribe_pushbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Topic_lineEdit_2 = new QLineEdit(mqtt_client);
        Topic_lineEdit_2->setObjectName(QString::fromUtf8("Topic_lineEdit_2"));
        Topic_lineEdit_2->setGeometry(QRect(30, 300, 191, 31));
        Topic_lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Publish_label = new QLabel(mqtt_client);
        Publish_label->setObjectName(QString::fromUtf8("Publish_label"));
        Publish_label->setGeometry(QRect(10, 220, 141, 51));
        Publish_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Publish_label->setAlignment(Qt::AlignCenter);
        Topic_label_2 = new QLabel(mqtt_client);
        Topic_label_2->setObjectName(QString::fromUtf8("Topic_label_2"));
        Topic_label_2->setGeometry(QRect(10, 260, 91, 41));
        Topic_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Topic_label_2->setAlignment(Qt::AlignCenter);
        Publish_pushbutton = new QPushButton(mqtt_client);
        Publish_pushbutton->setObjectName(QString::fromUtf8("Publish_pushbutton"));
        Publish_pushbutton->setGeometry(QRect(580, 300, 191, 31));
        Publish_pushbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Msg_lineEdit = new QLineEdit(mqtt_client);
        Msg_lineEdit->setObjectName(QString::fromUtf8("Msg_lineEdit"));
        Msg_lineEdit->setGeometry(QRect(300, 300, 191, 31));
        Msg_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid; \n"
"border-width: 1px; \n"
"border-color: white;\n"
"border-radius:15px;\n"
"font-size: 18px;\n"
""));
        Msg_label = new QLabel(mqtt_client);
        Msg_label->setObjectName(QString::fromUtf8("Msg_label"));
        Msg_label->setGeometry(QRect(280, 260, 91, 41));
        Msg_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);"));
        Msg_label->setAlignment(Qt::AlignCenter);
        Log_label = new QLabel(mqtt_client);
        Log_label->setObjectName(QString::fromUtf8("Log_label"));
        Log_label->setGeometry(QRect(-10, 340, 141, 51));
        Log_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"font-weight: bold;\n"
"font-size:25px;"));
        Log_label->setAlignment(Qt::AlignCenter);

        retranslateUi(mqtt_client);

        QMetaObject::connectSlotsByName(mqtt_client);
    } // setupUi

    void retranslateUi(QWidget *mqtt_client)
    {
        mqtt_client->setWindowTitle(QApplication::translate("mqtt_client", "Form", nullptr));
        Topic_label->setText(QApplication::translate("mqtt_client", "Topic", nullptr));
        QoS_lineEdit->setText(QApplication::translate("mqtt_client", "0", nullptr));
        Conection_label->setText(QApplication::translate("mqtt_client", "Conection", nullptr));
        Host_label->setText(QApplication::translate("mqtt_client", "Host", nullptr));
        Port_label->setText(QApplication::translate("mqtt_client", "Port", nullptr));
        Port_lineEdit->setText(QApplication::translate("mqtt_client", "1883", nullptr));
        Port_lineEdit->setPlaceholderText(QString());
        QoS_label->setText(QApplication::translate("mqtt_client", "QoS", nullptr));
        Host_lineEdit->setText(QApplication::translate("mqtt_client", "120.26.202.2", nullptr));
        Host_lineEdit->setPlaceholderText(QApplication::translate("mqtt_client", "120.26.202.2", nullptr));
        Subscribe_label->setText(QApplication::translate("mqtt_client", "Subscribe", nullptr));
        connect_pushbutton->setText(QApplication::translate("mqtt_client", "Connect", nullptr));
        Subscribe_pushbutton->setText(QApplication::translate("mqtt_client", "Subscribe", nullptr));
        Publish_label->setText(QApplication::translate("mqtt_client", "Publish", nullptr));
        Topic_label_2->setText(QApplication::translate("mqtt_client", "Topic", nullptr));
        Publish_pushbutton->setText(QApplication::translate("mqtt_client", "Publish", nullptr));
        Msg_label->setText(QApplication::translate("mqtt_client", "Msg", nullptr));
        Log_label->setText(QApplication::translate("mqtt_client", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mqtt_client: public Ui_mqtt_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTT_CLIENT_H
