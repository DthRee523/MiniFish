#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QHostAddress>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>

class NetWork : public QObject
{
    Q_OBJECT
public:
    explicit NetWork(QObject *parent = nullptr);

signals:

};

#endif // NETWORK_H
