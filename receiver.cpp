#include "receiver.h"

Receiver::Receiver(QObject *parent)
    : QObject{parent}
{

}

void Receiver::on_actionPerformed()
{
    qInfo() << "Executing slot from: " << this;
}
