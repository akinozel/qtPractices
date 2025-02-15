#include "room.h"
#include <iostream>
using namespace std;


/* constructor method
 * Room::Room(int number, int rate)
    {
    roomNumber = number;
    guestName = "";
    dailyRate = rate;
    isOccupied = false;
    extraExpenses=0;
    }*/
//initial list method bu daha verimli ve daha kısa
Room::Room(int number, int rate)
    : roomNumber(number),guestName(""),dailyRate(rate),isOccupied(false),extraExpenses(0){}

void Room::checkIn(const string& name){
    if (!isOccupied){
        guestName= name;
        isOccupied = true;

    }else{

    }
}
void Room::checkOut(int days){
    if (isOccupied){
        int totalCost = (days*dailyRate)+extraExpenses;
        guestName="";
        isOccupied = false;
        extraExpenses=0;
    }else{

    }
}

void Room::addExtraExpense(int amount){
    extraExpenses+=amount;
}
int Room::getRoomNumber(){
    return roomNumber;
}
bool Room::isRoomOccupied(){
    return isOccupied;
}

