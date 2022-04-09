#include "sendudp.h"
#include "ui_sendudp.h"

SendUDP::SendUDP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SendUDP)
{
    ui->setupUi(this);
}

SendUDP::~SendUDP()
{
    delete ui;
}

