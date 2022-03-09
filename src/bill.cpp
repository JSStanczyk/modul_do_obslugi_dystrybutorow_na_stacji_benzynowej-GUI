#include "bill.h"
#include "ui_bill.h"

Bill::Bill(std::shared_ptr<Customer> a, QWidget *parent) :
           QDialog(parent), ui(new Ui::Bill),
           customer(a)
{
    ui->setupUi(this);
}

void Bill::getCustomerParameters()
{
    customerFee=customer->giveBill();
    customerFuel=customer->giveFuelTaken();
    fuelName=customer->giveFuelName();
}

void Bill::printBill()
{
    ui->textBrowser_bill->append("Rodzaj paliwa: "+QString::fromStdString(fuelName));
    ui->textBrowser_bill->append("Ilość paliwa: "+QString::number(customerFuel)+" L");
    ui->textBrowser_bill->append("Należność: "+QString::number(customerFee)+" zł");
}

Bill::~Bill()
{
    delete ui;
}

void Bill::on_pushButton_pay_clicked()
{
    ui->textBrowser_bill->clear();
    hide();
}
