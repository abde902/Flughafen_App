
#include "hotelbooking.h"

HotelBooking::HotelBooking(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                           std::string _hotel, std::string _town, std::string _roomType)
    : Booking(_id, _price, _fromDate, _toDate),
    hotel(_hotel), town(_town), roomType(_roomType)
{

}

HotelBooking::~HotelBooking()
{

}

std::string HotelBooking::showDetails()
{
    return "Hotelreservation for the Hotel: " + this->hotel + " in " + this->town + " from " + this->fromDate
           + " until " + this->toDate + ". Price: " + std::to_string(this->price) + " Euro";
}

std::string HotelBooking::roomTypeToVerbose(std::string roomType)
{
    if (roomType == "EZ")
    {
        return "Einzelzimmer";
    }
    else if (roomType == "DZ")
    {
        return "Doppelzimmer";
    }
    else if (roomType == "AP")
    {
        return "Appartment";
    }
    else if (roomType == "SU")
    {
        return "Suite";
    }
    else
    {
        return "invalid";
    }
}

std::string HotelBooking::getHotel(){
    return hotel;
}

std::string HotelBooking::getTown(){
    return town;
}

void HotelBooking::setHotel(const std::string &newHotel)
{
    hotel = newHotel;
}

void HotelBooking::setTown(const std::string &newTown)
{
    town = newTown;
}

void HotelBooking::setRoomType(const std::string &newRoomType)
{
    roomType = newRoomType;
}
