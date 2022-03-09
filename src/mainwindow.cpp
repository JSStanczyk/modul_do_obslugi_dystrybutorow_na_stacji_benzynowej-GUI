#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::alocateData()
{
    petrol=std::make_shared<Petrol>();
    gas=std::make_shared<Gas>();
    disel=std::make_shared<Disel>();
    raport=std::make_shared<Raport>();
    refuelingSequence=std::make_shared<RefuelingSequence>(raport);
    refuel=std::make_shared<Refuel>(refuelingSequence, petrol, gas, disel);
    supplySequence=std::make_shared<SupplySequence>(raport);
    supplyMenu=std::make_shared<SupplyMenu>(supplySequence, petrol, gas, disel);
    authentication=std::make_shared<Authentication>(supplyMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_refuel_clicked()
{
    refuel->show();
}

void MainWindow::on_resource_clicked()
{
    authentication->show();
}
