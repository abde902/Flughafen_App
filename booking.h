
#ifndef BOOKING_H
#define BOOKING_H
#include <string>



class Booking
{
public:
    Booking(std::string _id, double _price, std::string _fromDate, std::string _toDate);
    virtual std::string showDetails() = 0;
    virtual ~Booking() = 0;
    double getPrice();
    std::string getId();
    std::string getFromDate();
    std::string getToDate();
protected:
    std::string id;
    double price;
    std::string fromDate;
    std::string toDate;

};

#endif // BOOKING_H
