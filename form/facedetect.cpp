#include "facedetect.h"
#include "ui_facedetect.h"
#include "QDebug"



faceDetect::faceDetect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::faceDetect)
{
    ui->setupUi(this);

    /* 布局初始化 */
    layoutInit();

    /* 扫描摄像头 */
    scanCameraDevice();

    connect(ui->faceHaar, SIGNAL(clicked()), this, SLOT(faceHaar_clicked()));
    connect(ui->closeDetect, SIGNAL(clicked()), this, SLOT(closeDetect_clicked()));
}

faceDetect::~faceDetect()
{
    delete ui;
}

void faceDetect::scanCameraDevice()
{
    /* 如果是Windows系统，一般是摄像头0 */
#if win32
    ui->comboBox->addItem("windows摄像头0");
    connect(ui->comboBox,
            SIGNAL(currentIndexChanged(int)),
            camera, SLOT(selectCameraDevice(int)));
#else
    /* QFile文件指向/dev/video0 */
    QFile file("/dev/video0");

    /* 如果文件存在 */
    if (file.exists())
        ui->comboBox->addItem("video0");
    else {
        ui->displayLabel->setText("无摄像头设备");
        return;
    }

    file.setFileName("/dev/video1");

    if (file.exists()) {
        ui->comboBox->addItem("video1");
        /* 开发板ov5640等设备是1 */
        ui->comboBox->setCurrentIndex(1);
    }

    file.setFileName("/dev/video2");

    if (file.exists())
        /* 开发板USB摄像头设备是2 */
        ui->comboBox->addItem("video2");

#if !__arm__
    /* ubuntu的USB摄像头一般是0 */
    ui->comboBox->setCurrentIndex(0);
#endif

    connect(ui->comboBox,
            SIGNAL(currentIndexChanged(int)),
            camera, SLOT(selectCameraDevice(int)));
#endif
}

void faceDetect::layoutInit()
{
    /* 获取屏幕的分辨率，Qt官方建议使用这
     * 种方法获取屏幕分辨率，防上多屏设备导致对应不上
     * 注意，这是获取整个桌面系统的分辨率
     */
    QList <QScreen *> list_screen =  QGuiApplication::screens();

    /* 自动拉伸 */
    ui->displayLabel->setScaledContents(true);

    /* 设置一些属性 */
    ui->takePic->setText("拍照");
    ui->takePic->setEnabled(false);
    ui->start->setText("开始");
    ui->start->setCheckable(true);

    /* 摄像头 */
    camera = new Camera(this);

    /* 信号连接槽 */
    connect(camera, SIGNAL(readyImage(QImage)),
            this, SLOT(showImage(QImage)));
    connect(ui->start, SIGNAL(clicked(bool)),
            camera, SLOT(cameraProcess(bool)));
    connect(ui->start, SIGNAL(clicked(bool)),
            this, SLOT(setButtonText(bool)));
    connect(ui->takePic, SIGNAL(clicked()),
            this, SLOT(saveImageToLocal()));

}
void faceDetect::showImage(const QImage &image)
{
    /* 显示图像 */
    ui->displayLabel->setPixmap(QPixmap::fromImage(image));
    saveImage = image;

    /* 判断图像是否为空，空则设置拍照按钮不可用 */
    if (!saveImage.isNull())
        ui->takePic->setEnabled(true);
    else
        ui->takePic->setEnabled(false);
}

void faceDetect::setButtonText(bool bl)
{
    if (bl) {
        /* 设置摄像头设备 */
        camera->selectCameraDevice(ui->comboBox->currentIndex());
        ui->start->setText("关闭");
    } else {
        /* 若关闭了摄像头则禁用拍照按钮 */
        ui->takePic->setEnabled(false);
        ui->start->setText("开始");
    }
}

void faceDetect::saveImageToLocal()
{
    /* 判断图像是否为空 */
    if (!saveImage.isNull()) {
        QString fileName =
                QCoreApplication::applicationDirPath() + "/test.png";
        qDebug()<<"正在保存"<<fileName<<"图片,请稍候..."<<endl;

        /* save(arg1，arg2，arg3)重载函数，arg1代表路径文件名，
         * arg2保存的类型，arg3代表保存的质量等级 */
        saveImage.save(fileName, "PNG", -1);

        /* 设置拍照的图像为显示在photoLabel上 */
        ui->displayLabel->setPixmap(QPixmap::fromImage(QImage(fileName)));

        qDebug()<<"保存完成！"<<endl;
    }
}

void faceDetect::closeDetect_clicked()
{
    capture1.release();
    cap_flag = true;
}

void faceDetect::faceHaar_clicked()
{
#if !__arm__
    String label = "Face";
    CascadeClassifier faceCascade;
    faceCascade.load("../project/opencv_src/face-haar/haarcascade_frontalface_alt2.xml");//加载分类器

    capture1.open(0);// 打开摄像头
    //      capture.open("video.avi");    // 打开视频
    if (!capture1.isOpened())
    {
        //_cprintf("open camera failed. \n");
        return;
    }
    Mat img, imgGray;
    vector<Rect> faces;
    while (1)
    {
        capture1 >> img;// 读取图像至img
        if (img.empty())continue;
        if (img.channels() == 3)
            cvtColor(img, imgGray, CV_RGB2GRAY);
        else
        {
            imgGray = img;
        }
        //double start = cv::getTickCount();
        faceCascade.detectMultiScale(imgGray, faces, 1.2, 6, 0, Size(0, 0));// 检测人脸
        //double end = cv::getTickCount();
        //_cprintf("run time: %f ms\n", (end - start));
        if (faces.size()>0)
        {
            for (int i = 0; i<faces.size(); i++)
            {
                rectangle(img, Point(faces[i].x, faces[i].y), Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height), Scalar(0, 255, 0), 1, 8);
                putText(img, label, Point(faces[i].x, faces[i].y -5), FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0, 255,0));
            }
        }


        /* USB摄像头和OV5640等都是RGB三通道，不考虑单/四通道摄像头 */
        if(img.type() == CV_8UC3) {

            /* 得到图像的的首地址 */
            const uchar *pimg = (const uchar*)img.data;

            /* 以img构造图片 */
            QImage qImage(pimg, img.cols, img.rows, img.step,
                          QImage::Format_RGB888);

            /* 在不改变实际图像数据的条件下，交换红蓝通道 */
            // return qImage.rgbSwapped();

            /* 显示图像 */
            ui->displayLabel->setPixmap(QPixmap::fromImage(qImage.rgbSwapped()));
        }
        else if(img.type() == CV_8UC4)
           {

               const uchar *pSrc = (const uchar*)img.data;
               QImage qImage(pSrc, img.cols, img.rows, img.step, QImage::Format_ARGB32);
               // return qImage.copy();

               /* 显示图像 */
               ui->displayLabel->setPixmap(QPixmap::fromImage(qImage.copy()));
           }

//        imshow("CamerFace", img); // 显示
        if (waitKey(1) != -1)
            break;// delay ms 等待按键退出

        if(cap_flag)
            break;
    }
#endif
}
