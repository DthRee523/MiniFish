//
// Created by l9287 on 2022/4/5.
//

#include "JsonFileIO.h"

JsonFileIO::JsonFileIO()
{

}

JsonFileIO::~JsonFileIO()
{

}

/**
 * 接收数据
 * @param recvData
 * @return
 */
MessageData JsonFileIO::recvMessage(QByteArray recvData)
{
    QJsonDocument jsonDocument;
    MessageData messageData;

    jsonDocument = QJsonDocument::fromJson(recvData);
    QJsonObject jsonObject = jsonDocument.object();
    messageData.SeverName = jsonObject.value("ServerName").toString();
    messageData.UserName = jsonObject.value("UserName").toString();
    messageData.Message = jsonObject.value("Message").toString();
    return messageData;
}

/**
 * 发送数据
 * @param name
 * @param message
 * @return
 */
QByteArray JsonFileIO::sendMessage(QString name, QString message)
{
    QJsonObject jsonObject;
    jsonObject.insert("UserName", name);
    jsonObject.insert("Message", message);
    QJsonDocument jsonDocument(jsonObject);
    return jsonDocument.toJson();
}