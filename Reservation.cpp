#include "Reservation.h"

Reservation::Reservation(Guest* guest, Room* room, string checkInDate, string checkOutDate, int nights)
{
    this->guest = guest;
    this->room = room;
    this->checkInDate = checkInDate;
    this->checkOutDate = checkOutDate;
    this->nights = nights;
}

Guest* Reservation::getGuest()
{
    return this->guest;
}

Room* Reservation::getRoom()
{
    return this->room;
}

string Reservation::getCheckInDate()
{
    return this->checkInDate;
}

string Reservation::getCheckOutDate()
{
    return this->checkOutDate;
}

int Reservation::getNights()
{
    return this->nights;
}
