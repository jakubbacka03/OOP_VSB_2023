#include "SingleRoom.h"
#include <iostream>

using namespace std;

SingleRoom::SingleRoom(int roomNumber, double price, bool hasBalcony) 
{
    this->roomNumber = roomNumber;
    this->price = price;
    this->hasBalcony = hasBalcony;
}

int SingleRoom::GetRoomNumber()
{
    return this->roomNumber;
}

double SingleRoom::getPricePerNight() 
{
    return this->price;
}

bool SingleRoom::getBalcony()
{
    return this->hasBalcony;
}

void SingleRoom::display()
{
    cout << "Room number: " << this->GetRoomNumber() << endl;
    cout << "Price per night: " << this->getPricePerNight() << "$" << endl;
    cout << "Has balcony: " << (this->getBalcony() ? "yes" : "no") << endl;
    cout << "Occupied: " << (this->isOccupied() ? "no" : "yes") << endl;
}

bool SingleRoom::isOccupied()
{
    return this->occupied;
}

void SingleRoom::setOccupied(bool occupied)
{
    this->occupied = occupied;
}
