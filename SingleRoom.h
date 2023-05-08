#pragma once
#include "Room.h"
#include "Reservation.h"
#include <vector>

class SingleRoom : public Room
{
	private:
		int roomNumber;	 // room number
		double price;    // price per night
		bool hasBalcony; // if the room has balcony
		bool occupied;   // if the room is occupied

	public:
		SingleRoom(int number, double price, bool hasBalcony); // constructor for SingleRoom
		virtual int GetRoomNumber();						   // function that returns room number
		virtual double getPricePerNight();					   // function that returns price per night
		bool getBalcony();									   // function that returns if the room has balcony
		virtual void display();								   // function that displays the room properties
		bool isOccupied();									   // function that returns if the room is occupied
		void setOccupied(bool occupied);					   // function that sets the room occupation
};
