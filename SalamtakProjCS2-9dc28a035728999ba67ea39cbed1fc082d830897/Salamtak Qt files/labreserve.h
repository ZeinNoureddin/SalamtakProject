#ifndef LABRESERVE_H
#define LABRESERVE_H

#include <QMainWindow>

namespace Ui {
class LabReserve;
}

class LabReserve : public QMainWindow
{
    Q_OBJECT

public:
    explicit LabReserve(QWidget *parent = nullptr);
    ~LabReserve();

private:
    Ui::LabReserve *ui;
};

#endif // LABRESERVE_H
