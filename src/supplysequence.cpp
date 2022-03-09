#include "supplysequence.h"
#include "ui_supplysequence.h"

SupplySequence::SupplySequence(std::shared_ptr<Raport> a, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SupplySequence), raport(a)
{
    ui->setupUi(this);
    raportGenerator=std::make_shared<RaportGenerator>(raport);
}

void SupplySequence::setFuelType(std::shared_ptr<Fuel> fuelType)
{
    this->fuelType=fuelType;
    ui->label_fuelName->setText(QString::fromStdString(fuelType->giveFuelName()));
}

SupplySequence::~SupplySequence()
{
    delete ui;
}

void SupplySequence::on_pushButton_confirm_clicked()
{
    int tmp=ui->spinBox_fuelVolume->value();
    if((tmp+fuelType->giveFuelStatus())<=1000)
    {
        fuelType->loadFuel(tmp);
        ui->spinBox_fuelVolume->setValue(0);
        if(!raport->isVisible())
        {
           raport->show();
           raportGenerator->setFuelType(fuelType);
           raportGenerator->makeSypplyRaport(tmp);
        }
        else
        {
            raportGenerator->setFuelType(fuelType);
            raportGenerator->makeSypplyRaport(tmp);
        }
        hide();
    }
    else
    {
        QMessageBox::warning(this,"Dostawa nie została zrealizowana","Wybrana ilość przepełniłaby zbioniki stacji");
        ui->spinBox_fuelVolume->setValue(0);
    }
}
