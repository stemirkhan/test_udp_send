#include "sendudp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SendUDP w;
    QPalette window_palette;

    window_palette.setColor(QPalette::Window, QColor(209, 214, 228));
    qApp->setPalette(window_palette);

    w.setFixedSize(202, 135);
    w.show();
    return a.exec();
}
