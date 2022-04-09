#ifndef SENDUDP_H
#define SENDUDP_H

#include <QMainWindow>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class SendUDP; }
QT_END_NAMESPACE

class SendUDP : public QMainWindow
{
    Q_OBJECT

public:
    SendUDP(QWidget *parent = nullptr);
    ~SendUDP();

private:
    Ui::SendUDP *ui;
    QUdpSocket *udp_socket;
};
#endif // SENDUDP_H
