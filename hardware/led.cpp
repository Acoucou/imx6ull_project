#include "led.h"
#include <QDebug>

led::~led()
{
}

void led::setLedState()
{
    /* 在设置LED状态时先读取 */
        bool state = getLedState();

        /* 如果文件不存在，则返回 */
        if (!file.exists())
            return;

        if(!file.open(QIODevice::ReadWrite))
            qDebug()<<file.errorString();

        QByteArray buf[2] = {"0", "1"};

        /* 写0或1 */
        if (sta){
            file.write(buf[1]);
            qDebug()<<"1"<<endl;
        }
        else{
            file.write(buf[0]);
            qDebug()<<"0"<<endl;
        }
        sta = !sta;
        /* 关闭文件 */
        file.close();
}

bool led::getLedState(){
    /* 如果文件不存在，则返回 */
    if (!file.exists())
        return false;

    if(!file.open(QIODevice::ReadWrite))
        qDebug()<<file.errorString();

    QTextStream in(&file);

    /* 读取文件所有数据 */
    QString buf = in.readLine();

    /* 打印出读出的值 */
    qDebug()<<"buf: "<<buf<<endl;
    file.close();

    if(buf == "1"){
        qDebug()<<"true"<<endl;
        return true;

    }else{
        qDebug()<<"false"<<endl;
        return false;

    }
}
