
#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation(std::string _id, double _price, std::string _fromDate, std::string _toDate,
                                           std::string _pickupLocation, std::string _returnLocation, std::string _company, std::string _vehicleClass)
    : Booking(_id, _price, _fromDate, _toDate),
    pickupLocation(_pickupLocation), returnLocation(_returnLocation), company(_company), vehicleClass(_vehicleClass)
{

}

RentalCarReservation::~RentalCarReservation()
{

}

std::string RentalCarReservation::showDetails()
{
    return "Rentalcar Reservation via " + this->company + " pickup on " + this->fromDate + " at " + this->pickupLocation +
           " return on " + this->toDate + " at " + this->returnLocation + " . Price: " + std::to_string(this->price) + " Euro";
}

std::string RentalCarReservation::getCompany(){
    return company;
}
std::string RentalCarReservation::getPickupLocation(){
    return pickupLocation;
}
std::string RentalCarReservation::getReturnLocation(){
    return returnLocation;
}
