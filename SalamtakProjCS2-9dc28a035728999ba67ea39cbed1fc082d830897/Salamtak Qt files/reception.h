#ifndef RECEPTION_H
#define RECEPTION_H

#include <QMainWindow>

#include "patient.h"

namespace Ui {
class Reception;
}

class Reception : public QMainWindow
{
    Q_OBJECT

public:
    explicit Reception(QWidget *parent = nullptr);
    ~Reception();

private slots:
    void on_settlePaymentButton_clicked();

    void on_addMedicineButton_clicked();

    void on_deleteMedicineButton_clicked();

private:
    Ui::Reception *ui;
};

#endif // RECEPTION_H
