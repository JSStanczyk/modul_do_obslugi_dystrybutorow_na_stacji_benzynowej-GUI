#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H
#include "fuel.h"
#include <chrono>
#include <memory>


class Distributor
{
private:
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point stop;
    double reFuelingTime, reFuelingSpeed, stationFuelLevel, fuelTaken, calculatedFee;
    std::shared_ptr<Fuel> fuelType;

public:
    Distributor(std::shared_ptr<Fuel> a=nullptr, double b=0, double c=1.35, double d=0, double e=0, double f=0);
    void setFuelType(std::shared_ptr<Fuel> fuelType_);
    void getStationFuelLevel();
    float giveStationFuelLevel();
    void startRefueling();
    void stopRefueling();
    void wipeAll();
    double giveFuelTaken();
    double giveCalculatedFee();


};

#endif // DISTRIBUTOR_H
