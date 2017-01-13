#ifndef LHCCONNECTIONS_H
#define LHCCONNECTIONS_H

#include <QObject>
#include <QtCore>
#include <QtNetwork/QTcpSocket>

class lhcConnections : public QObject
{
    Q_OBJECT
public:
    explicit lhcConnections(QObject *parent = 0);
    bool lhcConnections::connectToLHC(QString host, int port);
private:
    QTcpSocket *socket;

};

#endif // LHCCONNECTIONS_H
