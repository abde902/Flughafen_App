#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "travel.h"
#include <string>


class Customer
{
public:
    Customer();
    Customer(long id, std::string name);
    void addTravel(Travel* travel);
    long getId() {return id;}
    std::string getName() {return name;}
    int getTravelCount() {return travelList.size();}
    std::vector<Travel*> getTravelList() {return travelList;}
private:
    long id;
    std::string name;
    std::vector<Travel*> travelList;
};

#endif // CUSTOMER_H
