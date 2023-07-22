#ifndef FACEDETECT_H
#define FACEDETECT_H

#include <QWidget>

#include "camera.h"
#include "opencv.h"

namespace Ui {
class faceDetect;
}

class faceDetect : public QWidget
{
    Q_OBJECT

public:
    explicit faceDetect(QWidget *parent = nullptr);
    ~faceDetect();

    VideoCapture capture1;
    bool cap_flag = false;

private:
    Ui::faceDetect *ui;

    /* 拍照保存的照片 */
    QImage saveImage;

    /* 摄像头设备 */
    Camera *camera;

    /* 布局初始化 */
    void layoutInit();

    /* 扫描是否存在摄像头 */
    void scanCameraDevice();

private slots:
    void faceHaar_clicked();

    /* 显示图像 */
    void showImage(const QImage&);

    /* 设置按钮文本 */
    void setButtonText(bool);

    /* 保存照片到本地 */
    void saveImageToLocal();

    void closeDetect_clicked();
};

#endif // FACEDETECT_H
