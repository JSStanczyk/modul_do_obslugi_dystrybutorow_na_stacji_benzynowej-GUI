#ifndef PETROL_H
#define PETROL_H

#include "fuel.h"
#include <string>

class Petrol : public Fuel
{
private:
    double stationFuleLevel, price;
    std::string fuelName;
public:
    Petrol(double a=1000, double b= 4.39, std::string c="Benzyna");
    virtual void giveFuel(double howMuch);
    virtual void loadFuel(double howMuch);
    virtual double giveFuelStatus();
    virtual double giveFuelPrice();
    virtual std::string giveFuelName();
};

#endif // PETROL_H
