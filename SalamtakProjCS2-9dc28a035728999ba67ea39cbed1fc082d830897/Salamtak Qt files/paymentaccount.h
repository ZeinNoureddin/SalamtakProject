#ifndef PAYMENTACCOUNT_H
#define PAYMENTACCOUNT_H
#include <QVector>
#include <ctime>

// PAYMENT CLASSES
class PaymentAccount{
    //float outstandingPay;
public:
    virtual bool Pay(float amount) = 0;
};

class Credit : public PaymentAccount{
    int creditCardNo;
    QString creditCardName;
    tm expiryDate;
    int creditCVV;
public:
    Credit();
    Credit(int CCNo, QString CCName, tm ED, int CVV);
    bool Pay(float amount);
};

class Wallet : public PaymentAccount{
    float Balance;
public:
    Wallet();
    Wallet(float B);
    bool Pay(float amount);
    float getBalance();
    void setBalance(float B);
};

class Cash : public PaymentAccount{
public:
    bool Pay(float amount);
};

// ACCOUNT CLASS: USED TO CONTROL PAYMENTS
class Account{
    float outstandingPay;
    int Points;
    bool isSettled;
    Credit patientCreditCard;
    Wallet patientWallet;
    Cash patientCash;
    float lastPaidAmount;
public:
    Account();
    Account(float OP, int P);
    bool redeemPoints();
    bool choosePayment(QString paymentMethod, float outstandingPay);
    float getOutstandingPay();
    float getWalletBalance();
    void setOutstandingPay(float OP);
    void setWalletBalance(float B);
    int getPoints();
    void setLastPaidAmount(float LPA);
    float getLastPaidAmount();
};

// ACCOUNTANT CLASS:
class Accountant{
public:
    void settleAccount(Account &accToSettle);
};

#endif // PAYMENTACCOUNT_H
