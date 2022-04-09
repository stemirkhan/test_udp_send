#include "sendudp.h"
#include "ui_sendudp.h"

SendUDP::SendUDP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SendUDP)
{
    ui->setupUi(this);


    udp_socket = new QUdpSocket(this);
    udp_socket->bind(socket_address, socket_port);
}

SendUDP::~SendUDP()
{
    delete ui;
}

void SendUDP::sending_datagrams()
{
    udp_socket->writeDatagram("test", send_address, send_port);
}



void SendUDP::on_start_button_clicked()
{

}


void SendUDP::on_stop_button_clicked()
{

}

