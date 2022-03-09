#include <QMessageBox>
#include "authentication.h"
#include "ui_authentication.h"

Authentication::Authentication(std::shared_ptr<SupplyMenu> a, QWidget *parent) :
    QDialog(parent), ui(new Ui::Authentication), supplyMenu(a)
{
    ui->setupUi(this);
}

Authentication::~Authentication()
{
    delete ui;
}

void Authentication::on_Comfirm_clicked()
{
    QString password=ui->lineEdit_password->text();
    if(password=="1234")
    {
        hide();
        ui->lineEdit_password->clear();
        supplyMenu->show();
    }
    else
    {
        QMessageBox::warning(this,"Logowanie nie powiodło się","Podane hasło jest nieprawidłowe");
        ui->lineEdit_password->clear();
    }
}
