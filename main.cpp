#include <iostream>
#include "Hotel.h"
#include "Guest.h"
#include "Room.h"
#include "SingleRoom.h"
#include "DoubleRoom.h"
#include "VIPRoom.h"
#include "Reservation.h"
#include "Payment.h"
#include <string>
#include <cstdbool>
#include <vector>

using namespace std;

int main()
{
    Hotel hotel;

    // introduction
    cout << "*************************************" << endl;
    cout << "Welcome to hotel Winchester" << endl;
    cout << "*************************************" << endl;

    cout << endl;

    // all rooms
    SingleRoom* A101 = new SingleRoom(101, 25.99, false);
    SingleRoom* A102 = new SingleRoom(102, 25.99, false);
    SingleRoom* A103 = new SingleRoom(103, 35.99, true);
    SingleRoom* A104 = new SingleRoom(104, 35.99, true);

    DoubleRoom* B201 = new DoubleRoom(201, 30.00, false);
    DoubleRoom* B202 = new DoubleRoom(202, 30.00, false);
    DoubleRoom* B203 = new DoubleRoom(203, 40.00, true);
    DoubleRoom* B204 = new DoubleRoom(204, 40.00, true);

    VIPRoom* C301 = new VIPRoom(301, 115.99, true, true, false);
    VIPRoom* C302 = new VIPRoom(302, 150.00, true, true, true);

    // all guests
    Guest* guest1 = new Guest("Peter Zubac", 1234, "0944 123 123");
    Guest* guest2 = new Guest("Daniel Kudla", 5678, "0944 321 321");
    Guest* guest3 = new Guest("Majo Mrkvicka", 9012, "0944 456 456");
    Guest* guest4 = new Guest("Palov Marcin", 3456, "0944 654 645");
    Guest* guest5 = new Guest("Jan Balda", 7890, "0944 789 789");

    hotel.addGuest(guest1);
    hotel.addGuest(guest2);
    hotel.addGuest(guest3);
    hotel.addGuest(guest4);
    hotel.addGuest(guest5);

    // all reservations
    Reservation* res1 = new Reservation(guest1, A101, "12.5.2023", "13.5.2023", 1);
    Reservation* res2 = new Reservation(guest2, A103, "11.5.2023", "13.5.2023", 2);
    Reservation* res3 = new Reservation(guest3, B201, "10.5.2023", "13.5.2023", 3);
    Reservation* res4 = new Reservation(guest4, B203, "14.5.2023", "16.5.2023", 2);
    Reservation* res5 = new Reservation(guest5, C301, "13.5.2023", "15.5.2023", 2);

    hotel.addReservation(res1);
    hotel.addReservation(res2);
    hotel.addReservation(res3);
    hotel.addReservation(res4);
    hotel.addReservation(res5);

    hotel.removeGuest(guest4);
    hotel.removeReservation(res4);

    A101->setOccupied(false);
    A103->setOccupied(false);
    B201->setOccupied(false);
    C301->setOccupied(false);

    // all payments
    Payment* pay1 = new Payment(guest1, A101, 1234, pay1->calculateFinalPrice(res1->getNights(), A101->getPricePerNight()), "Card");
    Payment* pay2 = new Payment(guest2, A103, 5678, pay2->calculateFinalPrice(res2->getNights(), A103->getPricePerNight()));
    Payment* pay3 = new Payment(guest3, B201, pay3->calculateFinalPrice(res3->getNights(), B201->getPricePerNight()), "Cash");
    Payment* pay4 = new Payment(guest5, C301, pay4->calculateFinalPrice(res5->getNights(), C301->getPricePerNight()));

    cout  << endl;

    guest1->setPayed(true);
    guest2->setPayed(true);
    guest3->setPayed(true);
    guest5->setPayed(true);

    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;   

    // guest overview
    cout << "Guests overview: " << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    Guest** guestList = hotel.getGuestList();
    for (int i = 0; i < hotel.getGuestCount(); i++)
    {
        Guest* guest = guestList[i];
        cout << "Guest " << i + 1 << ":" << std::endl;
        cout << "Name: " << guest->getName() << endl;
        cout << "GuestID: " << guest->getGuestID() << endl;
        cout << "Phone number: " << guest->getPhoneNumber() << endl;
        cout << endl;
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // reservations overview
    cout << "Reservations overview: " << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    Reservation** reservationList = hotel.getReservationList();
    for (int i = 0; i < hotel.getReservationCount(); i++)
    {
        Reservation* reservation = reservationList[i];
        cout << "Reservation " << i + 1 << ":" << std::endl;
        cout << "Guest: " << reservation->getGuest()->getName() << endl;
        cout << "Room number: " << reservation->getRoom()->GetRoomNumber() << endl;
        cout << "Check-in date: " << reservation->getCheckInDate() << endl;
        cout << "Check-out date: " << reservation->getCheckOutDate() << endl;
        cout << "Nights: " << reservation->getNights() << endl;
        cout << endl;
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // room overview
    cout << "Rooms overview:" << endl;
    cout << endl;

    cout << "--------------------------------------------" << endl;

    cout << endl;
    cout << "Singlerooms: " << endl;
    cout << endl;
    cout << "Room A101" << endl;
    A101->display();
    cout << endl;
    cout << "Room A102" << endl;
    A102->display();
    cout << endl;
    cout << "Room A103" << endl;
    A103->display();
    cout << endl;
    cout << "Room A104" << endl;
    A104->display();
    cout << endl;

    cout << "--------------------------------------------" << endl;
    
    cout << endl;
    cout << "Doublerooms: " << endl;
    cout << endl;
    cout << "Room B201" << endl;
    B201->display();
    cout << endl;
    cout << "Room B202" << endl;
    B202->display();
    cout << endl;
    cout << "Room B203" << endl;
    B203->display();
    cout << endl;
    cout << "Room B204" << endl;
    B204->display();
    cout << endl;

    cout << "--------------------------------------------" << endl;

    cout << endl;
    cout << "VIP Rooms: " << endl;
    cout << endl;
    cout << "Room C301" << endl;
    C301->display();
    cout << endl;
    cout << "Room C302" << endl;
    C302->display();
    cout << endl;

    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;

    // payment overview
    cout << "Payment overview:" << endl;
    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << guest1->getName();
    cout << " Has to pay: " << pay1->getAmount() << "$" << endl;
    cout << "Did the guest payed:" << guest1->displayPay() << endl;
    cout << endl;
    cout << guest2->getName();
    cout << " Has to pay: " << pay2->getAmount() << "$" << endl;
    cout << "Did the guest payed:" << guest2->displayPay() << endl;
    cout << endl;
    cout << guest3->getName();
    cout << " Has to pay: " << pay3->getAmount() << "$" << endl;
    cout << "Did the guest payed:" << guest3->displayPay() << endl;
    cout << endl;
    cout << guest5->getName();
    cout << " Has to pay: " << pay4->getAmount() << "$" << endl;
    cout << "Did the guest payed:" << guest5->displayPay() << endl;
    cout << endl;

    // memory clean
    /*delete A101;
    delete A102;
    delete A103;
    delete A104;
    delete B201;
    delete B202;
    delete B203;
    delete B204;
    delete C301;
    delete C302;

    delete res1;
    delete res2;
    delete res3;
    delete res5;

    delete guest1;
    delete guest2;
    delete guest3;
    delete guest5;*/

    return 0;
}
