#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QVector>
using namespace std;

class patient
{
private:
    QString Name;
    QString ID;
    QString dateofbirth;
    QVector<string> pharmacy_item;

public:
    void edit_address( string area );
    void update_record(string patient_medical_records);
    void edit_insurance(string name);
    void reserve_lab_test();
};

#endif // PATIENT_H
