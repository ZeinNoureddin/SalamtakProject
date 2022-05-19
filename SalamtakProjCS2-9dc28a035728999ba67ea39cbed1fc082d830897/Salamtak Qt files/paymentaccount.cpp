#include "paymentaccount.h"

//PaymentAccount::PaymentAccount(){
//    outstandingPay = 0;
//}

// ACCOUNT FUNCTION IMPLEMENTATIONS
Account::Account(){
    Points = 0;
    isSettled = true;
    lastPaidAmount = 0;
    medicinePayment = 0;
}
Account::Account(float OP, int P, float MP){
    outstandingPay = OP;
    Points = P;
    lastPaidAmount = 0;
    medicinePayment = MP;
}
bool Account::choosePayment(QString paymentMethod, float outstandingPay){
    if(paymentMethod == "E-Wallet")
        return patientWallet.Pay(outstandingPay);
    else
        return patientCreditCard.Pay(outstandingPay);
}
void Account::setOutstandingPay(float OP){
    outstandingPay = OP;
}
float Account::getWalletBalance(){
    return patientWallet.getBalance();
}
float Account::getOutstandingPay(){
    return outstandingPay;
}
void Account::setWalletBalance(float B){
    patientWallet.setBalance(B);
}
bool Account::redeemPoints(){
    if(Points < 1000)
        return false;
    else{
        int x = Points/1000;
        float currBalance = patientWallet.getBalance();
        float newBalance = currBalance + 100*(float)x;
        patientWallet.setBalance(newBalance);
        Points -= x*1000;
        return true;
    }
}
int Account::getPoints(){
    return Points;
}
float Account::getLastPaidAmount(){
    return lastPaidAmount;
}
void Account::setLastPaidAmount(float LPA){
    lastPaidAmount = LPA;
}
void Account::setMedicinePayment(float P){
    medicinePayment = P;
}
float Account::getMedicinePayment(){
    return medicinePayment;
}
// WALLET FUNCTION IMPLEMENTATIONS
Wallet::Wallet(){
    Balance = 0;
}
Wallet::Wallet(float B){
    Balance = B;
}
float Wallet::getBalance(){
    return Balance;
}
void Wallet::setBalance(float B){
    Balance = B;
}
bool Wallet::Pay(float amount){
    if(Balance < amount)
        return false;
    else {
        Balance -= amount;
        return true;
    }
}

// CASH FUNCTION IMPLEMENTATIONS
bool Cash::Pay(float amount){
    return true;
}

// CREDIT FUNCTION IMPLEMENTATIONS
Credit::Credit(){
    creditCardNo = 0;
    creditCardName = "";
    creditCVV = 0;
}
Credit::Credit(int CCNo, QString CCName, tm ED, int CVV){
    creditCardNo = CCNo;
    creditCardName = CCName;
    creditCVV = CVV;
}
bool Credit::Pay(float amount){
    return true;
}

// ACCOUNTANT CLASS IMPLEMENTATIONS
void Accountant::settleAccount(Account* accToSettle){
    accToSettle->setOutstandingPay(0);
}
