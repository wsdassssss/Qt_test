#include "mainwindow.h"

#include <QApplication>
#include "iostream"
using namespace  std;
extern "C"{
    #include "libavcodec/avcodec.h"
    #include "libswscale/swscale.h"
}

/*ok*/
/*****************************/
//Date:2020-12-6
//Author: MIMO431
//Function: FFMPEG4.20 Window系统下QT配置，包括32和64位


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout<<avcodec_configuration();
    MainWindow w;
    w.show();
    return a.exec();
}
