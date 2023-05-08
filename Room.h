#pragma once
class Room
{
	public:									   // this is "èisto abstraktná trieda"
		virtual int GetRoomNumber() = 0;	   // function that returns the room number
		virtual double getPricePerNight() = 0; // function that return price per night
		virtual void display() = 0;            // function that displays the room properties
};

