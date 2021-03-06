#ifndef ROOMRESERVATION_H
#define ROOMRESERVATION_H

#include <QMainWindow>

namespace Ui {
class roomReservation;
}

class roomReservation : public QMainWindow
{
    Q_OBJECT

public:
    explicit roomReservation(QWidget *parent = nullptr);
    ~roomReservation();

private slots:
    void on_ProceedToPaymentButton_clicked();

private:
    Ui::roomReservation *ui;
};

#endif // ROOMRESERVATION_H
