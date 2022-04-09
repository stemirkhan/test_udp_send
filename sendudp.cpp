#include "sendudp.h"
#include "ui_sendudp.h"

SendUDP::SendUDP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SendUDP)
{
    ui->setupUi(this);


    udp_socket = new QUdpSocket(this);
    udp_socket->bind(socket_address, socket_port);

    timer_udp_send = new QTimer(this);
    connect(timer_udp_send, SIGNAL(timeout()), this, SLOT(sending_datagrams()));
}

SendUDP::~SendUDP()
{
    delete ui;
}

void SendUDP::sending_datagrams()
{
    udp_socket->writeDatagram("test", send_address, send_port);
    package_quantity++;
    ui->label->setText("Количесвто дейтаграмм:  " + QString::number(package_quantity));
}



void SendUDP::on_start_button_clicked()
{
    timer_udp_send->start(send_udp_interval);
}


void SendUDP::on_stop_button_clicked()
{
    timer_udp_send->stop();
}

