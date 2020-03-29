#-------------------------------------------------
#
# Project created by QtCreator 2018-11-07T06:27:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = signal_generator
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

CONFIG += c++14

SOURCES += main.cpp\
        mainwindow.cpp \
        libs/hvd190d_pi_driv.cpp \
        libs/hvd190d_pi_wf.cpp \
        libs/koc_wf_gen.cpp \
        libs/demo_wrapper.cpp

HEADERS  += mainwindow.h \
        libs/hvd190d_pi_driv.h \
        libs/hvd190d_pi_wf.h \
        libs/koc_wf_gen.h \
        libs/demo_wrapper.h

FORMS    += mainwindow.ui

LIBS += -L/usr/lib -lwiringPi

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
