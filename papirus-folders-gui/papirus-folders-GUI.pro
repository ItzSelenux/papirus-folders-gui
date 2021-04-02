QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changelog.cpp \
    colors.cpp \
    extra.cpp \
    help.cpp \
    license.cpp \
    main.cpp \
    mainwindow.cpp \
    papirus.cpp \
    polkit.cpp \
    secdialog.cpp

HEADERS += \
    changelog.h \
    colors.h \
    extra.h \
    help.h \
    license.h \
    mainwindow.h \
    papirus.h \
    polkit.h \
    secdialog.h

FORMS += \
    changelog.ui \
    colors.ui \
    extra.ui \
    help.ui \
    license.ui \
    mainwindow.ui \
    papirus.ui \
    polkit.ui \
    secdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
