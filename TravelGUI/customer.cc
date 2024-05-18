#include "customer.h"

Customer::Customer()
{

}

Customer::Customer(long id, std::string name) : id(id), name(name)
{

}

void Customer::addTravel(Travel* travel)
{
    for(int i = 0; i < travelList.size(); ++i) {
        if (travelList[i]->getId() == travel->getId())
            return;
    }
    travelList.push_back(travel);
}
