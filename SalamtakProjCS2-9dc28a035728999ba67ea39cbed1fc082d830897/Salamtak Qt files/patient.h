#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QVector>
using namespace std;

#include "pharmacy.h"
#include "paymentaccount.h"

class patient
{
private:
    QString Name;
    QString ID;
    QString dateofbirth;
    QVector<pharmacyItem> pharmacy_items;
    Account patientAccount;
public:
    void edit_address( string area );
    void update_record(string patient_medical_records);
    void edit_insurance(string name);
    void reserve_lab_test();
    QVector<pharmacyItem>* get_meds();
    QVector<pharmacyItem> getMedsNotPointer();
    float getMedicineTotalPrice();
};

#endif // PATIENT_H
