
#include "hotelbooking.h"

HotelBooking::HotelBooking(std::string _id, double _price, std::string _fromDate, std::string _toDate,long travelId,
                           std::string _hotel, std::string _town, std::string _roomType,  std::string hotelLatitude,  std::string hotelLongitude)
    : Booking(_id, _price, _fromDate, _toDate, travelId),
    hotel(_hotel), town(_town), roomType(_roomType), hotelLatitude(hotelLatitude),  hotelLongitude(hotelLongitude)
{
    setRoomType(roomTypeToVerbose(roomType));
}

HotelBooking::~HotelBooking()
{

}

std::string HotelBooking::showDetails()
{
    return "Hotelreservation for the Hotel: " + this->hotel + " in " + this->town + " from " + this->fromDate
           + " until " + this->toDate +"RoomType : "+this->getRoomType()+ ". Price: " + std::to_string(this->price) + " Euro";
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

void HotelBooking::setRoomType(const std::string &newRoomType)
{
    roomType = newRoomType;
}

void HotelBooking::setHotel(const std::string &newHotel)
{
    hotel = newHotel;
}

void HotelBooking::setTown(const std::string &newTown)
{
    town = newTown;
}

std::string HotelBooking::getHotelLatitude() const
{
    return hotelLatitude;
}

std::string HotelBooking::getHotelLongitude() const
{
    return hotelLongitude;
}

std::string HotelBooking::getHotel(){
    return hotel;
}

std::string HotelBooking::getTown(){
    return town;
}

std::string HotelBooking::getRoomType() const
{
    return roomType;
}
