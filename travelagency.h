
#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "booking.h"
#include <vector>



class Travelagency
{
public:
    Travelagency();
    int readFile(std::string fileName);
    void readBinaryFile();
    ~Travelagency();
    std::vector<Booking*> bookings;
private:

};

#endif // TRAVELAGENCY_H
