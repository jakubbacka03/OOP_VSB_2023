#pragma once
#include "Room.h"
#include "Guest.h"
#include <string>

using namespace std;

class Room;
class Guest;

class Reservation
{
	private:
		Guest* guest;		 // guest
		Room* room;			 // room
		string checkInDate;	 // check in date
		string checkOutDate; // check out date
		int nights;			 // number of nights

	public:
		Reservation(Guest* guest, Room* room, string checkInDate, string checkOutDate, int nights); // constructor for Reservation
		Guest* getGuest();																			// function that returns guest
		Room* getRoom();																			// function that returns room
		string getCheckInDate();																	// function that returns check in date
		string getCheckOutDate();																	// function that returns check out date
		int getNights();																			// function that returns number of nights
};
