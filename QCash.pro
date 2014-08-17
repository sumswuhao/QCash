#-------------------------------------------------
#
# Project created by QtCreator 2014-06-16T17:29:23
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QCash
TEMPLATE = app


SOURCES += main.cpp \
    AccountEditor.cpp \
    AccountEditorTitle.cpp

HEADERS  += \
    Number.h \
    AccountEditor.h \
    DefaultStyle.h \
    AccountEditorTitle.h

FORMS    +=

RESOURCES += \
    QCash.qrc

