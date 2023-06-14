#ifndef OPENCV_H
#define OPENCV_H

#include <QWidget>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/ml.hpp>
#include <QFileDialog>
#include <QVector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <qmath.h>
#include <vector>
#include <opencv2/calib3d/calib3d.hpp>
#include "opencv2/calib3d.hpp"
#include <opencv2/features2d/features2d.hpp>
#include <stdio.h>
#include <fstream>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;

namespace Ui {
class opencv;
}

class opencv : public QWidget
{
    Q_OBJECT

public:
    explicit opencv(QWidget *parent = nullptr);
    ~opencv();

private:
    Ui::opencv *ui;
    /* widget小部件 */
    QWidget *widget;

    Mat srcImg, grayImg, noiseImg;


private slots:
    // 图像预处理
    void seletpic_clicked(); // seletpic
    void grayProcess_clicked();
    void grayLeval_clicked();
    void grayBalance_clicked();
    void gradSharpen_clicked();
    void laplaceSharpen_clicked();

    // 边缘检测
    void robertsEdge_clicked();
    void sobelEdge_clicked();
    void prewitt_clicked();
    void laplaceEdge_clicked();
    void Canny_clicked();
    void krischEdge_clicked();

    // 噪声
    void saltNoise_clicked();
    void guassNoise_clicked();

    // 滤波
    void averageFilter_clicked();
    void middleFilter_clicked();
    void windowFilter_clicked();
    void gaussFilter_clicked();
    void formFilter_clicked();

    // 图像变换
    void affine_clicked();
    void perspective_clicked();

    // 背景处理
    void thresholdSeg_clicked();
    void OSTU_clicked();
    void Kittler_clicked();
    void frameDiff_clicked();
    void mixGuass_clicked();


    // 特征明显
    void circleLbp_clicked();
    void targetDet_clicked();
    void modelCheck_clicked();
    void cloaking_clicked();
    void colorFit_clicked();
    void gaber_clicked();

    // 特征提取
    void SIFT_clicked();
    void orb_clicked();
    void svmTest_clicked();
    void wordTest_clicked();
    void Haar1_clicked();
    void Haar2_clicked();

    // 摄像标定
    void camera_clicked();
    void camera2_clicked();

};

#endif // OPENCV_H
