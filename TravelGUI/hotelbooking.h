
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
    std::string getSymbol() override {return "🏠";}
    ~HotelBooking() override;
    std::string getHotel();
    std::string getTown();
    void setHotel(const std::string &newHotel);
    void setTown(const std::string &newTown);
    void setRoomType(const std::string &newRoomType);

private:
    std::string hotel;
    std::string town;
    std::string roomType;
    std::string roomTypeToVerbose(std::string roomType);
};

#endif // HOTELBOOKING_H
