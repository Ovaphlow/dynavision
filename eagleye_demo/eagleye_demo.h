#ifndef EAGLEYE_DEMO_H
#define EAGLEYE_DEMO_H

#include <QtGui/QWidget>
#include "ui_eagleye_demo.h"
#include <QMessageBox>
#include <QTimer>
#include <opencv2/opencv.hpp>
#include "motionTracker.h"

class eagleye_demo : public QWidget
{
    Q_OBJECT

public:
    eagleye_demo(QWidget *parent = 0);
    ~eagleye_demo();
    int frameCount;

private:
    Ui::eagleye_demoClass ui;
    QTimer* timer;
    CvCapture* srcCapture;
    IplImage* srcImage;

private slots:
    void on_openCapture_clicked();
    void on_closeCapture_clicked();
    void getFrame();
};

#endif // EAGLEYE_DEMO_H
