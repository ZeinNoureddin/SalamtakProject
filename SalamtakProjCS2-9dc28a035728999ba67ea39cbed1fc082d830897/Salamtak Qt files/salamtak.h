#ifndef SALAMTAK_H
#define SALAMTAK_H

#include <QMainWindow>
#include "homepage.h"
#include "registeration.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Salamtak; }
QT_END_NAMESPACE

class Salamtak : public QMainWindow
{
    Q_OBJECT

public:
    Salamtak(QWidget *parent = nullptr);
    ~Salamtak();

private slots:

    void on_LoginButton_clicked();

    void on_RegisterButton_clicked();

    void on_EmergencyButton_clicked();

private:
    Ui::Salamtak *ui;
};
#endif // SALAMTAK_H
