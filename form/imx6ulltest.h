#ifndef IMX6ULLTEST_H
#define IMX6ULLTEST_H

#include <QMainWindow>
#include <QTimer>
#include <QChartView>
#include <QValueAxis>
#include <QLineSeries>
#include <QSplineSeries>
#include "ap3216c.h"
#include "icm20608.h"


class Ap3216c;
class Icm20608;


/* 光添加头文件QChartView还不够，还需要引入QChart的命名空间 */
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class imx6ullTest;
}

class imx6ullTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit imx6ullTest(QWidget *parent = nullptr);
    ~imx6ullTest();

private:
    Ui::imx6ullTest *ui;

private:

    /* 用于模拟生成实时数据的定时器 */
    QTimer* m_timer;

    /* 图表对象 */
    QChart* m_chart;

    /* ii2传感器类 */
    Ap3216c *ap3216c;

    /* icm20608 */
    Icm20608 *icm20608;



    /* 横纵坐标轴对象 */
    QValueAxis *m_axisX, *m_axisY;

    /* 曲线图对象 */
    QLineSeries* m_lineSeries;
    QSplineSeries *splineSeries;        //als曲线
    QSplineSeries *splineSeries1;       //ir曲线
    QSplineSeries *splineSeries2;       //ps曲线

    /* 横纵坐标最大显示范围 */
    const int AXIS_MAX_X = 40, AXIS_MAX_Y = 50;

    /* 用来记录数据点数 */
    int pointCount = 0;


private slots:
    void slotBtnClear();
    void slotBtnStartAndStop();
    void slotTimeout();

    /* 获取ap3216传感器数据 */
    void getAp3216cData();
    void on_pushButton_clicked();


private slots:
    /* 获取icm20608传感器数据 */
    void getIcm20608Data();

/* led相关  */
private:

    /* 文件 */
    QFile file;

    /* 设置lED的状态 */
    void setLedState();

    /* 获取lED的状态 */
    bool getLedState();

private slots:
    void on_ledBt_clicked();


/* beep相关 */
private:

    /* 文件 */
    QFile file_beep;

    /* 设置BEEP的状态 */
    void setBeepState();

    /* 获取BEEP的状态 */
    bool getBeepState();

private slots:
    /* 槽函数 */
    void on_beepBt_clicked();
    void on_start2060Bt_clicked();
    void on_stop2060Bt_clicked();
};

#endif // IMX6ULLTEST_H
