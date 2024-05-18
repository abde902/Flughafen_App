
#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "booking.h"
#include "travel.h"
#include "customer.h"
#include <string>
#include <vector>



class Travelagency
{
public:
    Travelagency();
    int readFile(std::string fileName);
    Booking* findBooking(std::string id);
    Travel* findTravel(long id);
    Customer* findCustomer(long id);
    void readBinaryFile();
    ~Travelagency();
    Booking* getBookingAtIndex(int index);
    std::vector<Booking*> getAllBookings();
private:
    std::vector<Booking*> bookings;
    std::vector<Customer*> customers;
    std::vector<Travel*> travels;
    std::vector<long> customerIds;
    std::vector<long> travelIds;
};

#endif // TRAVELAGENCY_H
