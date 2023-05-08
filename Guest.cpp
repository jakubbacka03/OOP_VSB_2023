#include "Guest.h"
#include <iostream>

Guest::Guest(string name, int guestID, string phoneNumber)
{
    this->name = name;
    this->guestID = guestID;
    this->phoneNumber = phoneNumber;
}

string Guest::getName()
{
    return this->name;
}

int Guest::getGuestID()
{
    return this->guestID;
}

string Guest::getPhoneNumber()
{
    return this->phoneNumber;
}

bool Guest::isPayed()
{
    return this->payed;
}

void Guest::setPayed(bool payed)
{
    this->payed = payed;
}

string Guest::displayPay()
{
    if (this->payed == true) 
    {
        return " Yes";
    }
    else 
    {
        return " No";
    }

}
