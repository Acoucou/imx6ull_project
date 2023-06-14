/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   sensor
* @brief         icm20608.h
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2020-07-10
*******************************************************************/
#ifndef ICM20608_H
#define ICM20608_H

#include <QObject>
#include <QTimer>

class Icm20608 : public QObject
{
    Q_OBJECT

public:
    explicit Icm20608(QObject *parent = 0);
    ~Icm20608();

    Q_INVOKABLE void setCapture(bool str);

private:
    QTimer *timer_2060;
    QString gxdata;
    QString gydata;
    QString gzdata;
    QString axdata;
    QString aydata;
    QString azdata;
    QString tempdata;

public:
    QString gxData();
    QString gyData();
    QString gzData();
    QString axData();
    QString ayData();
    QString azData();
    QString tempData();

    void icm20608ReadData();

    Q_PROPERTY(QString gxData READ gxData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString gyData READ gyData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString gzData READ gzData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString axData READ axData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString ayData READ ayData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString azData READ azData NOTIFY icm20608DataChanged)
    Q_PROPERTY(QString tempData READ tempData NOTIFY icm20608DataChanged)

public slots:
    void timer_timeout();


signals:
    void icm20608DataChanged();
};

#endif // ICM20608_H
