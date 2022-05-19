#include "emergency.h"
#include "ui_emergency.h"

Emergency::Emergency(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Emergency)
{
    ui->setupUi(this);
}

Emergency::~Emergency()
{
    delete ui;
}
