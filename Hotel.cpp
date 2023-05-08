#include "Hotel.h"
#include <iostream>

Hotel::Hotel() 
{
    guests = new Guest * [MAX_GUESTS];
    reservations = new Reservation * [MAX_RESERVATIONS];
    guestCount = 0;
    reservationCount = 0;
}

Hotel::~Hotel() 
{
    for (int i = 0; i < guestCount; i++) 
    {
        delete guests[i];
    }
    for (int i = 0; i < reservationCount; i++) 
    {
        delete reservations[i];
    }
    delete[] guests;
    delete[] reservations;
}

void Hotel::addGuest(Guest* guest) 
{
    guests[guestCount++] = guest;
}

void Hotel::removeGuest(Guest* guest) 
{
    for (int i = 0; i < guestCount; i++) 
    {
        if (guests[i] == guest) 
        {
            guests[i] = guests[--guestCount];
            return;
        }
    }
}

void Hotel::addReservation(Reservation* reservation) 
{
    reservations[reservationCount++] = reservation;
}

void Hotel::removeReservation(Reservation* reservation) 
{
    for (int i = 0; i < reservationCount; i++) 
    {
        if (reservations[i] == reservation) 
        {
            reservations[i] = reservations[--reservationCount];
            
        }
    }
}

int Hotel::getGuestCount()
{
    return this->guestCount;
}

int Hotel::getReservationCount()
{
    return this->reservationCount;
}

Reservation** Hotel::getReservationList() 
{
    return reservations;
}

Guest** Hotel::getGuestList() 
{
    return guests;
}
