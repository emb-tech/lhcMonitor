#include "lhcconnections.h"

lhcConnections::lhcConnections(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);
}

bool lhcConnections::connectToLHC(QString host, int port)
{
    socket->connectToHost(host, port);
    return socket->waitForConnected();
}
