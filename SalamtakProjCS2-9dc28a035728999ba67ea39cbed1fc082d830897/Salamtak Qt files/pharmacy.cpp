#include "pharmacy.h"

// PHARMACY ITEM METHODS
pharmacyItem::pharmacyItem(){
    price = 0;
    itemName = "";
    quantity = 0;
}
pharmacyItem::pharmacyItem(float P, QString IN, int Q){
    price = P;
    itemName = IN;
    quantity = Q;
}
float pharmacyItem::getPrice(){
    return price;
}
QString pharmacyItem::getItemName(){
    return itemName;
}
int pharmacyItem::getQuantity(){
    return quantity;
}
void pharmacyItem::setQuantity(int Q){
    quantity = Q;
}

// PHARMACY METHODS
//void Pharmacy::addPharmacyItem(pharmacyItem PI){
//    pharmacyItems.push_back(PI);
//}
