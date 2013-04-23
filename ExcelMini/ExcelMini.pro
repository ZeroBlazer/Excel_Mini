#-------------------------------------------------
#
# Project created by QtCreator 2013-04-06T17:03:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExcelMini
TEMPLATE = app


SOURCES += main.cpp\
        appmainwindow.cpp \
    Classes/cell.cpp

HEADERS  += appmainwindow.h \
    Classes/cell.h \
    Classes/CELL_EXCEP.h

FORMS    += appmainwindow.ui
