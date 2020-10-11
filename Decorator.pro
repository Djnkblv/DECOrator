QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        beverage.cpp \
        condmentdecorator.cpp \
        darkroast.cpp \
        decaf.cpp \
        espresso.cpp \
        houseblend.cpp \
        main.cpp \
        milk.cpp \
        mocha.cpp \
        soy.cpp \
        whip.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    beverage.h \
    condmentdecorator.h \
    darkroast.h \
    decaf.h \
    espresso.h \
    houseblend.h \
    milk.h \
    mocha.h \
    soy.h \
    whip.h
