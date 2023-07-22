#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H

#include <QWidget>
#include <mqtt/qmqttclient.h>

namespace Ui {
class mqtt_client;
}

class mqtt_client : public QWidget
{
    Q_OBJECT

public:
    explicit mqtt_client(QWidget *parent = nullptr);
    ~mqtt_client();


public slots:
    void setClientPort(int port);

private slots:
    void updateLogStateChange();
    void connect_client();
    void Subscribe_topic();
    void publish_msg();

private:
    Ui::mqtt_client *ui;
    QMqttClient *m_client;
};

#endif // MQTT_CLIENT_H
