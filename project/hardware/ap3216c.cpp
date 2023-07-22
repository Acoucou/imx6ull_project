/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   sensor
* @brief         ap3216c.cpp
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2020-07-10
*******************************************************************/
#include "ap3216c.h"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>


Ap3216c::Ap3216c(QObject *parent) : QObject (parent)
{
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(timer_timeout()));
}

Ap3216c::~Ap3216c()
{

}

void Ap3216c::timer_timeout()
{
    alsdata = readAlsData();
    psdata = readPsData();
    irdata = readIrData();
    emit ap3216cDataChanged();
}

QString Ap3216c::readIrData()
{
    char const *filename = "/sys/class/misc/ap3216c/ir";
    int err = 0;
    int fd;
    char buf[10];

    fd = open(filename, O_RDONLY);
    if(fd < 0) {
        close(fd);
        return "open file error!";
    }

    err = read(fd, buf, sizeof(buf));
    if (err < 0) {
        close(fd);
        return "read data error!";
    }
    close(fd);

    QString irValue = buf;
    QStringList list = irValue.split("\n");
    return list[0];
}

QString Ap3216c::readPsData()
{
    char const *filename = "/sys/class/misc/ap3216c/ps";
    int err = 0;
    int fd;
    char buf[10];

    fd = open(filename, O_RDONLY);
    if(fd < 0) {
        close(fd);
        return "open file error!";
    }

    err = read(fd, buf, sizeof(buf));
    if (err < 0) {
        close(fd);
        return "read data error!";
    }
    close(fd);

    QString psValue = buf;
    QStringList list = psValue.split("\n");
    return list[0];
}

QString Ap3216c::readAlsData()
{
    char const *filename = "/sys/class/misc/ap3216c/als";
    int err = 0;
    int fd;
    char buf[10];

    fd = open(filename, O_RDONLY);
    if(fd < 0) {
        close(fd);
        return "open file error!";
    }

    err = read(fd, buf, sizeof(buf));
    if (err < 0) {
        close(fd);
        return "read data error!";
    }
    close(fd);

    QString alsValue = buf;
    QStringList list = alsValue.split("\n");
    return list[0];
}

QString Ap3216c::alsData()
{
    return alsdata;
}

QString Ap3216c::irData()
{
    return irdata;
}

QString Ap3216c::psData()
{
    return psdata;
}

void Ap3216c::setCapture(bool str)
{
    if(str)
        timer->start(500);
    else
        timer->stop();
}
