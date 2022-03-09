#ifndef SYPPLYMENU_H
#define SYPPLYMENU_H

#include <QDialog>

namespace Ui {
class SypplyMenu;
}

class SypplyMenu : public QDialog
{
    Q_OBJECT

public:
    explicit SypplyMenu(QWidget *parent = nullptr);
    ~SypplyMenu();

private:
    Ui::SypplyMenu *ui;
};

#endif // SYPPLYMENU_H
