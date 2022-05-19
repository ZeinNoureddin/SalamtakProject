#ifndef INVOICE_H
#define INVOICE_H

#include <QMainWindow>
#include "currentdata.h"

class Account;

namespace Ui {
class invoice;
}

class invoice : public QMainWindow
{
    Q_OBJECT

public:
    explicit invoice(QWidget *parent = nullptr);
    ~invoice();

private:
    Ui::invoice *ui;
};

#endif // INVOICE_H
