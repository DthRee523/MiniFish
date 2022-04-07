#ifndef MINIFISH_JSONFILEIO_H
#define MINIFISH_JSONFILEIO_H

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QByteArray>
#include <QString>

struct MessageData
{
    QString SeverName;
    QString UserName;
    QString Message;
};

class JsonFileIO {
public:
    JsonFileIO();

    QByteArray sendMessage(QString name, QString message);

    MessageData recvMessage(QByteArray recvData);

    ~JsonFileIO();

};


#endif //MINIFISH_JSONFILEIO_H
