#ifndef ANGEBOTSTOOL_H
#define ANGEBOTSTOOL_H

#include <QMainWindow>

namespace Ui {
class Angebotstool;
}

class Angebotstool : public QMainWindow
{
    Q_OBJECT

public:
    explicit Angebotstool(QWidget *parent = nullptr);
    ~Angebotstool();

private:
    Ui::Angebotstool *ui;
};

#endif // ANGEBOTSTOOL_H
