#include "dst.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DST w;
    w.show();
    return a.exec();
}
