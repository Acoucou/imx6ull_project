/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   05_opencv_camera
* @brief         camera.cpp
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2021-03-17
*******************************************************************/
#include "camera.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <QImage>
#include <QDebug>

using namespace std;
using namespace cv;

Camera::Camera(QObject *parent) :
    QObject(parent)
{
    /* 实例化 */
    capture = new cv::VideoCapture();
    timer = new QTimer(this);

    /* 信号槽连接 */
    connect(timer, SIGNAL(timeout()), this, SLOT(timerTimeOut()));
}

Camera::~Camera()
{
    delete capture;
    capture = NULL;
}

void Camera::cameraStop(){
    capture->release();
}

void Camera::selectCameraDevice(int index)
{
    /* 如果有其他摄像头打开了，先释放 */
    if (capture->isOpened()) {
        capture->release();
    }

    /* 打开摄像头设备 */
    capture->open(index);
}

bool Camera::cameraProcess(bool bl)
{
    if (bl) {
        /* 为什么是33？1000/33约等于30帧，也就是一秒最多显示30帧  */
        timer->start(33);
    } else {
        timer->stop();
        cameraStop();
    }
    /* 返回摄像头的状态 */
    return capture->isOpened();
}

void Camera::timerTimeOut()
{

    /* 如果摄像头没有打开，停止定时器，返回 */
    if (!capture->isOpened()) {
        timer->stop();
        return;
    }
    static cv::Mat ColorImage;
    static cv::Mat GrayImage;
    *capture >> ColorImage;

   //cvtColor(ColorImage, GrayImage, CV_BGR2GRAY); //转化为灰度图片
    if (ColorImage.cols)
        /* 发送图片信号 */
        emit readyImage(matToQImage(ColorImage));
}

QImage Camera::matToQImage(const cv::Mat &img)
{

    /* USB摄像头和OV5640等都是RGB三通道，不考虑单/四通道摄像头 */
    if(img.type() == CV_8UC3) {

        /* 得到图像的的首地址 */
        const uchar *pimg = (const uchar*)img.data;

        /* 以img构造图片 */
        QImage qImage(pimg, img.cols, img.rows, img.step,
                      QImage::Format_RGB888);

        /* 在不改变实际图像数据的条件下，交换红蓝通道 */
        return qImage.rgbSwapped();
    }
    else if(img.type() == CV_8UC4)
       {

           const uchar *pSrc = (const uchar*)img.data;
           QImage qImage(pSrc, img.cols, img.rows, img.step, QImage::Format_ARGB32);
           return qImage.copy();
       }

    /* 返回QImage */

    return QImage();
}
