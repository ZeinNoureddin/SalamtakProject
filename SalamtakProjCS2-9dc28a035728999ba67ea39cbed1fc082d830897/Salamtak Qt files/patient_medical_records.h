#ifndef PATIENT_MEDICAL_RECORDS_H
#define PATIENT_MEDICAL_RECORDS_H

#include <QString>
#include "patient.h"

class patient_medical_records: public patient
{
    QString blood_type;
    QString significantRecords;
    bool diabetic;
};

#endif // PATIENT_MEDICAL_RECORDS_H
