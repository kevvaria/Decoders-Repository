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
    dbmanager.cpp \
    Restaurant.cpp \
    login.cpp \
    distance.cpp

HEADERS  += mainwindow.h \
    dbmanager.h \
    Restaurant.h \
    login.h \
    distance.h

FORMS    += mainwindow.ui \
    login.ui

DISTFILES += \
    extracode
