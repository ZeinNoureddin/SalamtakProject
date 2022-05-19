#include "invoice.h"
#include "ui_invoice.h"

Account tmp2(920.5, 5000);

invoice::invoice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::invoice)
{
    ui->setupUi(this);
    ui->amountPaid->setText(QString::number(tmp2.getLastPaidAmount()));
}

invoice::~invoice()
{
    delete ui;
}
