#include "petrol.h"

Petrol::Petrol(double a, double b, std::string c) : stationFuleLevel(a), price(b),
               fuelName(c){}

void Petrol::giveFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel-howMuch;
    }

void Petrol::loadFuel(double howMuch)
    {
        stationFuleLevel=stationFuleLevel+howMuch;
    }

double Petrol::giveFuelStatus()
    {
        return stationFuleLevel;
    }

double Petrol::giveFuelPrice()
    {
        return price;
    }

std::string Petrol::giveFuelName()
    {
        return fuelName;
    }
