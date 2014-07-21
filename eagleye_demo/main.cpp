#include "eagleye_demo.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("system"));
    QApplication a(argc, argv);
    eagleye_demo w;
    w.show();
    return a.exec();
}
