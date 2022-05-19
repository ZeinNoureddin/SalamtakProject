#ifndef MEDPAYMENT_H
#define MEDPAYMENT_H

#include <QMainWindow>
#include "outpatient.h"
#include "paymentaccount.h"

namespace Ui {
class MedPayment;
}

class MedPayment : public QMainWindow
{
    Q_OBJECT

public:
    explicit MedPayment(QWidget *parent = nullptr);
    ~MedPayment();

private slots:
    void on_redeemPointsButton_clicked();

    void on_paymentMethodCombo_activated(int index);

    void on_PayButton_clicked();

private:
    Ui::MedPayment *ui;
};

#endif // MEDPAYMENT_H
