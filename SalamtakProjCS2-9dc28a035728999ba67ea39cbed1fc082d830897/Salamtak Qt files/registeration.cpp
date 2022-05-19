#include "registeration.h"
#include "ui_registeration.h"

Registeration::Registeration(QWidget *parent) :
    QMainWindow(parent),
    uir(new Ui::Registeration)
{
    uir->setupUi(this);
}

Registeration::~Registeration()
{
    delete uir;
}

void Registeration::on_calendarWidget_activated(const QDate &date)
{

}



