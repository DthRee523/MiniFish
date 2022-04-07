//
// Created by l9287 on 2022/4/5.
//

#include "NetWork.h"

NetWork::NetWork(QObject *parent): QObject(parent)
{
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::connected, this, [=]{
        emit connectStatus();
    });

    connect(socket, &QTcpSocket::readyRead, this, [=]{
        QByteArray recvData = socket->readAll();
        emit recvNetworkDataSignal(jsonFileIo.recvMessage(recvData));
    });
}

void NetWork::_connectToHost(QString ip, int port)
{
    socket->connectToHost(QHostAddress(ip), port);//执行网络连接
    qDebug() << "子线程线程ID：" << QThread::currentThreadId();
}

NetWork::~NetWork()
{
    socket->deleteLater();
}

void NetWork::disConnect()
{
    socket->close();
}

void NetWork::sendMessage(QString name, QString message)
{
    socket->write(jsonFileIo.sendMessage(name, message));
}


