#ifndef CURRENTDATA_H
#define CURRENTDATA_H

#include "paymentaccount.h"
#include "pharmacy.h"

//Account tmp2(80, 333);

class CurrentData
{
public:
    Account* tmp = new Account(920.5, 5000, 80);
    CurrentData();
};

#endif // CURRENTDATA_H
