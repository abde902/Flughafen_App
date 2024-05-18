
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
    std::tm parsedDate = parseDate(fromDate);

    std::chrono::system_clock::time_point timePoint = std::chrono::system_clock::from_time_t(std::mktime(&parsedDate));

    std::string formattedDate = formatDate(timePoint);
    return formattedDate;
}

std::string Booking::getToDate(){
    std::tm parsedDate = parseDate(toDate);

    std::chrono::system_clock::time_point timePoint = std::chrono::system_clock::from_time_t(std::mktime(&parsedDate));

    std::string formattedDate = formatDate(timePoint);
    return formattedDate;
}
std::string Booking::getId(){
    return id;
}
