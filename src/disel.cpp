#include "disel.h"

Disel::Disel(double a, double b, std::string c) : stationFuleLevel(a), price(b),
             fuelName(c){}

void Disel::giveFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel-howMuch;
    }

void Disel::loadFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel+howMuch;
    }

double Disel::giveFuelStatus()
    {
        return stationFuleLevel;
    }

double Disel::giveFuelPrice()
    {
        return price;
    }

std::string Disel::giveFuelName()
    {
        return fuelName;
    }
