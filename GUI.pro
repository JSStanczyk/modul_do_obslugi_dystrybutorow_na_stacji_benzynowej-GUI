QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authentication.cpp \
    bill.cpp \
    customer.cpp \
    disel.cpp \
    distributor.cpp \
    gas.cpp \
    main.cpp \
    mainwindow.cpp \
    petrol.cpp \
    raport.cpp \
    raportgenerator.cpp \
    refuel.cpp \
    refuelingsequence.cpp \
    supplymenu.cpp \
    supplysequence.cpp

HEADERS += \
    authentication.h \
    bill.h \
    customer.h \
    disel.h \
    distributor.h \
    fuel.h \
    gas.h \
    mainwindow.h \
    petrol.h \
    raport.h \
    raportgenerator.h \
    refuel.h \
    refuelingsequence.h \
    supplymenu.h \
    supplysequence.h

FORMS += \
    authentication.ui \
    bill.ui \
    mainwindow.ui \
    raport.ui \
    refuel.ui \
    refuelingsequence.ui \
    supplymenu.ui \
    supplysequence.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
