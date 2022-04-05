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

class NetWork: public QObject
{
    Q_OBJECT
public:
    explicit NetWork(QObject *parent = nullptr);

    void _connectToHost(QString ip, int port);

    ~NetWork();

public slots:
    void disConnect();

signals:
    void connectStatus();       //connect status signal

private:
    QTcpSocket *socket;         //socket
};


#endif //MINIFISH_NETWORK_H
