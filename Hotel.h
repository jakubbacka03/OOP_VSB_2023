#pragma once
#include "Guest.h"
#include "Reservation.h"


class Hotel
{
	private:
		Guest** guests;							// guests
		Reservation** reservations;				// resertvations
		int guestCount;							// count of all the guest
		int reservationCount;					// count of all the reservations
		static const int MAX_RESERVATIONS = 10;	// maximum number of guests
		static const int MAX_GUESTS = 26;		// maximum number of reservations

	public:
		Hotel();											// constructor for Hotel			
		~Hotel();											// destructor for Hotel
		void addGuest(Guest* guest);						// function that adds guest
		void removeGuest(Guest* guest);						// function that removes guest
		void addReservation(Reservation* reservation);		// function that adds reservation
		void removeReservation(Reservation* reservation);	// function that removes reservation
		int getGuestCount();								// function that returns the number of all guests
		int getReservationCount();							// function that returns the number of all reservations
		Reservation** getReservationList();					// function that returns list of all reservations
		Guest** getGuestList();								// function that returns list of all guests
};
