/********************************************************************************
** Form generated from reading UI file 'opencv.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCV_H
#define UI_OPENCV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opencv
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *laplaceSharpen;
    QPushButton *gradSharpen;
    QPushButton *grayLeval;
    QPushButton *grayProcess;
    QPushButton *grayBalance;
    QGroupBox *groupBox_2;
    QPushButton *gaussFilter;
    QPushButton *windowFilter;
    QPushButton *formFilter;
    QPushButton *middleFilter;
    QPushButton *averageFilter;
    QGroupBox *groupBox_3;
    QPushButton *colorFit;
    QPushButton *targetDet;
    QPushButton *circleLbp;
    QPushButton *gaber;
    QPushButton *modelCheck;
    QGroupBox *groupBox_4;
    QPushButton *krischEdge;
    QPushButton *laplaceEdge;
    QPushButton *sobelEdge;
    QPushButton *prewitt;
    QPushButton *robertsEdge;
    QGroupBox *groupBox_5;
    QPushButton *thresholdSeg;
    QPushButton *Kittler;
    QPushButton *mixGuass;
    QPushButton *OSTU;
    QPushButton *frameDiff;
    QGroupBox *groupBox_6;
    QPushButton *wordTest;
    QPushButton *Haar1;
    QPushButton *Haar2;
    QPushButton *orb;
    QPushButton *svmTest;
    QPushButton *seletpic;
    QGroupBox *groupBox_7;
    QPushButton *guassNoise;
    QPushButton *saltNoise;
    QGroupBox *groupBox_8;
    QPushButton *camera2;
    QPushButton *camera;
    QGroupBox *groupBox_9;
    QPushButton *perspective;
    QPushButton *affine;

    void setupUi(QWidget *opencv)
    {
        if (opencv->objectName().isEmpty())
            opencv->setObjectName(QString::fromUtf8("opencv"));
        opencv->resize(824, 600);
        opencv->setMinimumSize(QSize(824, 600));
        opencv->setMaximumSize(QSize(824, 600));
        label_2 = new QLabel(opencv);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 20, 211, 221));
        label_2->setMaximumSize(QSize(211, 221));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(opencv);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 330, 211, 221));
        label_3->setMaximumSize(QSize(211, 221));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(opencv);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 330, 211, 221));
        label_4->setMaximumSize(QSize(211, 221));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        label_4->setAlignment(Qt::AlignCenter);
        label = new QLabel(opencv);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 211, 221));
        label->setMaximumSize(QSize(211, 221));
        label->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(opencv);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(460, 20, 111, 191));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox->setAlignment(Qt::AlignCenter);
        laplaceSharpen = new QPushButton(groupBox);
        laplaceSharpen->setObjectName(QString::fromUtf8("laplaceSharpen"));
        laplaceSharpen->setGeometry(QRect(0, 150, 110, 30));
        laplaceSharpen->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        gradSharpen = new QPushButton(groupBox);
        gradSharpen->setObjectName(QString::fromUtf8("gradSharpen"));
        gradSharpen->setGeometry(QRect(0, 120, 110, 30));
        gradSharpen->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        grayLeval = new QPushButton(groupBox);
        grayLeval->setObjectName(QString::fromUtf8("grayLeval"));
        grayLeval->setGeometry(QRect(0, 60, 110, 30));
        grayLeval->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        grayProcess = new QPushButton(groupBox);
        grayProcess->setObjectName(QString::fromUtf8("grayProcess"));
        grayProcess->setGeometry(QRect(0, 30, 110, 30));
        grayProcess->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        grayBalance = new QPushButton(groupBox);
        grayBalance->setObjectName(QString::fromUtf8("grayBalance"));
        grayBalance->setGeometry(QRect(0, 90, 110, 30));
        grayBalance->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_2 = new QGroupBox(opencv);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(580, 20, 111, 191));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gaussFilter = new QPushButton(groupBox_2);
        gaussFilter->setObjectName(QString::fromUtf8("gaussFilter"));
        gaussFilter->setGeometry(QRect(0, 150, 110, 30));
        gaussFilter->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        windowFilter = new QPushButton(groupBox_2);
        windowFilter->setObjectName(QString::fromUtf8("windowFilter"));
        windowFilter->setGeometry(QRect(0, 90, 110, 30));
        windowFilter->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        formFilter = new QPushButton(groupBox_2);
        formFilter->setObjectName(QString::fromUtf8("formFilter"));
        formFilter->setGeometry(QRect(0, 120, 110, 30));
        formFilter->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        middleFilter = new QPushButton(groupBox_2);
        middleFilter->setObjectName(QString::fromUtf8("middleFilter"));
        middleFilter->setGeometry(QRect(0, 60, 110, 30));
        middleFilter->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        averageFilter = new QPushButton(groupBox_2);
        averageFilter->setObjectName(QString::fromUtf8("averageFilter"));
        averageFilter->setGeometry(QRect(0, 30, 110, 30));
        averageFilter->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_3 = new QGroupBox(opencv);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(700, 20, 111, 191));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        colorFit = new QPushButton(groupBox_3);
        colorFit->setObjectName(QString::fromUtf8("colorFit"));
        colorFit->setGeometry(QRect(0, 120, 110, 30));
        colorFit->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        targetDet = new QPushButton(groupBox_3);
        targetDet->setObjectName(QString::fromUtf8("targetDet"));
        targetDet->setGeometry(QRect(0, 60, 110, 30));
        targetDet->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        circleLbp = new QPushButton(groupBox_3);
        circleLbp->setObjectName(QString::fromUtf8("circleLbp"));
        circleLbp->setGeometry(QRect(0, 30, 110, 30));
        circleLbp->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        gaber = new QPushButton(groupBox_3);
        gaber->setObjectName(QString::fromUtf8("gaber"));
        gaber->setGeometry(QRect(0, 150, 110, 30));
        gaber->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        modelCheck = new QPushButton(groupBox_3);
        modelCheck->setObjectName(QString::fromUtf8("modelCheck"));
        modelCheck->setGeometry(QRect(0, 90, 110, 30));
        modelCheck->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_4 = new QGroupBox(opencv);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(460, 360, 111, 191));
        groupBox_4->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        krischEdge = new QPushButton(groupBox_4);
        krischEdge->setObjectName(QString::fromUtf8("krischEdge"));
        krischEdge->setGeometry(QRect(0, 150, 110, 30));
        krischEdge->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        laplaceEdge = new QPushButton(groupBox_4);
        laplaceEdge->setObjectName(QString::fromUtf8("laplaceEdge"));
        laplaceEdge->setGeometry(QRect(0, 90, 110, 30));
        laplaceEdge->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        sobelEdge = new QPushButton(groupBox_4);
        sobelEdge->setObjectName(QString::fromUtf8("sobelEdge"));
        sobelEdge->setGeometry(QRect(0, 60, 110, 30));
        sobelEdge->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        prewitt = new QPushButton(groupBox_4);
        prewitt->setObjectName(QString::fromUtf8("prewitt"));
        prewitt->setGeometry(QRect(0, 120, 110, 30));
        prewitt->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        robertsEdge = new QPushButton(groupBox_4);
        robertsEdge->setObjectName(QString::fromUtf8("robertsEdge"));
        robertsEdge->setGeometry(QRect(0, 30, 110, 30));
        robertsEdge->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_5 = new QGroupBox(opencv);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(580, 360, 111, 191));
        groupBox_5->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        thresholdSeg = new QPushButton(groupBox_5);
        thresholdSeg->setObjectName(QString::fromUtf8("thresholdSeg"));
        thresholdSeg->setGeometry(QRect(0, 30, 110, 30));
        thresholdSeg->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        Kittler = new QPushButton(groupBox_5);
        Kittler->setObjectName(QString::fromUtf8("Kittler"));
        Kittler->setGeometry(QRect(0, 90, 110, 30));
        Kittler->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        mixGuass = new QPushButton(groupBox_5);
        mixGuass->setObjectName(QString::fromUtf8("mixGuass"));
        mixGuass->setGeometry(QRect(0, 150, 110, 30));
        mixGuass->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        OSTU = new QPushButton(groupBox_5);
        OSTU->setObjectName(QString::fromUtf8("OSTU"));
        OSTU->setGeometry(QRect(0, 60, 110, 30));
        OSTU->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        frameDiff = new QPushButton(groupBox_5);
        frameDiff->setObjectName(QString::fromUtf8("frameDiff"));
        frameDiff->setGeometry(QRect(0, 120, 110, 30));
        frameDiff->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_6 = new QGroupBox(opencv);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(700, 360, 111, 191));
        groupBox_6->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        wordTest = new QPushButton(groupBox_6);
        wordTest->setObjectName(QString::fromUtf8("wordTest"));
        wordTest->setGeometry(QRect(0, 90, 110, 30));
        wordTest->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        Haar1 = new QPushButton(groupBox_6);
        Haar1->setObjectName(QString::fromUtf8("Haar1"));
        Haar1->setGeometry(QRect(0, 150, 110, 30));
        Haar1->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        Haar2 = new QPushButton(groupBox_6);
        Haar2->setObjectName(QString::fromUtf8("Haar2"));
        Haar2->setGeometry(QRect(0, 120, 110, 30));
        Haar2->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        orb = new QPushButton(groupBox_6);
        orb->setObjectName(QString::fromUtf8("orb"));
        orb->setGeometry(QRect(0, 30, 110, 30));
        orb->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        svmTest = new QPushButton(groupBox_6);
        svmTest->setObjectName(QString::fromUtf8("svmTest"));
        svmTest->setGeometry(QRect(0, 60, 110, 30));
        svmTest->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        seletpic = new QPushButton(opencv);
        seletpic->setObjectName(QString::fromUtf8("seletpic"));
        seletpic->setGeometry(QRect(180, 270, 91, 31));
        seletpic->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: rgb(114, 159, 207);"));
        groupBox_7 = new QGroupBox(opencv);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(460, 230, 111, 101));
        groupBox_7->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        guassNoise = new QPushButton(groupBox_7);
        guassNoise->setObjectName(QString::fromUtf8("guassNoise"));
        guassNoise->setGeometry(QRect(0, 60, 110, 30));
        guassNoise->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        saltNoise = new QPushButton(groupBox_7);
        saltNoise->setObjectName(QString::fromUtf8("saltNoise"));
        saltNoise->setGeometry(QRect(0, 30, 110, 30));
        saltNoise->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_8 = new QGroupBox(opencv);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(580, 230, 111, 101));
        groupBox_8->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_8->setAlignment(Qt::AlignCenter);
        camera2 = new QPushButton(groupBox_8);
        camera2->setObjectName(QString::fromUtf8("camera2"));
        camera2->setGeometry(QRect(0, 30, 110, 30));
        camera2->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        camera = new QPushButton(groupBox_8);
        camera->setObjectName(QString::fromUtf8("camera"));
        camera->setGeometry(QRect(0, 60, 110, 30));
        camera->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        groupBox_9 = new QGroupBox(opencv);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(700, 230, 111, 101));
        groupBox_9->setStyleSheet(QString::fromUtf8("color: rgb(114, 159, 207);\n"
"background: black;\n"
"border-radius:20px;"));
        groupBox_9->setAlignment(Qt::AlignCenter);
        perspective = new QPushButton(groupBox_9);
        perspective->setObjectName(QString::fromUtf8("perspective"));
        perspective->setGeometry(QRect(0, 60, 110, 30));
        perspective->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));
        affine = new QPushButton(groupBox_9);
        affine->setObjectName(QString::fromUtf8("affine"));
        affine->setGeometry(QRect(0, 30, 110, 30));
        affine->setStyleSheet(QString::fromUtf8("margin-top:3px;\n"
"background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;"));

        retranslateUi(opencv);

        QMetaObject::connectSlotsByName(opencv);
    } // setupUi

    void retranslateUi(QWidget *opencv)
    {
        opencv->setWindowTitle(QApplication::translate("opencv", "Form", nullptr));
        label_2->setText(QApplication::translate("opencv", "channel_1", nullptr));
        label_3->setText(QApplication::translate("opencv", "channel_2", nullptr));
        label_4->setText(QApplication::translate("opencv", "channel_3", nullptr));
        label->setText(QApplication::translate("opencv", "src", nullptr));
        groupBox->setTitle(QApplication::translate("opencv", " \345\233\276\345\203\217\351\242\204\345\244\204\347\220\206", nullptr));
        laplaceSharpen->setText(QApplication::translate("opencv", "Laplace\351\224\220\345\214\226", nullptr));
        gradSharpen->setText(QApplication::translate("opencv", "\346\242\257\345\272\246\351\224\220\345\214\226", nullptr));
        grayLeval->setText(QApplication::translate("opencv", "\347\201\260\345\272\246\347\233\264\346\226\271\345\233\276", nullptr));
        grayProcess->setText(QApplication::translate("opencv", "\347\201\260\345\272\246\345\244\204\347\220\206", nullptr));
        grayBalance->setText(QApplication::translate("opencv", "\347\201\260\345\272\246\345\235\207\350\241\241", nullptr));
        groupBox_2->setTitle(QApplication::translate("opencv", "\346\273\244\346\263\242", nullptr));
        gaussFilter->setText(QApplication::translate("opencv", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
        windowFilter->setText(QApplication::translate("opencv", "\350\276\271\347\252\227\346\273\244\346\263\242", nullptr));
        formFilter->setText(QApplication::translate("opencv", "\345\275\242\346\200\201\345\255\246\346\273\244\346\263\242", nullptr));
        middleFilter->setText(QApplication::translate("opencv", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        averageFilter->setText(QApplication::translate("opencv", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        groupBox_3->setTitle(QApplication::translate("opencv", "\347\211\271\345\276\201\346\230\216\346\230\276", nullptr));
        colorFit->setText(QApplication::translate("opencv", "\351\242\234\350\211\262\345\214\271\351\205\215", nullptr));
        targetDet->setText(QApplication::translate("opencv", "\347\233\264\346\226\271\345\233\276\346\243\200\346\265\213", nullptr));
        circleLbp->setText(QApplication::translate("opencv", "LBP", nullptr));
        gaber->setText(QApplication::translate("opencv", "Garbor\346\273\244\346\263\242", nullptr));
        modelCheck->setText(QApplication::translate("opencv", "\346\250\241\346\235\277\345\214\271\351\205\215", nullptr));
        groupBox_4->setTitle(QApplication::translate("opencv", "\350\276\271\347\274\230\346\243\200\346\265\213", nullptr));
        krischEdge->setText(QApplication::translate("opencv", "Krisch", nullptr));
        laplaceEdge->setText(QApplication::translate("opencv", "Laplace", nullptr));
        sobelEdge->setText(QApplication::translate("opencv", "Sobel", nullptr));
        prewitt->setText(QApplication::translate("opencv", "Prewitt", nullptr));
        robertsEdge->setText(QApplication::translate("opencv", "Roberts", nullptr));
        groupBox_5->setTitle(QApplication::translate("opencv", "\350\203\214\346\231\257\345\244\204\347\220\206", nullptr));
        thresholdSeg->setText(QApplication::translate("opencv", "\351\230\210\345\200\274\345\210\206\345\211\262", nullptr));
        Kittler->setText(QApplication::translate("opencv", "Kittler", nullptr));
        mixGuass->setText(QApplication::translate("opencv", "\351\253\230\346\226\257\346\267\267\345\220\210\350\203\214\346\231\257", nullptr));
        OSTU->setText(QApplication::translate("opencv", "OSTU", nullptr));
        frameDiff->setText(QApplication::translate("opencv", "\345\270\247\351\227\264\345\267\256\345\210\206", nullptr));
        groupBox_6->setTitle(QApplication::translate("opencv", "\347\211\271\345\276\201\346\217\220\345\217\226", nullptr));
        wordTest->setText(QApplication::translate("opencv", "\345\255\227\347\254\246\346\265\213\350\257\225", nullptr));
        Haar1->setText(QApplication::translate("opencv", "Haar\347\256\227\346\263\225-\346\260\264\345\271\263", nullptr));
        Haar2->setText(QApplication::translate("opencv", "Haar\347\256\227\346\263\225-\347\253\226\347\233\264", nullptr));
        orb->setText(QApplication::translate("opencv", "ORB", nullptr));
        svmTest->setText(QApplication::translate("opencv", "\345\235\220\346\240\207\347\202\271SVM", nullptr));
        seletpic->setText(QApplication::translate("opencv", "\351\200\211\346\213\251\345\233\276\345\203\217", nullptr));
        groupBox_7->setTitle(QApplication::translate("opencv", "\345\231\252\345\243\260", nullptr));
        guassNoise->setText(QApplication::translate("opencv", "\351\253\230\346\226\257\345\231\252\345\243\260", nullptr));
        saltNoise->setText(QApplication::translate("opencv", "\346\244\222\347\233\220\345\231\252\345\243\260", nullptr));
        groupBox_8->setTitle(QApplication::translate("opencv", "\346\221\204\345\203\217\346\240\207\345\256\232", nullptr));
        camera2->setText(QApplication::translate("opencv", "\346\221\204\345\203\217\346\234\272\346\240\207\345\256\232", nullptr));
        camera->setText(QApplication::translate("opencv", "\347\253\213\344\275\223\345\214\271\351\205\215", nullptr));
        groupBox_9->setTitle(QApplication::translate("opencv", "\345\233\276\345\203\217\345\217\230\346\215\242", nullptr));
        perspective->setText(QApplication::translate("opencv", "\351\200\217\350\247\206\345\217\230\346\215\242", nullptr));
        affine->setText(QApplication::translate("opencv", "\344\273\277\345\260\204\345\217\230\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opencv: public Ui_opencv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCV_H
