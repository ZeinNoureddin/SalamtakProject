#ifndef MEDPAYMENT_H
#define MEDPAYMENT_H

#include <QMainWindow>

namespace Ui {
class MedPayment;
}

class MedPayment : public QMainWindow
{
    Q_OBJECT

public:
    explicit MedPayment(QWidget *parent = nullptr);
    ~MedPayment();

private:
    Ui::MedPayment *ui;
};

#endif // MEDPAYMENT_H
