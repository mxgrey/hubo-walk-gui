#include <QtGui/QApplication>
#include "walkwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WalkWindow w;
    w.show();
    
    return a.exec();
}
