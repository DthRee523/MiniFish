//
// Created by l9287 on 2022/4/5.
//

#ifndef MINIFISH_NETWORK_H
#define MINIFISH_NETWORK_H

#include <QTcpSocket>
#include <QHostAddress>
#include <QByteArray>
#include <QDebug>
#include <QObject>
#include <QThread>

#include "JsonFileIO.h"

class NetWork: public QObject
{
    Q_OBJECT
public:
    explicit NetWork(QObject *parent = nullptr);

    void _connectToHost(QString ip, int port);

    ~NetWork();

public slots:
    void disConnect();

    void sendMessage(QString name, QString message);

signals:
    void connectStatus();       //connect status signal

    void recvNetworkDataSignal(MessageData messageData);

private:
    QTcpSocket *socket;         //socket
    JsonFileIO jsonFileIo;
};


#endif //MINIFISH_NETWORK_H
