#ifndef DISEL_H
#define DISEL_H

#include "fuel.h"
#include <string>

class Disel : public Fuel
{
private:
    double stationFuleLevel, price;
    std::string fuelName;

public:
    Disel(double a=1000, double b=3.89, std::string c="Disel");
    virtual void giveFuel(double howMuch);
    virtual void loadFuel(double howMuch);
    virtual double giveFuelStatus();
    virtual double giveFuelPrice();
    virtual std::string giveFuelName();

};

#endif // DISEL_H
