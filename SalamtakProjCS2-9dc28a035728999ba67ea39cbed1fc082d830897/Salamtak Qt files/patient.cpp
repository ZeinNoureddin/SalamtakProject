#include "patient.h"

void edit_address(QString area )
{
//h
}
void update_record(QString patient_medical_records)
{
//h
}
void edit_insurance(QString name)
{
//h
}

void reserve_lab_test()
{

}

QVector<pharmacyItem>* patient::get_meds()
{
    return &pharmacy_items;
}
QVector<pharmacyItem> patient::getMedsNotPointer(){
    return pharmacy_items;
}

float patient::getMedicineTotalPrice(){
    return patientAccount.getMedicinePayment();
}
