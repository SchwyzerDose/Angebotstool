#include "angebotstool.h"
#include "ui_angebotstool.h"

Angebotstool::Angebotstool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Angebotstool)
{
    ui->setupUi(this); //Oben

    ui->setupUi(this);
    QLabel *text = new QLabel(this);
    text->setText("0");
    text->setGeometry(200,80,100,20);

    QPushButton *neuerknopf =new QPushButton ("Quit", this);
    neuerknopf->setGeometry(100,100,100,50);
    connect(neuerknopf, SIGNAL(clicked()), qApp, SLOT(quit()));

    QPushButton *neuerknopf2 =new QPushButton ("+2", this);
    neuerknopf2->setGeometry(200,100,100,50);
    connect(neuerknopf2, SIGNAL(clicked()), qApp, SLOT(abc()));
}

Angebotstool::~Angebotstool()
{
    delete ui;
}
//Hallo
