#include "VIPRoom.h"
#include <iostream>

using namespace std;

VIPRoom::VIPRoom(int roomNumber, double price, bool hasBar, bool hasJacuzzi, bool hasSauna) 
{
    this->roomNumber = roomNumber;
    this->price = price;
    this->hasBar = hasBar;
    this->hasJacuzzi = hasJacuzzi;
    this->hasSauna = hasSauna;
}

int VIPRoom::GetRoomNumber() 
{
    return this->roomNumber;
}

double VIPRoom::getPricePerNight() 
{
    return this->price;
}

bool VIPRoom::getBar() 
{
    return this->hasBar;
}

bool VIPRoom::getJacuzzi() 
{
    return this->hasJacuzzi;
}

bool VIPRoom::getSauna() 
{
    return this->hasSauna;
}

void VIPRoom::display()
{
    cout << "Room number:" << GetRoomNumber() << endl;
    cout << "Price per night: " << getPricePerNight() << "$" << endl;
    cout << "Has bar: " << (getBar() ? "Yes" : "No") << endl;
    cout << "Has jacuzzi: " << (getJacuzzi() ? "Yes" : "No") << endl;
    cout << "Has sauna: " << (getSauna() ? "Yes" : "No") << endl;
    cout << "Occupied: " << (this->isOccupied() ? "no" : "yes") << endl;
}

bool VIPRoom::isOccupied()
{
    return this->occupied;
}

void VIPRoom::setOccupied(bool occupied)
{
    this->occupied = occupied;
}
