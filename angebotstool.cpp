#include "angebotstool.h"
#include "ui_angebotstool.h"

Angebotstool::Angebotstool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Angebotstool)
{
    ui->setupUi(this); //Oben

}

Angebotstool::~Angebotstool()
{
    delete ui;
}
