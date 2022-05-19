#include "reservation.h"
#include "ui_reservation.h"


Reservation::Reservation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::on_tableWidget_cellClicked(int row, int column)
{

}


void Reservation::on_ProceedPayButton_clicked()
{
    hide();
    Payment* r = new Payment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}

