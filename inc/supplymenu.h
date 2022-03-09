#ifndef SUPPLYMENU_H
#define SUPPLYMENU_H

#include <QDialog>
#include <memory>
#include "petrol.h"
#include "gas.h"
#include "disel.h"
#include "supplysequence.h"

namespace Ui {
class SupplyMenu;
}

class SupplyMenu : public QDialog
{
    Q_OBJECT

public:
    explicit SupplyMenu(std::shared_ptr<SupplySequence> a=nullptr, std::shared_ptr<Petrol> b=nullptr, std::shared_ptr<Gas> d=nullptr,
                        std::shared_ptr<Disel> e=nullptr, QWidget *parent = nullptr);
    ~SupplyMenu();

private slots:
    void on_pushButton_Petrol_clicked();

    void on_pushButton_Gas_clicked();

    void on_pushButton_Disel_clicked();

private:
    Ui::SupplyMenu *ui;
    std::shared_ptr<SupplySequence> supplySequenece;
    std::shared_ptr<Petrol> petrol;
    std::shared_ptr<Gas> gas;
    std::shared_ptr<Disel> disel;
};

#endif // SUPPLYMENU_H
