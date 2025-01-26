QT       += core gui serialport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/port/portmanager.cpp \
    src/port/serialport.cpp \
    src/portsetbox.cpp \
    src/settings/test.cpp \
    src/themes/test.cpp \
    src/toolbox/test.cpp \
    src/views/test.cpp \
    src/port/comprotocol.cpp \
    src/port/fifo.cpp \
    ui/channelitem.cpp \
    ui/ctrlmodeview.cpp \
    ui/osciview.cpp \
    ui/plotview.cpp \
    ui/pointdatabuffer.cpp


INCLUDEPATH += include


HEADERS += \
    include/Version.h \
    include/mainwindow.h \
    include/portsetbox.h \
    mainwindow.h \
    src/port/abstractPort.h \
    src/port/portmanager.h \
    src/port/serialport.h \
    src/views/Abstractview.h \
    ui/channelitem.h \
    ui/ctrlmodeview.h \
    ui/oscilloscopeview.h \
    src/port/comprotocol.h \
    src/port/fifo.h \
    ui/osciview.h \
    ui/plotview.h \
    ui/pointdatabuffer.h

FORMS += \
    ui/ctrlmodeview.ui \
    ui/mainwindow.ui \
    ui/osciview.ui \
    ui/portsetbox.ui \
    ui/serialport.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/rec.qrc
