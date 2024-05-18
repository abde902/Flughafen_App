QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    booking.cc \
    customer.cc \
    flightbooking.cc \
    hotelbooking.cc \
    main.cc \
    mainwindow.cc \
    rentalcarreservation.cc \
    travel.cc \
    travelagency.cc

HEADERS += \
    booking.h \
    customer.h \
    flightbooking.h \
    globals.h \
    hotelbooking.h \
    json.h \
    mainwindow.h \
    rentalcarreservation.h \
    travel.h \
    travelagency.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-TravelGUI-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/bookingsPraktikum3.json