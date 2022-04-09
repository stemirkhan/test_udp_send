#ifndef SENDUDP_H
#define SENDUDP_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTimer>

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
    void on_start_button_clicked();//кнопка старт
    void on_stop_button_clicked();//кнопка стоп

private:
    Ui::SendUDP *ui;
    QUdpSocket *udp_socket;//объект QUdpSocket

    quint16 send_port = 8000;//порт получателя
    quint16 socket_port = 7000;//порт сокета

    QHostAddress send_address = QHostAddress::LocalHost;//хост получателя
    QHostAddress socket_address = QHostAddress::LocalHost;//хост сокета

    QTimer *timer_udp_send;
    int package_quantity = 0;
    int send_udp_interval = 1000;//интервал отправки
};
#endif // SENDUDP_H
