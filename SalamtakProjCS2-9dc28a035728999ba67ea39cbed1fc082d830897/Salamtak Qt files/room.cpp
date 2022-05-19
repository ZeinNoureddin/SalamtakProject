#include "room.h"
#include <QString>
void room :: set_empty(bool e){
    empty=e;
}
bool room :: get_empty(){
    return empty;
}
void room :: set_type(QString t){
    type=t;
}
QString room::get_type(){
    return type;
}
void room :: set_roomNo(int r){
    roomNo=r;
}
int room :: get_roomNo(){
    return roomNo;
}
void room:: set_room_price(double p){
    room_price=p;
}
double room:: get_room_price(){
    return room_price;
}

