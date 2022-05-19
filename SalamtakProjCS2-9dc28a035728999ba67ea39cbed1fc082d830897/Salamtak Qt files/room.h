#ifndef ROOM_H
#define ROOM_H
#include <QString>
class room{
private:
    bool empty;
    QString type;
    int maxcap;
    int currcap;
    int roomNo;
    double room_price;

public:
    void set_empty(bool e);
    bool get_empty();
    void set_type(QString t);
    QString get_type();
    void set_roomNo(int r);
    int get_roomNo();
    void set_room_price(double p);
    double get_room_price();

    room markEmpty();
    room markReserved();
};

#endif // ROOM_H
