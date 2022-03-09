#ifndef TANKOWANIE_H
#define TANKOWANIE_H

#include <QDialog>

namespace Ui {
class Tankowanie;
}

class Tankowanie : public QDialog
{
    Q_OBJECT

public:
    explicit Tankowanie(QWidget *parent = nullptr);
    ~Tankowanie();

private:
    Ui::Tankowanie *ui;
};

#endif // TANKOWANIE_H
