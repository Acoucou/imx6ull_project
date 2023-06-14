/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   sensor
* @brief         icm20608.cpp
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2020-07-10
*******************************************************************/
#include "icm20608.h"
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>

Icm20608::Icm20608(QObject *parent) : QObject (parent)
{
    timer_2060 = new QTimer();
#if __arm__
    system("insmod /home/root/driver/icm20608/icm20608.ko");
#endif
    connect(timer_2060,SIGNAL(timeout()),this,SLOT(timer_timeout()));
}

Icm20608::~Icm20608()
{

}

void Icm20608::icm20608ReadData()
{
    int fd;
    char const *filename = "/dev/icm20608";
    signed int databuf[7];
    unsigned char data[14];
    signed int gyro_x_adc, gyro_y_adc, gyro_z_adc;
    signed int accel_x_adc, accel_y_adc, accel_z_adc;
    signed int temp_adc;

    float gyro_x_act, gyro_y_act, gyro_z_act;
    float accel_x_act, accel_y_act, accel_z_act;
    float temp_act;

    int ret = 0;

    fd = open(filename, O_RDWR);
    if(fd < 0) {
        printf("can't open file %s\r\n", filename);
        return;
    }

    ret = read(fd, databuf, sizeof(databuf));
    /* 若读取成功 */
    if (ret == 0) {
        gyro_x_adc = databuf[0];
        gyro_y_adc = databuf[1];
        gyro_z_adc = databuf[2];
        accel_x_adc = databuf[3];
        accel_y_adc = databuf[4];
        accel_z_adc = databuf[5];
        temp_adc = databuf[6];

        /* 实际值 */
        gyro_x_act = (float)(gyro_x_adc)  / 16.4;
        gyro_y_act = (float)(gyro_y_adc)  / 16.4;
        gyro_z_act = (float)(gyro_z_adc)  / 16.4;
        accel_x_act = (float)(accel_x_adc) / 2048;
        accel_y_act = (float)(accel_y_adc) / 2048;
        accel_z_act = (float)(accel_z_adc) / 2048;
        temp_act = ((float)(temp_adc) - 25 ) / 326.8 + 25;

        gxdata = QString::number(gyro_x_act, 'f', 2);
        gydata = QString::number(gyro_y_act, 'f', 2);
        gzdata = QString::number(gyro_z_act, 'f', 2);
        axdata = QString::number(accel_x_act, 'f', 2);
        aydata = QString::number(accel_y_act, 'f', 2);
        azdata = QString::number(accel_z_act, 'f', 2);
        tempdata = QString::number(temp_act, 'f', 2);
    }
    close(fd);
    emit icm20608DataChanged();
}

QString Icm20608::gxData()
{
    return  gxdata;
}

QString Icm20608::gyData()
{
    return  gydata;
}

QString Icm20608::gzData()
{
    return  gzdata;
}

QString Icm20608::axData()
{
    return  axdata;
}

QString Icm20608::ayData()
{
    return  aydata;
}

QString Icm20608::azData()
{
    return  azdata;
}

QString Icm20608::tempData()
{
    return  tempdata;
}


void Icm20608::timer_timeout()
{
    icm20608ReadData();
}

void Icm20608::setCapture(bool str)
{
    if(str)
        timer_2060->start(500);
    else
        timer_2060->stop();
}
