#include "mywidget.h"
//qt中类名和头文件名一样，且没有.h
#include <QApplication>
//应用程序入口
int main(int argc, char *argv[])
{
    //应用程序类，每个qt程序只有一个
    QApplication a(argc, argv);
    //窗口类，
    MyWidget w; //顶层窗口
    //显示窗口
    w.show();

    return a.exec();
}
