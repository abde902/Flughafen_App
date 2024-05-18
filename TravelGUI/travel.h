#ifndef TRAVEL_H
#define TRAVEL_H
#include "booking.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <chrono>


class Travel
{
public:
    Travel();
    Travel(int id, int customerId);
    void addBooking(Booking* booking);
    long getId();
    int getBookingCount() {return travelBookings.size();}
    std::vector<Booking*> getBookingList() {return travelBookings;}
    std::string getStartDate() const;
    std::string getEndDate() const;
private:
    long id;
    long customerId;
    std::vector<Booking*> travelBookings;
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
};

#endif // TRAVEL_H
