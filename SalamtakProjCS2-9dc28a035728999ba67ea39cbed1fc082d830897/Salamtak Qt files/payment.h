#ifndef PAYMENT_H
#define PAYMENT_H

#include <QMainWindow>
#include "paymentaccount.h"
#include "invoice.h"

namespace Ui {
class Payment;
}

class Payment : public QMainWindow
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();

private slots:

    void on_PayButton_clicked();

    void on_paymentMethodCombo_activated(int index);

    void on_redeemPointsButton_clicked();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
