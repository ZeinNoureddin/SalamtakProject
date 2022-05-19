#ifndef RESERVATION_H
#define RESERVATION_H

#include <QMainWindow>
#include "payment.h"

namespace Ui {
class Reservation;
}

class Reservation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Reservation(QWidget *parent = nullptr);
    ~Reservation();


private slots:
    void on_tableWidget_cellClicked(int row, int column);

    void on_ProceedPayButton_clicked();

private:
    Ui::Reservation *ui;
};



#endif // RESERVATION_H
