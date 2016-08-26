#-------------------------------------------------
#
# Project created by QtCreator 2016-08-10T17:04:27
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = timemanager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    register.cpp \
    taskbox.cpp \
    task.cpp \
    adddialog.cpp \
    model.cpp \
    controller.cpp

HEADERS  += mainwindow.h \
    login.h \
    register.h \
    taskbox.h \
    task.h \
    adddialog.h \
    data.h \
    model.h \
    controller.h

FORMS    += mainwindow.ui \
    login.ui \
    register.ui \
    taskbox.ui \
    task.ui \
    adddialog.ui
