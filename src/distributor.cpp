#include "distributor.h"

#include <chrono>
#include <iostream>
#include <memory>


Distributor::Distributor(std::shared_ptr<Fuel> a, double b,
                         double c, double d, double e, double f):fuelType(a), reFuelingTime(b),
                         reFuelingSpeed(c), stationFuelLevel(d), fuelTaken(e), calculatedFee(f) {}

void Distributor::setFuelType(std::shared_ptr<Fuel> fuelType)
    {
        this->fuelType=fuelType;
    }

void Distributor::getStationFuelLevel()
    {
        stationFuelLevel=fuelType->giveFuelStatus();
    }

float Distributor::giveStationFuelLevel()
    {
        return stationFuelLevel;
    }

void Distributor::startRefueling()
    {
        start = std::chrono::steady_clock::now();
    }

void Distributor::stopRefueling()
    {
        std::chrono::duration<double> reFuelingTime=std::chrono::steady_clock::now()-start;
        fuelTaken+=reFuelingTime.count()*reFuelingSpeed;
        calculatedFee=(fuelTaken*fuelType->giveFuelPrice());
    }

void Distributor::wipeAll()
    {
        fuelType->giveFuel(fuelTaken);
        fuelTaken=0;
        calculatedFee=0;
    }

double Distributor::giveFuelTaken()
    {
        return fuelTaken;
    }

double Distributor::giveCalculatedFee()
    {
        return calculatedFee;
    }
