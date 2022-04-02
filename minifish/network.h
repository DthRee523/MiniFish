/******************************************************************************
 * Copyright 2022 DthRee.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       network.h
 * @brief      NetWork Class
 *
 * @author     DthRee<liuhuan@dthree.cn>
 * @date       2022/04/03
 * @history
 *****************************************************************************/
#ifndef NETWORK_H
#define NETWORK_H

//QT Header
#include <QObject>
#include <QHostAddress>
#include <QTcpSocket>
#include <QThread>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

//C++ Header
#include <string>

class NetWork : public QObject
{
    Q_OBJECT
public:
    explicit NetWork(QObject *parent = nullptr);

signals:
    void connectStatus(bool status);    //send connection status

private:
    std::string HostIP;
    QTcpSocket *socket;
    const int Port = 4426;
};

#endif // NETWORK_H
