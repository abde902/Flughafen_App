
#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>




class Booking
{
public:
    Booking(std::string _id, double _price, std::string _fromDate, std::string _toDate);
    virtual std::string showDetails() = 0;
    virtual ~Booking() = 0;
    virtual std::string getSymbol() = 0;
    double getPrice();
    std::string getId();
    std::string getFromDate();
    std::string getToDate();
    std::tm parseDate(const std::string& date) const {
        std::tm time = {};
        std::stringstream ss(date);
        ss >> std::get_time(&time, "%Y%m%d");
        return time;
    }

    std::string formatDate(const std::chrono::system_clock::time_point& date) const {
        std::time_t time = std::chrono::system_clock::to_time_t(date);
        std::tm* tm = std::localtime(&time);

        std::stringstream ss;
        ss << std::put_time(tm, "%A, %e.%B %Y");
        return ss.str();
    }
protected:
    std::string id;
    double price;
    std::string fromDate; //yyyyMMdd
    std::string toDate;

};

#endif // BOOKING_H
