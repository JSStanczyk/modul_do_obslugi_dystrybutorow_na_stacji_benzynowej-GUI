#ifndef DOSTAWA_H
#define DOSTAWA_H

#include <QDialog>

namespace Ui {
class Dostawa;
}

class Dostawa : public QDialog
{
    Q_OBJECT

public:
    explicit Dostawa(QWidget *parent = nullptr);
    ~Dostawa();

private:
    Ui::Dostawa *ui;
};

#endif // DOSTAWA_H
