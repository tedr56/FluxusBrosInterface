#-------------------------------------------------
#
# Project created by QtCreator 2013-03-25T07:19:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FluxusBrosInterface
TEMPLATE = app


SOURCES += \
    src/mainwindow.cpp \
    src/main.cpp \
    src/bank.cpp \
    src/layer.cpp \
    src/qsoftwaretarget.cpp \
    src/subbank.cpp

HEADERS  += \
    src/mainwindow.h \
    src/bank.h \
    src/layer.h \
    src/constants.h \
    src/qsoftwaretarget.h \
    src/subbank.h

FORMS    += \
    src/mainwindow.ui

OTHER_FILES +=
