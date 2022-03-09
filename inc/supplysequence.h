#ifndef SUPPLYSEQUENCE_H
#define SUPPLYSEQUENCE_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include "fuel.h"
#include "raport.h"
#include "raportgenerator.h"

namespace Ui {
class SupplySequence;
}

class SupplySequence : public QDialog
{
    Q_OBJECT

public:
    explicit SupplySequence(std::shared_ptr<Raport> a=nullptr, QWidget *parent = nullptr);
    void setFuelType(std::shared_ptr<Fuel> fuelType);
    ~SupplySequence();

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::SupplySequence *ui;
    std::shared_ptr<Fuel> fuelType;
    std::shared_ptr<Raport> raport;
    std::shared_ptr<RaportGenerator> raportGenerator;
};

#endif // SUPPLYSEQUENCE_H
