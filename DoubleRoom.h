#pragma once
#include "Room.h"
#include "Reservation.h"
#include <vector>

class DoubleRoom : public Room
{
	private:
		int roomNumber; // room number
		double price;   // room price per night
		bool hasBigBed; // if the room has a one big bed
		bool occupied;  // if the room is occupied

	public:
		DoubleRoom(int number, double price, bool hasBigBed); // constructor for DoubleRoom
		virtual int GetRoomNumber();                          // function thta returns room number
		virtual double getPricePerNight();                    // function that returns price per night
		bool getBed();										  // function that returns if the room has a one big bed
		virtual void display();								  // function that displays tre room properties
		bool isOccupied();									  // function that returns if the room is occupied
		void setOccupied(bool occupied);				      // function that sets the room occupation
};
