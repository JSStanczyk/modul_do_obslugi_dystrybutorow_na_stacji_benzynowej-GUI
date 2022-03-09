#include "raport.h"
#include "ui_raport.h"

Raport::Raport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Raport)
{
    ui->setupUi(this);
}

void Raport::printRefuel(QString fuelName, double customerFuel, double customerFee, int i, double fuelStatus)
{
    ui->textBrowser->append("Numer transakcji: "+QString::number(i));
    ui->textBrowser->append("Rodzaj paliwa: "+fuelName);
    ui->textBrowser->append("Ilość paliwa: "+QString::number(customerFuel)+" L");
    ui->textBrowser->append("Należność: "+QString::number(customerFee)+" zł");
    ui->textBrowser->append("Stan paliwa po transakcji: "+QString::number(fuelStatus)+" L\n\n");
}

void Raport::printSupply(QString fuelName, double supplyValue, int i, double fuelStatus)
{
    ui->textBrowser->append("\tDostawa");
    ui->textBrowser->append("\t{");
    ui->textBrowser->append("\t\tNr "+QString::number(i));
    ui->textBrowser->append("\t\tRodzaj paliwa: "+fuelName);
    ui->textBrowser->append("\t\tIlość paliwa: "+QString::number(supplyValue)+" L");
    ui->textBrowser->append("\t\tStan paliwa po dostawie: "+QString::number(fuelStatus)+" L");
    ui->textBrowser->append("\t}\n\n");
}

Raport::~Raport()
{
    delete ui;
}
