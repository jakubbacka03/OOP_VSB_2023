#include "Payment.h"

Payment::Payment(Guest* guest, Room* room, int id, double amount, string paymentMethod)
{
    this->guest = guest;
    this->room = room;
    this->id = id;
    this->amount = amount;
    this->paymentMethod = paymentMethod;
}

Payment::Payment(Guest* guest, Room* room, int id, double amount)
{
    this->guest = guest;
    this->room = room;
    this->id = id;
    this->amount = amount;
}

Payment::Payment(Guest* guest, Room* room, double amount, string paymentMethod) 
{
    this->guest = guest;
    this->room = room;
    this->amount = amount;
    this->paymentMethod = paymentMethod;
}

Payment::Payment(Guest* guest, Room* room, double amount) 
{
    this->guest = guest;
    this->room = room;
    this->amount = amount;
}

Guest* Payment::getGuest()
{
    return this->guest;
}

Room* Payment::getRoom()
{
    return this->room;
}

int Payment::getId() 
{
    return this->id;
}

double Payment::getAmount() 
{
    return this->amount;
}

string Payment::getPaymentMethod() 
{
    return this->paymentMethod;
}

double Payment::calculateFinalPrice(int nights, double pricepernight)
{
    return nights * pricepernight;
}
