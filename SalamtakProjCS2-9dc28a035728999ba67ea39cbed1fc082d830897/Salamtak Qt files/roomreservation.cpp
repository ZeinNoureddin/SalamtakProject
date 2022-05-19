#include "roomreservation.h"
#include "ui_roomreservation.h"

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
