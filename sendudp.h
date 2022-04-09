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

private slots:
    void  sending_datagrams();//отправка дейтаграм
    void on_start_button_clicked();
    void on_stop_button_clicked();

private:
    Ui::SendUDP *ui;
    QUdpSocket *udp_socket;//объект QUdpSocket

    quint16 send_port = 8000;//порт получателя
    quint16 socket_port = 7000;//порт сокета

    QHostAddress send_address = QHostAddress::LocalHost;//хост получателя
    QHostAddress socket_address = QHostAddress::LocalHost;//хост сокета

};
#endif // SENDUDP_H
