#ifndef INPATIENT_H
#define INPATIENT_H

#include "patient.h"
#include "room.h"
#include "reservation.h"
class inpatient: public patient
{
private:
    int room_number;
    bool isReleased;
    bool isRoomApproved;
    room patient_room;
    QString DrToMeet;
    int no_of_nights;

public:
    void reserve_room();
    void set_isRoom_approved(bool is);
    bool get_isRoom_approved();
    void set_room(room pr);
    room get_room();
    QString getDrToMeet();
    void setDrToMeet(QString DTM);
    QString getPatientRoomType();
    void set_no_of_nights(int no);
    int get_no_of_nights();
};
#endif // INPATIENT_H
