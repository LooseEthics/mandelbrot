#include "mandelbrot.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mandelbrot w;
    w.show();
    return a.exec();
}
