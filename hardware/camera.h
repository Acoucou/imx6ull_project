/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   05_opencv_camera
* @brief         camera.h
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2021-03-17
*******************************************************************/
#ifndef CAMERA_H
#define CAMERA_H

#include <QImage>
#include <QTimer>
/* 使用命名空间cv下的VideoCapture与Mat类 */
namespace cv {
class VideoCapture;
class Mat;
}

class Camera : public QObject
{
    Q_OBJECT
public:
    explicit Camera(QObject *parent = nullptr);
    ~Camera();

    void cameraStop();

signals:
    /* 声明信号，用于传递有图片信号时显示图像 */
    void readyImage(const QImage&);

public slots:
    /* 用于开启定时器 */
    bool cameraProcess(bool);

    /* 选择摄像头 */
    void selectCameraDevice(int);

private slots:
    /* 定时器时间到处理函数，发送图像数据信号 */
    void timerTimeOut();

private:
    /* 声明OpenCV的cv命名空间下的VideoCapture对象 */
    cv::VideoCapture * capture;

    /* 定时器，定时处理获取图像 */
    QTimer * timer;

    /* 图像转换处理函数 */
    QImage matToQImage(const cv::Mat&);
};

#endif // CAMERA_H
