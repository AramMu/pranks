TEMPLATE = app
CONFIG += c++11
CONFIG -= app_bundle
QT += widgets

INCLUDEPATH += D:\Dependencies\opencv_3_1_0\include
LIBS += -LD:\Dependencies\opencv_3_1_0\x86\mingw\lib -lopencv_world310.dll

SOURCES += main.cpp
