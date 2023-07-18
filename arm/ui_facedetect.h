/********************************************************************************
** Form generated from reading UI file 'facedetect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEDETECT_H
#define UI_FACEDETECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_faceDetect
{
public:
    QPushButton *faceHaar;
    QPushButton *takePic;
    QPushButton *start;
    QComboBox *comboBox;
    QLabel *displayLabel;
    QPushButton *closeDetect;

    void setupUi(QWidget *faceDetect)
    {
        if (faceDetect->objectName().isEmpty())
            faceDetect->setObjectName(QString::fromUtf8("faceDetect"));
        faceDetect->resize(824, 600);
        faceDetect->setMinimumSize(QSize(824, 600));
        faceDetect->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 32);"));
        faceHaar = new QPushButton(faceDetect);
        faceHaar->setObjectName(QString::fromUtf8("faceHaar"));
        faceHaar->setGeometry(QRect(680, 70, 101, 41));
        faceHaar->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        takePic = new QPushButton(faceDetect);
        takePic->setObjectName(QString::fromUtf8("takePic"));
        takePic->setGeometry(QRect(680, 250, 101, 41));
        takePic->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        start = new QPushButton(faceDetect);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(680, 430, 101, 61));
        start->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:30px;"));
        comboBox = new QComboBox(faceDetect);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(680, 320, 111, 51));
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        displayLabel = new QLabel(faceDetect);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        displayLabel->setGeometry(QRect(20, 10, 621, 541));
        displayLabel->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));
        displayLabel->setAlignment(Qt::AlignCenter);
        closeDetect = new QPushButton(faceDetect);
        closeDetect->setObjectName(QString::fromUtf8("closeDetect"));
        closeDetect->setGeometry(QRect(680, 140, 101, 41));
        closeDetect->setStyleSheet(QString::fromUtf8("background:transparent; \n"
"background:#3c3c3c;\n"
"color: white;\n"
"border-radius:20px;"));

        retranslateUi(faceDetect);

        QMetaObject::connectSlotsByName(faceDetect);
    } // setupUi

    void retranslateUi(QWidget *faceDetect)
    {
        faceDetect->setWindowTitle(QApplication::translate("faceDetect", "Form", nullptr));
        faceHaar->setText(QApplication::translate("faceDetect", "\344\272\272\350\204\270\350\257\206\345\210\253", nullptr));
        takePic->setText(QApplication::translate("faceDetect", "\346\213\215\347\205\247", nullptr));
        start->setText(QApplication::translate("faceDetect", "\345\274\200\345\247\213\346\265\201", nullptr));
        comboBox->setItemText(0, QApplication::translate("faceDetect", "        \350\256\276\345\244\207", nullptr));

        displayLabel->setText(QApplication::translate("faceDetect", "src", nullptr));
        closeDetect->setText(QApplication::translate("faceDetect", "\345\205\263\351\227\255\344\272\272\350\204\270\350\257\206\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class faceDetect: public Ui_faceDetect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEDETECT_H
