#ifndef RAPORTGENERATOR_H
#define RAPORTGENERATOR_H


#include "customer.h"
#include "fuel.h"
#include "raport.h"
//#include "supply.hpp"
#include <memory>
#include <QString>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

class RaportGenerator
{
private:
    std::shared_ptr<Fuel> fuelType;
    std::shared_ptr<Customer> customer;
    std::shared_ptr<Raport> raport;
    //std::shared_ptr<Supply> supply;
    std::fstream file;
    std::string fileName, fuelName;
    double customerFee, customerFuel;
    int i,j;

public:
    RaportGenerator(std::shared_ptr<Raport> c=nullptr, std::shared_ptr<Customer> a=nullptr,
                    std::string d="C:/Users/wikos/Desktop/raport.txt", int e=1, std::string f="Brak", std::shared_ptr<Fuel> g=nullptr, int h=1);
    void setFuelType(std::shared_ptr<Fuel> fuelType=nullptr);
    void getCustomerParameters();
    void makeReFuelingRaport();
    void makeSypplyRaport(double supplyValue);

};

#endif // RAPORTGENERATOR_H
