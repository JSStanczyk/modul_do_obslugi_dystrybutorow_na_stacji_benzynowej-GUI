#include "supplymenu.h"
#include "ui_supplymenu.h"

SupplyMenu::SupplyMenu(std::shared_ptr<SupplySequence> a, std::shared_ptr<Petrol> b, std::shared_ptr<Gas> d,
                       std::shared_ptr<Disel> e, QWidget *parent) :
                       QDialog(parent), ui(new Ui::SupplyMenu),supplySequenece(a) ,petrol(b),
                       gas(d), disel(e)
{
    ui->setupUi(this);
}

SupplyMenu::~SupplyMenu()
{
    delete ui;
}

void SupplyMenu::on_pushButton_Petrol_clicked()
{
    hide();
    supplySequenece->setFuelType(petrol);
    supplySequenece->show();
}

void SupplyMenu::on_pushButton_Gas_clicked()
{
    hide();
    supplySequenece->setFuelType(gas);
    supplySequenece->show();
}

void SupplyMenu::on_pushButton_Disel_clicked()
{
    hide();
    supplySequenece->setFuelType(disel);
    supplySequenece->show();
}
