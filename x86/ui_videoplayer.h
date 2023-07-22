/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoplayer
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *videoplayer)
    {
        if (videoplayer->objectName().isEmpty())
            videoplayer->setObjectName(QString::fromUtf8("videoplayer"));
        videoplayer->resize(800, 600);
        menubar = new QMenuBar(videoplayer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        videoplayer->setMenuBar(menubar);
        centralwidget = new QWidget(videoplayer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        videoplayer->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(videoplayer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        videoplayer->setStatusBar(statusbar);

        retranslateUi(videoplayer);

        QMetaObject::connectSlotsByName(videoplayer);
    } // setupUi

    void retranslateUi(QMainWindow *videoplayer)
    {
        videoplayer->setWindowTitle(QApplication::translate("videoplayer", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videoplayer: public Ui_videoplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
