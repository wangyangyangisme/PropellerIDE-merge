#include "portmonitor.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    PortMonitor pm;

    return app.exec();
}
