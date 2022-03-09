#ifndef REFUELINGSEQUENCE_H
#define REFUELINGSEQUENCE_H

#include <QDialog>
#include "fuel.h"
#include "customer.h"
#include "distributor.h"
#include "raport.h"
#include "raportgenerator.h"
#include "bill.h"

namespace Ui {
class RefuelingSequence;
}

class RefuelingSequence : public QDialog
{
    Q_OBJECT

public:
    explicit RefuelingSequence(std::shared_ptr<Raport> a, QWidget *parent = nullptr);
    void setFuelType(std::shared_ptr<Fuel> fuelType);
    ~RefuelingSequence();

private slots:
    void on_pushButton_refuel_pressed();

    void on_pushButton_refuel_released();

    void on_pushButton_finish_clicked();

private:
    Ui::RefuelingSequence *ui;
    std::shared_ptr<Fuel> fuelType;
    std::shared_ptr<Distributor> distributor;
    std::shared_ptr<Customer> customer;
    std::shared_ptr<Raport> raport;
    std::shared_ptr<RaportGenerator> raportgenerator;
    std::shared_ptr<Bill> bill;
};

#endif // REFUELINGSEQUENCE_H
