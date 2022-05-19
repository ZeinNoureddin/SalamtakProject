#ifndef EMERGENCYPAYMENT_H
#define EMERGENCYPAYMENT_H

#include <QMainWindow>
#include "paymentaccount.h"

namespace Ui {
class emergencyPayment;
}

class emergencyPayment : public QMainWindow
{
    Q_OBJECT

public:
    explicit emergencyPayment(QWidget *parent = nullptr);
    ~emergencyPayment();

private slots:
    void on_redeemPointsButton_clicked();

    void on_PayButton_clicked();

    void on_paymentMethodCombo_activated(int index);

private:
    Ui::emergencyPayment *ui;
};

#endif // EMERGENCYPAYMENT_H
