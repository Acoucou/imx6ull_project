/********************************************************************************
** Form generated from reading UI file 'musicplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAY_H
#define UI_MUSICPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlay
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MusicPlay)
    {
        if (MusicPlay->objectName().isEmpty())
            MusicPlay->setObjectName(QString::fromUtf8("MusicPlay"));
        MusicPlay->resize(800, 600);
        menubar = new QMenuBar(MusicPlay);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        MusicPlay->setMenuBar(menubar);
        centralwidget = new QWidget(MusicPlay);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MusicPlay->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MusicPlay);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MusicPlay->setStatusBar(statusbar);

        retranslateUi(MusicPlay);

        QMetaObject::connectSlotsByName(MusicPlay);
    } // setupUi

    void retranslateUi(QMainWindow *MusicPlay)
    {
        MusicPlay->setWindowTitle(QApplication::translate("MusicPlay", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicPlay: public Ui_MusicPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAY_H
