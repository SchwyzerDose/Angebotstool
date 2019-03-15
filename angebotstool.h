#ifndef ANGEBOTSTOOL_H
#define ANGEBOTSTOOL_H

#include <QMainWindow>


#include<QTextEdit>
#include<QLineEdit>

#include<QVBoxLayout>
#include <QDebug>
#include <QWidget>
#include <QLabel>
#include <QPushButton>

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
    int counter=0;
    QLabel *text;
    QPushButton *neuerknopf;
    QPushButton *neuerknopf2;


private slots:
    void abc(void);
};

#endif // ANGEBOTSTOOL_H
