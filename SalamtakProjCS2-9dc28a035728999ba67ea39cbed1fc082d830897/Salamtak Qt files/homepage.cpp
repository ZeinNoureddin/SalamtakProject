#include "homepage.h"
#include "ui_homepage.h"
#include "reservation.h"
#include "registeration.h"
#include "medpayment.h"
#include "clinicreserve.h"
#include "labreserve.h"

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
    hide();
    Reservation* r = new Reservation();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();

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

