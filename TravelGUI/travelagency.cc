
#include "travelagency.h"
#define JSONFILENAME "D:\\Travel\\Travel\\bookings.json"
#include "json.h"
#include <string>
#include "flightbooking.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include "QMessageBox"
#include "qstring.h"
#include "travel.h"
#include "customer.h"

using namespace nlohmann;

Travelagency::Travelagency()
{

}

Travelagency::~Travelagency()
{
    for (int i = 0; i < bookings.size(); ++i)
    {
        delete(bookings[i]);
    }
    bookings.clear();
}

Booking *Travelagency::getBookingAtIndex(int index)
{
    return bookings[index];
}

std::vector<Booking *> Travelagency::getAllBookings()
{
    return bookings;
}

int Travelagency::readFile(std::string fileName)
{
    for (int i = 0; i < bookings.size(); ++i)
    {
        delete(bookings[i]);
    }
    bookings.clear();
    travels.clear();
    customers.clear();
    std::ifstream file(fileName);
    if (!file)
    {
        std::cout << "Could not open File" << std::endl;
        return 0;
    }
    std::string currentObjectID = "Invalid ID";
    try
    {
        json data;
        file >> data;
        file.close();
        int flightCount = 0, hotelCount = 0, carReservationCount = 0;
        double totalFlightCost = 0.f, totalHotelCost = 0.f, totalCarReservationCost = 0.f;
        for (auto& booking : data){
            if (booking["type"] == "Flight")
            {
                std::string id = booking["id"];
                double price = booking["price"];
                std::string fromDate = booking["fromDate"];
                std::string toDate = booking["toDate"];
                std::string fromDestination = booking["fromDest"];
                std::string toDestination = booking["toDest"];
                std::string airline = booking["airline"];
                std::string bookingClass = booking["bookingClass"];
                //check for empty attributes
                if (id == "" || fromDate == "" || toDate == "" || fromDestination == "" || toDestination == "" || airline == "" || bookingClass == "")
                {
                    currentObjectID = id;
                    throw(0);
                }
                //check for valid price
                if (std::isnan(price) || price < 0.f)
                {
                    currentObjectID = id;
                    throw (1);
                }
                //check for valid airport abbreviation
                if (fromDestination.length() != 3 || toDestination.length() != 3)
                {
                    currentObjectID = id;
                    throw (2);
                }
                bookings.push_back(new FlightBooking(id, price, fromDate, toDate,
                                                     fromDestination, toDestination, airline, bookingClass[0]));
                long customerId = booking["customerId"];
                long travelId = booking["travelId"];
                std::string customerName = booking["customerName"];

                int index = -1;
                int indexT = -1;
                bool found = false;
                bool foundT = false;

                for (int i = 0; i < customers.size(); ++i) {
                    if(customers[i]->getId() == customerId) {
                        found = true;
                        index = i;
                        break;
                    }
                }
                for (int i = 0; i < travels.size(); ++i) {
                    if(travels[i]->getId() == travelId) {
                        foundT = true;
                        indexT = i;
                        break;
                    }
                }
                if (found) { //if the customer already exists
                    if(foundT) { //and the travel already exists
                        customers[index]->addTravel(travels[indexT]);
                        travels[index]->addBooking(bookings.back());
                    }
                    else { //but the travel doesnt exist
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        customers[index]->addTravel(t);
                    }
                }
                else { //if the customer doesnt exist yet
                    Customer* c = new Customer(customerId, customerName);
                    if(foundT) { //but the travel exists
                        c->addTravel(travels[indexT]);
                        travels[indexT]->addBooking(bookings.back());
                        }
                    else { //and the travel doesnt exist
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        c->addTravel(t);
                    }
                    customers.push_back(c);
                }



                flightCount++;
                totalFlightCost += price;
            }
            else if (booking["type"] == "Hotel")
            {
                std::string id = booking["id"];
                double price = booking["price"];
                std::string fromDate = booking["fromDate"];
                std::string toDate = booking["toDate"];
                std::string hotel = booking["hotel"];
                std::string town = booking["town"];
                std::string roomType = booking["roomType"];
                //check for empty attributes
                if (id == "" || fromDate == "" || toDate == "" || hotel == "" || town == "" || roomType == "")
                {
                    currentObjectID = id;
                    throw(0);
                }
                //check for valid price
                if (std::isnan(price) || price < 0.f)
                {
                    currentObjectID = id;
                    throw (1);
                }
                bookings.push_back(new HotelBooking(id, price, fromDate, toDate,
                                                    hotel, town, roomType));
                long customerId = booking["customerId"];
                long travelId = booking["travelId"];
                std::string customerName = booking["customerName"];
                int index = -1;
                int indexT = -1;
                bool found = false;
                bool foundT = false;

                for (int i = 0; i < customers.size(); ++i) {
                    if(customers[i]->getId() == customerId) {
                        found = true;
                        index = i;
                        break;
                    }
                }
                for (int i = 0; i < travels.size(); ++i) {
                    if(travels[i]->getId() == travelId) {
                        foundT = true;
                        indexT = i;
                        break;
                    }
                }
                if (found) {
                    if(foundT) {
                        customers[index]->addTravel(travels[indexT]);
                        travels[index]->addBooking(bookings.back());
                    }
                    else {
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        customers[index]->addTravel(t);
                    }
                }
                else {
                    Customer* c = new Customer(customerId, customerName);
                    if(foundT) {
                        c->addTravel(travels[indexT]);
                        travels[indexT]->addBooking(bookings.back());
                    }
                    else {
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        c->addTravel(t);
                    }
                    customers.push_back(c);
                }
                hotelCount++;
                totalHotelCost += price;
            }
            else if (booking["type"] == "RentalCar")
            {
                std::string id = booking["id"];
                double price = booking["price"];
                std::string fromDate = booking["fromDate"];
                std::string toDate = booking["toDate"];
                std::string pickupLocation = booking["pickupLocation"];
                std::string returnLocation = booking["returnLocation"];
                std::string company = booking["company"];
                std::string vehicleClass = booking["vehicleClass"];
                //check for empty attributes
                if (id == "" || fromDate == "" || toDate == "" || pickupLocation == "" || returnLocation == "" || company == "" || vehicleClass == "")
                {
                    currentObjectID = id;
                    throw(0);
                }
                //check for valid price
                if (std::isnan(price) || price < 0.f)
                {
                    currentObjectID = id;
                    throw (1);
                }
                bookings.push_back(new RentalCarReservation(id, price, fromDate, toDate,
                                                            pickupLocation, returnLocation, company, vehicleClass));
                long customerId = booking["customerId"];
                long travelId = booking["travelId"];
                std::string customerName = booking["customerName"];

                int index = -1;
                int indexT = -1;
                bool found = false;
                bool foundT = false;

                for (int i = 0; i < customers.size(); ++i) {
                    if(customers[i]->getId() == customerId) {
                        found = true;
                        index = i;
                        break;
                    }
                }
                for (int i = 0; i < travels.size(); ++i) {
                    if(travels[i]->getId() == travelId) {
                        foundT = true;
                        indexT = i;
                        break;
                    }
                }
                if (found) {
                    if(foundT) {
                        customers[index]->addTravel(travels[indexT]);
                        travels[index]->addBooking(bookings.back());
                    }
                    else {
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        customers[index]->addTravel(t);
                    }
                }
                else {
                    Customer* c = new Customer(customerId, customerName);
                    if(foundT) {
                        c->addTravel(travels[indexT]);
                        travels[indexT]->addBooking(bookings.back());
                    }
                    else {
                        Travel* t = new Travel(travelId, customerId);
                        t->addBooking(bookings.back());
                        travels.push_back(t);
                        c->addTravel(t);
                    }
                    customers.push_back(c);
                }
                carReservationCount++;
                totalCarReservationCost += price;
            }
        }

        for (int i = 0; i < bookings.size(); i++)
        {
            std::cout << bookings[i]->showDetails() << std::endl;
        }

        QMessageBox msgBox;
        QString message = "Found " + QString::number(flightCount) + " Flights with a total cost of: " + QString::number(totalFlightCost) + " Euro\n"
                              +"Found " + QString::number(hotelCount) + " Hotel Bookings with a total cost of: " + QString::number(totalHotelCost) + " Euro\n"
                          + "Found " + QString::number(carReservationCount) + " Rental Car Reservations with a total cost of: " + QString::number(totalCarReservationCost) + " Euro\n"
                          + "Created: " + QString::number(bookings.size()) + " Booking objects, " + QString::number(travels.size()) + " Travel Objects and " + QString::number(customers.size()) + " Customer objects\n"
                          + "Customer with id 1 has " + QString::number(findCustomer(1)->getTravelCount()) + " Travels\n" + "The Travel with the id 17 has " + QString::number(findTravel(17)->getBookingCount()) + "Bookings";
        msgBox.setText(message);
        msgBox.exec();

        /*
        std::cout << "Found " << flightCount << " Flights with a total cost of: " << totalFlightCost << " Euro\n"
                  << "Found " << hotelCount << " Hotel Bookings with a total cost of: " << totalHotelCost << " Euro\n"
                  << "Found " << carReservationCount << " Rental Car Reservations with a total cost of: " << totalCarReservationCost << " Euro" << std::endl;
        */
        return 0;
    }

    catch (int exceptionID)
    {
        QString message;
        std::string errorString = "";
        QMessageBox msgBox;
        switch (exceptionID)
        {

        case 0:
        {
        errorString = "Empty attribute\n";
            break;
        }
        case 1:
        {
            errorString = "Invalid price\n";
            break;
        }
        case 2:
        {
            errorString = "Invalid airport name\n";
            break;
        }
        }

        message = QString::fromStdString(errorString) + "Error occured for reservation with the ID: " ;//+ QString::number(currentObjectID);
        msgBox.setText(message);
        msgBox.exec();
        return -1;

    }
}

