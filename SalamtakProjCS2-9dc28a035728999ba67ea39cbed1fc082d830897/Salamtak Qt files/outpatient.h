#ifndef OUTPATIENT_H
#define OUTPATIENT_H
#include <iostream>
#include<QString>
#include "patient.h"
//#include "clinic.h"

 class outpatient: public patient
{
private:
     //clinic patient_appt;
     QString doctorTomeet;
 public:
     void reserveclinic();
};
#endif // OUTPATIENT_H
