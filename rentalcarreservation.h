
#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
#include "booking.h"
#include <string>



class RentalCarReservation : public Booking
{
public:
    RentalCarReservation(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                         std::string _pickupLocation, std::string _returnLocation, std::string _company, std::string _vehicleClass);
    std::string showDetails() override;
    ~RentalCarReservation() override;
private:
    std::string pickupLocation;
    std::string returnLocation;
    std::string company;
    std::string vehicleClass;
};

#endif // RENTALCARRESERVATION_H
