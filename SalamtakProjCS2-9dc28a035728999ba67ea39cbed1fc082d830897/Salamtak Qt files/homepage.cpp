#include "homepage.h"
#include "ui_homepage.h"
#include "reservation.h"
#include "registeration.h"
#include "medpayment.h"
#include "clinicreserve.h"
#include "labreserve.h"
#include "roomreservation.h"
#include "inpatient.h"
#include "emergencypayment.h"

inpatient currPatient2;  // WE SHOULD REMOVE THIS AFTER LINKING WITH THE DATA BASE AND STORING DATA


Homepage::Homepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::on_ReserveRoomButton_clicked()
{
    currPatient2.set_isRoom_approved(true); // WE SHOULD REMOVE THIS AFTER LINKING WITH THE DATA BASE AND STORING DATA
    hide();
    if(currPatient2.get_isRoom_approved() == true){
        roomReservation* r = new roomReservation();
        r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
        r->show();
    }
    else {
        Reservation* r = new Reservation();
        r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
        r->show();
    }
}


void Homepage::on_pushButton_clicked()
{
    hide();
    Payment* r = new Payment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}


void Homepage::on_PayforAssignedMedButton_clicked()
{
    hide();
    MedPayment* r = new MedPayment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}


void Homepage::on_pushButton_2_clicked()
{
    hide();
    ClinicReserve* r = new ClinicReserve();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}
/*
void Homepage::on_LabButton_clicked()
{
    hide();
    LabReserve* r = new LabReserve();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}
*/


void Homepage::on_payForEmergencyButton_clicked()
{
    hide();
    emergencyPayment* r = new emergencyPayment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}

