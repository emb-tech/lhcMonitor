#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include "lhcconnections.h"

int main(int argc, char *argv[])
{
    QObject parentObject;

    lhcConnections* lhcConnection = new lhcConnections();
    lhcConnection->connectToLHC(QString("128.142.140.33"), 8080);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
