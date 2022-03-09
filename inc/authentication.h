#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QDialog>
#include <memory>
#include "supplymenu.h"

namespace Ui {
class Authentication;
}

class Authentication : public QDialog
{
    Q_OBJECT

public:
    explicit Authentication(std::shared_ptr<SupplyMenu> a, QWidget *parent = nullptr);
    ~Authentication();

private slots:
    void on_Comfirm_clicked();

private:
    Ui::Authentication *ui;
    std::shared_ptr<SupplyMenu> supplyMenu;
};

#endif // AUTHENTICATION_H
