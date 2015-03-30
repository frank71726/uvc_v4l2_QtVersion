#-------------------------------------------------
#
# Project created by QtCreator 2014-09-26T10:16:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = camera
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    video_device.cpp

HEADERS  += mainwindow.h \
    v4l2grab.h \
    video_device.h

FORMS    += mainwindow.ui
