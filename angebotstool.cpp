#include "angebotstool.h"
#include "ui_angebotstool.h"

Angebotstool::Angebotstool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Angebotstool)
{
    ui->setupUi(this); //Oben

    ui->setupUi(this);
    text = new QLabel(this);
    text->setText("0");
    text->setGeometry(200,80,100,20);

    neuerknopf =new QPushButton ("Quit", this);
    neuerknopf->setGeometry(100,100,100,50);
    connect(neuerknopf, SIGNAL(clicked()), qApp, SLOT(quit()));

   neuerknopf2 =new QPushButton ("+1", this);
    neuerknopf2->setGeometry(200,100,100,50);
    connect(neuerknopf2, SIGNAL(clicked()), this, SLOT(abc()));


}

Angebotstool::~Angebotstool()
{
    delete ui;
}
//Hallo
 void Angebotstool::abc(void)
 {

counter++;

QString numberText = QString("%1").arg(counter);
        text->setText(numberText);
        qDebug() << counter << endl;

 }
