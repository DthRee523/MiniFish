#include "network.h"

NetWork::NetWork(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);
}
