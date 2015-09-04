#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T19:12:06
#
#-------------------------------------------------

QT       += core gui\
            network\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameServer
TEMPLATE = app



SOURCES += main.cpp\
        gameserver.cpp \
    clientlinkdialog.cpp \
    renshuqingqiu.cpp \
    askagree.cpp \
    dialog.cpp

HEADERS  += gameserver.h \
    clientlinkdialog.h \
    renshuqingqiu.h \
    askagree.h \
    dialog.h

FORMS    += gameserver.ui \
    clientlinkdialog.ui \
    renshuqingqiu.ui \
    askagree.ui \
    dialog.ui

RESOURCES += \
    myqrc.qrc

RC_FILE=image/logo.rc
