#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "refuel.h"
#include "authentication.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void alocateData();
    ~MainWindow();

private slots:
    void on_refuel_clicked();
    void on_resource_clicked();

private:
    Ui::MainWindow *ui;
    std::shared_ptr<Customer> customer;
    std::shared_ptr<Distributor> distributor;
    std::shared_ptr<Refuel> refuel;
    std::shared_ptr<SupplyMenu> supplyMenu;
    std::shared_ptr<Authentication> authentication;
    std::shared_ptr<RefuelingSequence> refuelingSequence;
    std::shared_ptr<Petrol> petrol;
    std::shared_ptr<Gas> gas;
    std::shared_ptr<Disel> disel;
    std::shared_ptr<Raport> raport;
    std::shared_ptr<SupplySequence> supplySequence;
};
#endif // MAINWINDOW_H
