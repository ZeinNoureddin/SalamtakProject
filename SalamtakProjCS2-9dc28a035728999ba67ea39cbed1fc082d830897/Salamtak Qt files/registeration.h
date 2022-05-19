#ifndef REGISTERATION_H
#define REGISTERATION_H

#include <QMainWindow>

namespace Ui {
class Registeration;
}

class Registeration : public QMainWindow
{
    Q_OBJECT

public:
    Ui::Registeration *uir;
    explicit Registeration(QWidget *parent = nullptr);
    ~Registeration();

private slots:
    void on_calendarWidget_activated(const QDate &date);




};

#endif // REGISTERATION_H
