#include "raportgenerator.h"
#include "fuel.h"
#include "customer.h"
//#include "supply.h"

RaportGenerator::RaportGenerator( std::shared_ptr<Raport> c, std::shared_ptr<Customer> a, std::string d,
                                int e, std::string f, std::shared_ptr<Fuel> g, int h):
                                 customer(a), /*supply(b),*/raport(c), fileName(d), i(e), fuelName(f), fuelType(g), j(h){}

void RaportGenerator::setFuelType(std::shared_ptr<Fuel> fuelType)
    {
        this->fuelType=fuelType;
    }

void RaportGenerator::getCustomerParameters()
    {
        customerFee=customer->giveBill();
        customerFuel=customer->giveFuelTaken();
        fuelName=customer->giveFuelName();
    }

void RaportGenerator::makeReFuelingRaport()
    {
        file.open(fileName, std::ios::out | std::ios::app);
        if(file.good())
        {
            file<<"\nNumer transakcji: "<<i<<"\nRodzaj paliwa: "<<fuelName<<"\nIlość paliwa: "
                        <<std::setprecision(2)<<std::fixed<<customerFuel<<" L"<<"\nNależność: "
                        <<std::setprecision(2)<<std::fixed<<customerFee<<" zł"<<"\nStan paliwa po transakcji: "
                        <<std::setprecision(2)<<std::fixed<<fuelType->giveFuelStatus()<<" L"<<std::endl;
            file.close();
        }
        raport->printRefuel(QString::fromStdString(fuelName), customerFuel, customerFee, i, fuelType->giveFuelStatus());
        i++;
    }

void RaportGenerator::makeSypplyRaport(double supplyValue)
    {
    file.open(fileName, std::ios::out | std::ios::app);
    if(file.good())
    {
        file<<"\n\t\tDostawa"<<"\n\t\t{"<<"\n\t\t\tNr: "<<j<<"\n\t\t\tTyp paliwa: "<<fuelType->giveFuelName()
            <<"\n\t\t\tIlość paliwa: "<<std::setprecision(2)<<std::fixed
            <<supplyValue<<" L"<<"\n\t\t\tStan paliwa po dostawie: "
            <<std::setprecision(2)<<std::fixed<<fuelType->giveFuelStatus()
            <<" L"<<"\n\t\t}"<<std::endl;
    }
        raport->printSupply(QString::fromStdString(fuelType->giveFuelName()), supplyValue, j, fuelType->giveFuelStatus());
        j++;
    }
