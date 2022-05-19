#include "reception.h"
#include "ui_reception.h"

Reception::Reception(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reception)
{
    ui->setupUi(this);
}

Reception::~Reception()
{
    delete ui;
}
