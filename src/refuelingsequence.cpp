#include "refuelingsequence.h"
#include "ui_refuelingsequence.h"

RefuelingSequence::RefuelingSequence(std::shared_ptr<Raport> a, QWidget *parent):
                                     QDialog(parent), ui(new Ui::RefuelingSequence),
                                     raport(a)
{
    ui->setupUi(this);
    distributor=std::make_shared<Distributor>();
    customer=std::make_shared<Customer>();
    raportgenerator=std::make_shared<RaportGenerator>(raport, customer);
    bill=std::make_shared<Bill>(customer);
}

void RefuelingSequence::setFuelType(std::shared_ptr<Fuel> fuelType)
{
    this->fuelType=fuelType;
    distributor->setFuelType(fuelType);
    ui->label_fuel_name->setText(QString::fromStdString(fuelType->giveFuelName()));
}

RefuelingSequence::~RefuelingSequence()
{
    delete ui;
}

void RefuelingSequence::on_pushButton_refuel_pressed()
{
    distributor->startRefueling();
}

void RefuelingSequence::on_pushButton_refuel_released()
{
    distributor->stopRefueling();
    ui->lcdNumber_refueling_status->display(distributor->giveFuelTaken());
    ui->lcdNumber_price->display(distributor->giveCalculatedFee());
}

void RefuelingSequence::on_pushButton_finish_clicked()
{
    customer->saveBill(fuelType->giveFuelName(), distributor->giveCalculatedFee(), distributor->giveFuelTaken());
    distributor->wipeAll();
    ui->lcdNumber_price->display(0);
    ui->lcdNumber_refueling_status->display(0);
    hide();
    if(!raport->isVisible())
    {
       raport->show();
       raportgenerator->setFuelType(fuelType);
       raportgenerator->getCustomerParameters();
       raportgenerator->makeReFuelingRaport();
    }
    else
    {
        raportgenerator->setFuelType(fuelType);
        raportgenerator->getCustomerParameters();
        raportgenerator->makeReFuelingRaport();
    }
    bill->getCustomerParameters();
    bill->printBill();
    bill->show();
}
