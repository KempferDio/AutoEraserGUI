#-------------------------------------------------
#
# Project created by QtCreator 2018-04-03T09:14:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AutoEraserGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    autoeraser.cpp \
    Log.cpp \
    addpathswindow.cpp \
    addextwindow.cpp \
    setdeadline.cpp

HEADERS  += mainwindow.h \
    autoeraser.h \
    Log.h \
    addpathswindow.h \
    addextwindow.h \
    setdeadline.h

FORMS    += mainwindow.ui \
    addpathswindow.ui \
    addextwindow.ui \
    setdeadline.ui
