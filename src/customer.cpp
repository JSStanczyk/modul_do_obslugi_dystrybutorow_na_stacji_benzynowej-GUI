#include "customer.h"

Customer::Customer(std::string a, double b, double c):bill(b), fuelName(a), fuelTaken(c){}

void Customer::saveBill(std::string a, double b, double c)
    {
        fuelName=a;
        fuelTaken=c;
        bill=b;
    }

double Customer::giveFuelTaken()
    {
        return fuelTaken;
    }

std::string Customer::giveFuelName()
    {
        return fuelName;
    }

double Customer::giveBill()
    {
        return bill;
    }
