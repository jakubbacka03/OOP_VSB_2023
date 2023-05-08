#pragma once
#include "Room.h"
#include "Reservation.h"
#include <vector>

class VIPRoom : public Room
{
	private:
		int roomNumber;  // room number
		double price;    // price per night
		bool hasBar;     // if the room has bar
		bool hasJacuzzi; // if the room has jacuzzi
		bool hasSauna;   // if the toom has sauna
		bool occupied;   // if the room is occupied

	public:
		VIPRoom(int roomNumber, double price, bool hasBar, bool hasJacuzzi, bool hasSauna);	// constructor of VIProom
		int GetRoomNumber();																// function that returns the room number
		double getPricePerNight();															// function that returns the price per night
		bool getBar();																		// function that returns if the room has bar
		bool getJacuzzi();																	// function that returns if the room has jacuzzi
		bool getSauna();																	// function that returns if the room has sauna
		virtual void display();																// function that displays the room properties
		bool isOccupied();																	// function that returns if the room is occupied
		void setOccupied(bool occupied);													// function that sets the room occupation
};
