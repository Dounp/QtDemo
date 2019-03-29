#-------------------------------------------------
#
# Project created by QtCreator 2018-09-01T17:26:19
#
#-------------------------------------------------

# qt程序使用到的模块
QT       += core gui
# 为了兼容以前的版本,5.0以下没有widget模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 生产的应用程序的名字
TARGET = HelloQt
# 指定生成的Makefile的类型  lib
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#源文件 \换行
SOURCES += main.cpp\
        mywidget.cpp \
    mybutton.cpp \
    myclass.cpp

# 头文件
HEADERS  += mywidget.h \
    mybutton.h \
    myclass.h

#CONFIG += C++11
