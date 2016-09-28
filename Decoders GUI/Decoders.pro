#-------------------------------------------------
#
# Project created by QtCreator 2016-09-18T14:03:38
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Decoders
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dbmanager.cpp

HEADERS  += mainwindow.h \
    dbmanager.h

FORMS    += mainwindow.ui
