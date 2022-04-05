//
// Created by l9287 on 2022/4/5.
//

#include "NetWork.h"

NetWork::NetWork(QObject *parent): QObject(parent)
{
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::connected, this, [=]{
        emit connectStatus();
        qDebug() << "连接成功！";
    });
}

void NetWork::_connectToHost(QString ip, int port)
{
    socket->connectToHost(QHostAddress(ip), port);//执行网络连接
}

NetWork::~NetWork() noexcept
{
}

void NetWork::disConnect()
{
    socket->close();
}


