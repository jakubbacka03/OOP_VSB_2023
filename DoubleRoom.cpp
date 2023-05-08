#include "DoubleRoom.h"
#include <iostream>

using namespace std;

DoubleRoom::DoubleRoom(int roomNumber, double price, bool hasBigBed) 
{
    this->roomNumber = roomNumber;
    this->price = price;
    this->hasBigBed = hasBigBed;
}

int DoubleRoom::GetRoomNumber() 
{
    return this->roomNumber;
}

double DoubleRoom::getPricePerNight() 
{
    return this->price;
}

bool DoubleRoom::getBed() 
{
    return this->hasBigBed;
}

void DoubleRoom::display()
{
	cout << "Room number: " << this->GetRoomNumber() << endl;
	cout << "Price per night: " << this->getPricePerNight() << "$" << endl;
    cout << "Has big bed: " << (this->getBed() ? "yes" : "no") << endl;
    cout << "Occupied: " << (this->isOccupied() ? "no" : "yes") << endl;
}

bool DoubleRoom::isOccupied()
{
    return this->occupied;
}

void DoubleRoom::setOccupied(bool occupied)
{
    this->occupied = occupied;
}
