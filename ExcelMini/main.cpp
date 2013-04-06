#include "appmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppMainWindow w;
    w.show();
    //comentario de prueba para Git
    return a.exec();
}
