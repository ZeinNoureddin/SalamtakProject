#include "roomreservation.h"
#include "ui_roomreservation.h"
#include "payment.h"

roomReservation::roomReservation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::roomReservation)
{
    ui->setupUi(this);
}

roomReservation::~roomReservation()
{
    delete ui;
}

void roomReservation::on_ProceedToPaymentButton_clicked()
{
    hide();
    Payment* r = new Payment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}

