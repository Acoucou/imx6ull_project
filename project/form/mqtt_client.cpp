#include "mqtt_client.h"
#include "ui_mqtt_client.h"

#include <QtCore/QDateTime>
#include <mqtt/qmqttclient.h>
#include <QtWidgets/QMessageBox>

mqtt_client::mqtt_client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mqtt_client)
{
    ui->setupUi(this);

    m_client = new QMqttClient(this);

    m_client->setHostname(ui->Host_lineEdit->text());
    m_client->setPort(ui->Port_lineEdit->text().toUInt());

    connect(m_client, &QMqttClient::stateChanged, this, &mqtt_client::updateLogStateChange);

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) {
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String("---Received Topic:  ")
                    + topic.name()
                    + QLatin1String(" Message:  ")
                    + message
                    + QLatin1Char('\n');
        ui->log_plainTextEdit->insertPlainText(content);
    });

    connect(ui->Host_lineEdit, &QLineEdit::textChanged, m_client, &QMqttClient::setHostname);

    connect(ui->connect_pushbutton, SIGNAL(clicked()), this, SLOT(connect_client()));
    connect(ui->Subscribe_pushbutton, SIGNAL(clicked()), this, SLOT(Subscribe_topic()));
    connect(ui->Publish_pushbutton, SIGNAL(clicked()), this, SLOT(publish_msg()));

    //
    QTextCursor cursor = ui->log_plainTextEdit->textCursor();
    cursor.movePosition(QTextCursor::End);

    // 设置新的光标并确保它是可见的
    ui->log_plainTextEdit->setTextCursor(cursor);
    ui->log_plainTextEdit->ensureCursorVisible();
}

mqtt_client::~mqtt_client()
{
    delete ui;
}

void mqtt_client::setClientPort(int port)
{
    m_client->setPort(port);
}

void mqtt_client::updateLogStateChange()
{
//    const QString content = QDateTime::currentDateTime().toString()
//                    + QLatin1String(": State Change")
//                    + QString::number(m_client->state())
//                    + QLatin1Char('\n');
//    ui->log_plainTextEdit->insertPlainText(content);
}

void mqtt_client::connect_client()
{
    if (m_client->state() == QMqttClient::Disconnected) {
        ui->Host_lineEdit->setEnabled(false);
        ui->connect_pushbutton->setText(tr("Disconnect"));
        ui->connect_pushbutton->setStyleSheet("background-color: red;color: rgb(255, 255, 255); border-radius:15px;font-size: 18px;");

        m_client->connectToHost();
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String("---Connect Success")
                    + QLatin1Char('\n');
        ui->log_plainTextEdit->insertPlainText(content);
    } else {
        ui->Host_lineEdit->setEnabled(true);
        ui->connect_pushbutton->setText(tr("Connect"));
        ui->connect_pushbutton->setStyleSheet("background-color: rgb(78, 154, 6);color: rgb(255, 255, 255);border-radius:15px;font-size: 18px;");

        m_client->disconnectFromHost();
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String("---Disconnect Success")
                    + QLatin1Char('\n');
        ui->log_plainTextEdit->insertPlainText(content);
    }
}

void mqtt_client::Subscribe_topic()
{
    auto subscription = m_client->subscribe(ui->Topic_lineEdit->text());
    if (!subscription) {
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not subscribe. Is there a valid connection?"));
        return;
    }else
    {
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String("---Subscribe_topic:  ")
                    + ui->Topic_lineEdit->text()
                    + QLatin1Char('\n');
        ui->log_plainTextEdit->insertPlainText(content);
    }
}

void mqtt_client::publish_msg()
{
    if (m_client->publish(ui->Topic_lineEdit_2->text(), ui->Msg_lineEdit->text().toUtf8()) == -1)
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
}


