#include "refuel.h"
#include "ui_refuel.h"

Refuel::Refuel(std::shared_ptr<RefuelingSequence> a,
               std::shared_ptr<Petrol> b, std::shared_ptr<Gas> d,
               std::shared_ptr<Disel> e, QWidget *parent):
               QDialog(parent), ui(new Ui::Refuel), refuelingSequnce(a),
               petrol(b), gas(d), disel(e)
{
    ui->setupUi(this);
}

Refuel::~Refuel()
{
    delete ui;
}

void Refuel::on_Petrol_clicked()
{
    hide();
    refuelingSequnce->setFuelType(petrol);
    refuelingSequnce->show();
}

void Refuel::on_Gas_clicked()
{
    hide();
    refuelingSequnce->setFuelType(gas);
    refuelingSequnce->show();
}

void Refuel::on_Disel_clicked()
{
    hide();
    refuelingSequnce->setFuelType(disel);
    refuelingSequnce->show();
}
