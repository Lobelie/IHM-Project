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
    AddMode.cpp \
    AddModeVacances.cpp \
    AddAppareilToMode.cpp \
    NewAppareil.cpp \
    ModifierCreneau.cpp \
    DetailsAppareilMode.cpp \
    AddCreneau.cpp \
    addthermo.cpp \
    wifi.cpp

HEADERS  += mainwindow.h \
    AddMode.h \
    AddModeVacances.h \
    AddAppareilToMode.h \
    NewAppareil.h \
    DetailsAppareilMode.h \
    ModifierCreneau.h \
    AddCreneau.h \
    addthermo.h \
    wifi.h

FORMS    += mainwindow.ui \
    AddMode.ui \
    AddModeVacances.ui \
    AddAppareilToMode.ui \
    NewAppareil.ui \
    DetailsAppareilMode.ui \
    ModifierCreneau.ui \
    AddCreneau.ui \
    addthermo.ui \
    wifi.ui

DISTFILES +=
