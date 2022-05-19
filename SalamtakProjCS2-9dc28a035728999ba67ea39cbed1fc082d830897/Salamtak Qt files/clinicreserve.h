#ifndef CLINICRESERVE_H
#define CLINICRESERVE_H

#include <QMainWindow>

namespace Ui {
class ClinicReserve;
}

class ClinicReserve : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClinicReserve(QWidget *parent = nullptr);
    ~ClinicReserve();

private:
    Ui::ClinicReserve *ui;
};

#endif // CLINICRESERVE_H
