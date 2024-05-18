
#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H
#include "booking.h"
#include <string>


class HotelBooking : public Booking
{
public:
    HotelBooking(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                 std::string _hotel, std::string _town, std::string _roomType);
    std::string showDetails() override;
    ~HotelBooking() override;
    std::string getHotel();
    std::string getTown();
private:
    std::string hotel;
    std::string town;
    std::string roomType;
    std::string roomTypeToVerbose(std::string roomType);
};

#endif // HOTELBOOKING_H
