#include <QCoreApplication>

#include "Sender.h"
#include "Receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender* sender = new Sender();
    Receiver* receiver = new Receiver();

    QObject::connect(sender, &Sender::performAction, receiver, &Receiver::onActionPerformed);

    emit sender->performAction();

    return a.exec();
}
