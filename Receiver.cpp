#include "Receiver.h"

Receiver::Receiver(QObject *parent)
    : QObject{parent}
{}

void Receiver::onActionPerformed()
{
    qDebug() << Q_FUNC_INFO << "Executed the slot";
}
