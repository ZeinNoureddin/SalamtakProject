#ifndef RECEPTION_H
#define RECEPTION_H

#include <QMainWindow>

namespace Ui {
class Reception;
}

class Reception : public QMainWindow
{
    Q_OBJECT

public:
    explicit Reception(QWidget *parent = nullptr);
    ~Reception();

private:
    Ui::Reception *ui;
};

#endif // RECEPTION_H