Booking *Travelagency::findBooking(std::string id)
{
    for(auto booking : bookings) {
        if( booking->getId() == id)
            return booking;
    }
    return nullptr;
}

Travel *Travelagency::findTravel(long id)
{
    for(auto travel : travels) {
        if(travel->getId() == id)
            return travel;
    }
    return nullptr;
}

Customer *Travelagency::findCustomer(long id)
{
    for(auto customer : customers) {
        if (customer->getId() == id)
            return customer;
    }
    return nullptr;
}

/* deprecated functionality. use json files instead
void Travelagency::readBinaryFile()
{
    for (int i = 0; i < bookings.size(); ++i)
    {
        delete(bookings[i]);
    }
    bookings.clear();
    std::string fileName = "D:\\Travel\\Travel\\bookingsBinary.bin";
    std::ifstream inputFileStream;

    inputFileStream.open(fileName.c_str(), std::ifstream::binary | std::ifstream::in);
    if (!inputFileStream)
    {
        std::cout << "Could not open File" << std:: endl;
        return;
    }

    //general (every booking has this)
    char bookingType;
    char id[39];
    double price;
    char fromDate[9], toDate[9];

    //flight specific
    char fromDestination[4];
    char toDestination[4];
    char airline[16];

    //rental car specific
    char pickupLocation[16];
    char returnLocation[16];
    char company[16];

    //hotel specific
    char hotel[16];
    char town[16];

    int fCount = 0, hCount = 0, rcCount = 0;
    double tFCost = 0.f, tHCost = 0.f, tRCCost = 0.f;

    while (!inputFileStream.eof())
    {
        inputFileStream.read(reinterpret_cast<char*>(&bookingType), sizeof(char));
        inputFileStream.read(reinterpret_cast<char*>(&id), 38*sizeof(char));
        id[38] = '\0';
        inputFileStream.read(reinterpret_cast<char*>(&price), sizeof(double));
        inputFileStream.read(reinterpret_cast<char*>(&fromDate), 8*sizeof(char));
        fromDate[8] = '\0';
        inputFileStream.read(reinterpret_cast<char*>(&toDate), 8*sizeof(char));
        toDate[8] = '\0';

        //check what type of booking we have and interpret the data accordingly aswell as create an object of the booking
        switch(bookingType)
        {
        case 'F':
        {
            inputFileStream.read(reinterpret_cast<char*>(&fromDestination), 3*sizeof(char));
            fromDestination[3] = '\0';
            inputFileStream.read(reinterpret_cast<char*>(&toDestination), 3*sizeof(char));
            toDestination[3] = '\0';
            inputFileStream.read(reinterpret_cast<char*>(&airline), 15*sizeof(char));
            airline[15] = '\0';
            FlightBooking* flightBooking = new FlightBooking(id, price, fromDate, toDate, fromDestination, toDestination, airline);
            bookings.push_back(flightBooking);
            fCount++;
            tFCost += price;
            break;
        }

        case 'R':
        {
            inputFileStream.read(reinterpret_cast<char*>(&pickupLocation), 15*sizeof(char));
            pickupLocation[15] = '\0';
            inputFileStream.read(reinterpret_cast<char*>(&returnLocation), 15*sizeof(char));
            returnLocation[15] = '\0';
            inputFileStream.read(reinterpret_cast<char*>(&company), 15*sizeof(char));
            company[15] = '\0';
            RentalCarReservation* rentalCarReservation = new RentalCarReservation(id, price, fromDate, toDate, pickupLocation, returnLocation, company);
            bookings.push_back(rentalCarReservation);
            rcCount++;
            tRCCost += price;
            break;
        }

        case 'H':
        {
            inputFileStream.read(reinterpret_cast<char*>(&hotel), 15*sizeof(char));
            hotel[15] = '\0';
            inputFileStream.read(reinterpret_cast<char*>(&town), 15*sizeof(char));
            town[15] = '\0';
            HotelBooking* hotelBooking = new HotelBooking(id, price, fromDate, toDate, hotel, town);
            bookings.push_back(hotelBooking);
            hCount++;
            tHCost += price;
            break;
        }

        default:
            break;
        }
    }

    for (int i = 0; i < bookings.size(); ++i)
    {
        std::cout << bookings[i]->showDetails() << std::endl;
    }
    std::cout << "Found " << fCount << " Flights with a total cost of: " << tFCost << " Euro\n"
              << "Found " << hCount << " Hotel Bookings with a total cost of: " << tHCost << " Euro\n"
              << "Found " << rcCount << " Rental Car Reservations with a total cost of: " << tRCCost << " Euro" << std::endl;
    inputFileStream.close();
}*/
