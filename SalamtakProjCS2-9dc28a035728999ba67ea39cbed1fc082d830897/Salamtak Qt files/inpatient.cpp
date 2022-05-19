#include "inpatient.h"

void inpatient:: set_room(room pr)
 {
     patient_room=pr;
 }
 room inpatient::get_room()
 {
     return patient_room;
 }
 void inpatient::set_isRoom_approved(bool is)
 {
     isRoomApproved = is;
 }
 bool inpatient::get_isRoom_approved()
 {
     return isRoomApproved;
 }
 QString inpatient::getDrToMeet(){
     return DrToMeet;
 }
 void inpatient::setDrToMeet(QString DTM){
     DrToMeet = DTM;
 }
 QString inpatient::getPatientRoomType(){
     return patient_room.get_type();
 }
 void inpatient::set_no_of_nights(int no)
 {
      no_of_nights=no;
 }
  int inpatient::get_no_of_nights()
 {
      return no_of_nights;
 }
