
#include "flightbooking.h"

FlightBooking::FlightBooking(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                             std::string _fromDestination, std::string _toDestination, std::string _airline, char _bookingClass)
    : Booking(_id, _price, _fromDate, _toDate),
    fromDestination(_fromDestination), toDestination(_toDestination), airline(_airline), bookingClass(_bookingClass)
{

}

FlightBooking::~FlightBooking()
{

}

std::string FlightBooking::showDetails()
{
    return "Flightreservation from " + this->fromDestination + " to " + this->toDestination +
           " via " + this->airline + " on " + this->fromDate + ". Price: " + std::to_string(this->price) + " Euro";
}

std::string FlightBooking::bookingClassCharToVerbose(char bookingClass)
{
    switch(bookingClass)
    {
    case 'Y':
        return "Economy Class";
        break;
    case 'W':
        return "Premium Economy Class";
        break;
    case 'J':
        return "Business Class";
        break;
    case 'F':
        return "First Class";
        break;
    default:
        return "invalid";
        break;
    }
}

std::string FlightBooking::getAirline(){
    return airline;
}

std::string FlightBooking::getFromDestination(){
    return fromDestination;
}
std::string FlightBooking::getToDestination(){
    return toDestination;
}

void FlightBooking::setFromDestination(const std::string &newFromDestination)
{
    fromDestination = newFromDestination;
}

void FlightBooking::setToDestination(const std::string &newToDestination)
{
    toDestination = newToDestination;
}

void FlightBooking::setAirline(const std::string &newAirline)
{
    airline = newAirline;
}

void FlightBooking::setBookingClass(char newBookingClass)
{
    bookingClass = newBookingClass;
}
