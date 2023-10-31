#include "receiver.h"
#include "sender.h"
#include <QCoreApplication>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Sender *sender = new Sender();
  Receiver *receiver = new Receiver();

  QObject::connect(sender, &Sender::actionPerformed, receiver,
                   &Receiver::on_actionPerformed);

  qInfo() << "Emitting signal from: " << sender;
  emit sender->actionPerformed();

  return a.exec();
}
