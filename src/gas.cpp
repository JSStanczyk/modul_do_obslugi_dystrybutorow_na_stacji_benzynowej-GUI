#include "gas.h"

Gas::Gas(double a, double b, std::string c) : stationFuleLevel(a), price(b),
         fuelName(c){}

void Gas::giveFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel-howMuch;
    }

void Gas::loadFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel+howMuch;
    }

double Gas::giveFuelStatus()
    {
        return stationFuleLevel;
    }

double Gas::giveFuelPrice()
    {
        return price;
    }

std::string Gas::giveFuelName()
    {
        return fuelName;
    }
