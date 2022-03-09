#ifndef FUEL_H
#define FUEL_H
#include <string>

class Fuel
{
public:
    virtual void giveFuel(double howMuch)=0;
    virtual void loadFuel(double howMuch)=0;
    virtual double giveFuelStatus()=0;
    virtual double giveFuelPrice()=0;
    virtual std::string giveFuelName()=0;
    virtual ~Fuel(){};

};

#endif // FUEL_H
