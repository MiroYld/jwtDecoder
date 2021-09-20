QT -= gui
QT += network
QT += websockets
QT += core
QT += multimedia
CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += Untitled-1.cpp

HEADERS += jwt.h \
        base.h \
        picojson.h
