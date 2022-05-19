#include "clinicreserve.h"
#include "ui_clinicreserve.h"

ClinicReserve::ClinicReserve(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClinicReserve)
{
    ui->setupUi(this);
}

ClinicReserve::~ClinicReserve()
{
    delete ui;
}
