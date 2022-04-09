#include "sendudp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SendUDP w;
    QPalette darkPalette;

    darkPalette.setColor(QPalette::Window, QColor(209, 214, 228));
    qApp->setPalette(darkPalette);

    w.setFixedSize(202, 135);
    w.show();
    return a.exec();
}
