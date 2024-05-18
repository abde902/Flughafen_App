
#include "booking.h"

Booking::Booking(std::string _id, double _price, std::string _fromDate, std::string _toDate)
    : id(_id), price(_price), fromDate(_fromDate), toDate(_toDate)
{

}

Booking::~Booking()
{

}

double Booking::getPrice()
{
    return price;
}

std::string Booking::getFromDate()
{
    return fromDate;
}

std::string Booking::getToDate(){
    return toDate;
}
std::string Booking::getId(){
    return id;
}
