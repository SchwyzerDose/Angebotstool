#include "angebotstool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Angebotstool w;
    w.show();

    return a.exec();
}
