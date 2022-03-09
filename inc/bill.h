#ifndef BILL_H
#define BILL_H

#include <QDialog>
#include <memory>
#include <string>
#include <QString>
#include "customer.h"


namespace Ui {
class Bill;
}

class Bill : public QDialog
{
    Q_OBJECT

public:
    explicit Bill(std::shared_ptr<Customer> a, QWidget *parent = nullptr);
    void getCustomerParameters();
    void printBill();
    ~Bill();

private slots:
    void on_pushButton_pay_clicked();

private:
    Ui::Bill *ui;
    std::shared_ptr<Customer> customer;
    double customerFee, customerFuel;
    std::string fuelName;
};

#endif // BILL_H
