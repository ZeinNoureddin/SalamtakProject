QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clinicreserve.cpp \
    currentdata.cpp \
    emergency.cpp \
    emergencypatient.cpp \
    emergencypayment.cpp \
    homepage.cpp \
    inpatient.cpp \
    invoice.cpp \
    labreserve.cpp \
    main.cpp \
    medpayment.cpp \
    outpatient.cpp \
    patient.cpp \
    patient_medical_records.cpp \
    payment.cpp \
    paymentaccount.cpp \
    pharmacy.cpp \
    reception.cpp \
    registeration.cpp \
    reservation.cpp \
    room.cpp \
    roomreservation.cpp \
    salamtak.cpp \
    userprofile.cpp

HEADERS += \
    clinicreserve.h \
    currentdata.h \
    emergency.h \
    emergencypatient.h \
    emergencypayment.h \
    homepage.h \
    inpatient.h \
    invoice.h \
    labreserve.h \
    medpayment.h \
    outpatient.h \
    patient.h \
    patient_medical_records.h \
    payment.h \
    paymentaccount.h \
    pharmacy.h \
    reception.h \
    registeration.h \
    reservation.h \
    room.h \
    roomreservation.h \
    salamtak.h \
    userprofile.h

FORMS += \
    clinicreserve.ui \
    emergency.ui \
    emergencypayment.ui \
    homepage.ui \
    invoice.ui \
    labreserve.ui \
    medpayment.ui \
    payment.ui \
    reception.ui \
    registeration.ui \
    reservation.ui \
    roomreservation.ui \
    salamtak.ui \
    userprofile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

TARGET = Salamtak
TEMPLATE = app
QT += widgets
QT += sql
RESOURCES += resources.qrc
