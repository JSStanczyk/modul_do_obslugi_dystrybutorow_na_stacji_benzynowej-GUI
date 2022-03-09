#ifndef RAPORT_H
#define RAPORT_H

#include <QDialog>
#include <QString>

namespace Ui {
class Raport;
}

class Raport : public QDialog
{
    Q_OBJECT

public:
    explicit Raport(QWidget *parent = nullptr);
    void printRefuel(QString fuelName, double customerFuel, double customerFee, int i, double fuelStatus);
    void printSupply(QString fuelName, double supplyValue, int i, double fuelStatus);
    ~Raport();

private:
    Ui::Raport *ui;
};

#endif // RAPORT_H
