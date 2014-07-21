#include "eagleye_demo.h"

eagleye_demo::eagleye_demo(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	timer = new QTimer(this);
	frameCount = 0;
    connect(timer, SIGNAL(timeout()), this, SLOT(getFrame()));
}

eagleye_demo::~eagleye_demo()
{

}

void eagleye_demo::on_openCapture_clicked() {
    srcCapture = cvCreateCameraCapture(0);
    timer->start(40);
}

void eagleye_demo::on_closeCapture_clicked() {
    timer->stop();
}

void eagleye_demo::getFrame() {
    frameCount++;
    srcImage = cvQueryFrame(srcCapture);
    cvCvtColor(srcImage, srcImage, CV_BGR2RGB);
    QImage tmpImage((const uchar*) srcImage->imageData, srcImage->width,
            srcImage->height, QImage::Format_RGB888);
    ui.labelImage->setPixmap(QPixmap::fromImage(tmpImage));
    ui.labelImage->resize(ui.labelImage->pixmap()->size());
}
