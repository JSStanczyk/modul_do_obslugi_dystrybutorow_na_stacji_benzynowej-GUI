#ifndef REFUEL_H
#define REFUEL_H

#include <QDialog>
#include <memory>
#include "refuelingsequence.h"
#include "gas.h"
#include "petrol.h"
#include "disel.h"

namespace Ui {
class Refuel;
}

class Refuel : public QDialog
{
    Q_OBJECT

public:
    explicit Refuel(std::shared_ptr<RefuelingSequence> a=nullptr,
                    std::shared_ptr<Petrol> b=nullptr, std::shared_ptr<Gas> d=nullptr,
                    std::shared_ptr<Disel> e=nullptr, QWidget *parent = nullptr);
    ~Refuel();

private slots:
    void on_Petrol_clicked();

    void on_Gas_clicked();

    void on_Disel_clicked();

private:
    Ui::Refuel *ui;
    std::shared_ptr<RefuelingSequence> refuelingSequnce;
    std::shared_ptr<Petrol> petrol;
    std::shared_ptr<Gas> gas;
    std::shared_ptr<Disel> disel;

};

#endif // REFUEL_H
