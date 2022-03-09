#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
private:
    double bill, fuelTaken;
    std::string fuelName;

public:
    Customer(std::string a="Nazwa paliwa" ,double b=0, double c=0);
    void saveBill(std::string a, double b, double c);
    double giveFuelTaken();
    std::string giveFuelName();
    double giveBill();
};

#endif // CUSTOMER_H
