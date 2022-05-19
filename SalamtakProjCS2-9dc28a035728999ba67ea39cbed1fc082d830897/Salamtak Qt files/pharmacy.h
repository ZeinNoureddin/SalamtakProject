#ifndef PHARMACY_H
#define PHARMACY_H

#include <QString>
#include <QVector>

class pharmacyItem{
    float price;
    QString itemName;
    int quantity;
public:
    pharmacyItem();
    pharmacyItem(float P, QString IN, int Q);
    float getPrice();
    QString getItemName();
    int getQuantity();
    void setQuantity(int Q);
};

class Pharmacy
{
    QVector<pharmacyItem> pharmacyItems;
//public:
//    void addPharmacyItem(pharmacyItem PI);
};

#endif // PHARMACY_H
