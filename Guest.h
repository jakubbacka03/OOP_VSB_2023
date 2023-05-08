#pragma once
#include "Reservation.h"
#include <string>
#include <vector>

using namespace std;

class Guest
{
	private:
		string name;                       // guests name
		int guestID;					   // guests ID
		string phoneNumber;				   // guests phonenumber 
		bool payed;						   // if guest payed

	public:
		Guest(string name, int guestID, string phoneNumber); // constructor for Guest
		string getName();									 // function that returns the name of the guest
		int getGuestID();									 // function that returns the ID of the guest
		string getPhoneNumber();							 // function that returns the phonenumber of the guest
		bool isPayed();										 // function that returns if guest payed
		void setPayed(bool payed);							 // function thta sets the if the guest payed
		string displayPay();								 // function that displays if the guest payed
};
