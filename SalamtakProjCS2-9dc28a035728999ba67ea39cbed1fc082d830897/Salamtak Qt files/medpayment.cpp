#include "medpayment.h"
#include "ui_medpayment.h"

MedPayment::MedPayment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MedPayment)
{
    ui->setupUi(this);
}

MedPayment::~MedPayment()
{
    delete ui;
}
