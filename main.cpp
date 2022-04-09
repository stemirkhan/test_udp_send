#include "sendudp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SendUDP w;
    w.show();
    return a.exec();
}
