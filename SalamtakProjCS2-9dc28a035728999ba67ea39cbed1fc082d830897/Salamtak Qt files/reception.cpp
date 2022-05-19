#include "reception.h"
#include "ui_reception.h"
#include "inpatient.h"
#include "outpatient.h"

inpatient currInpatient;
outpatient currOutpatient;
QVector<pharmacyItem> ItemsInPharmacy;

Reception::Reception(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reception)
{
    ui->setupUi(this);
    ui->paymentSettledLabel->hide();
}

Reception::~Reception()
{
    delete ui;
}

void Reception::on_settlePaymentButton_clicked()
{
    Accountant tmp;
    Account tmpAcc(920.5, 5000, 80);
    Account* patientAccount = &tmpAcc;
    tmp.settleAccount(patientAccount);
    ui->paymentSettledLabel->show();

}
void Reception::on_addMedicineButton_clicked()
{
    QVector<pharmacyItem> ItemsToAddToPatient;
    for(int i = 0; i < ItemsInPharmacy.size(); i++){
        if(ItemsInPharmacy[i].getItemName() == ui->medicineToAdd->currentText()){
            ItemsInPharmacy[i].setQuantity((ui->medAmountTxt->text()).toInt());
            ItemsToAddToPatient.push_back(ItemsInPharmacy[i]);
        }
    }

}
void Reception::on_deleteMedicineButton_clicked()
{
   // for(int i = 0)
    QVector<pharmacyItem>* currPatientMeds =  currInpatient.get_meds();
    for (auto it = currPatientMeds->begin(); it != currPatientMeds->end(); it++)
    {
        if(it->getItemName() == ui->medicineToDelete->currentText()){
            currPatientMeds->erase(it);

        }
    }
}
