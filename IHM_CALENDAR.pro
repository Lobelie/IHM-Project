#-------------------------------------------------
#
# Project created by QtCreator 2015-03-31T15:39:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IHM_CALENDAR
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Mode.cpp \
    Appareil.cpp \
    Calendrier.cpp

HEADERS  += mainwindow.h \
    Mode.h \
    Appareil.h \
    Calendrier.h

FORMS    += mainwindow.ui
