#include "travel.h"

Travel::Travel()
{

}

Travel::Travel(int id, int customerId) : id(id), customerId(customerId)
{

}

void Travel::addBooking(Booking *booking)
{
    travelBookings.push_back(booking);
}

long Travel::getId()
{
    return id;
}

std::string Travel::getStartDate() const
{

        if (travelBookings.empty()) {
            return "";
        }

        std::chrono::system_clock::time_point earliestDate = std::chrono::system_clock::now();
        for (const auto& booking : travelBookings) {
            std::tm startDate = parseDate(booking->getFromDate());
            std::chrono::system_clock::time_point bookingStartDate = std::chrono::system_clock::from_time_t(std::mktime(&startDate));
            earliestDate = std::min(earliestDate, bookingStartDate);
        }

        return formatDate(earliestDate);

}

std::string Travel::getEndDate() const
{
        if (travelBookings.empty()) {
            return "";
        }

        std::chrono::system_clock::time_point latestDate = std::chrono::system_clock::now();
        for (const auto& booking : travelBookings) {
            std::tm endDate = parseDate(booking->getToDate());
            std::chrono::system_clock::time_point bookingEndDate = std::chrono::system_clock::from_time_t(std::mktime(&endDate));
            latestDate = std::max(latestDate, bookingEndDate);
        }

        return formatDate(latestDate);
}
