#pragma once
#include "Guest.h"
#include "Reservation.h"
#include <vector>
#include <string>

using namespace std;

class Payment 
{
    private:
        int id;                 // payment ID (same as guest ID)
        double amount;          // final price
        string paymentMethod;   // payment method
        Guest* guest;           // guest
        Room* room;             // room


    public:
        Payment(Guest* guest, Room* room, int id, double amount, string paymentMethod); // first fonstructor for Payment
        Payment(Guest* guest, Room* room, int id, double amount);                       // second fonstructor for Payment
        Payment(Guest* guest, Room* room, double amount, string paymentMethod);         // third fonstructor for Payment
        Payment(Guest* guest, Room* room, double amount);                               // forth fonstructor for Payment
        Guest* getGuest();                                                              // function that returns guest
        Room* getRoom();                                                                // function that returns room
        int getId();                                                                    // function that returns payment ID
        double getAmount();                                                             // function that returns final price  
        string getPaymentMethod();                                                      // function that returns paying method
        static double calculateFinalPrice(int nights, double pricepernight);            // function that calculates the final price
};
