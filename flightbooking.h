
#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include "booking.h"
#include <string>



class FlightBooking : public Booking
{
public:
    FlightBooking(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                  std::string _fromDestination, std::string _toDestination, std::string _airline, char _bookingClass);
    std::string showDetails() override;
    ~FlightBooking() override;
    std::string getAirline();
    std::string getFromDestination();
    std::string getToDestination();
private:
    std::string fromDestination;
    std::string toDestination;
    std::string airline;
    char bookingClass;
    std::string bookingClassCharToVerbose(char bookingClass);
};

#endif // FLIGHTBOOKING_H
