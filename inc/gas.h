#ifndef GAS_H
#define GAS_H

#include "fuel.h"
#include <string>

class Gas : public Fuel
{
private:
    double stationFuleLevel, price;
    std::string fuelName;

public:
    Gas(double a=1000, double b=2.48, std::string c="Gaz");
    virtual void giveFuel(double howMuch);
    virtual void loadFuel(double howMuch);
    virtual double giveFuelStatus();
    virtual double giveFuelPrice();
    virtual std::string giveFuelName();

};

#endif // GAS_H
