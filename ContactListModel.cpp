#include "ContactListModel.h"
#include "Contact.h"

#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

ContactListModel::ContactListModel(QObject *parent) : ListModel(parent)
{
    dummyData();
}

void ContactListModel::dummyData()
{
    QFile file("/home/ramkumar/SimleListModel/sample.json");
    file.open(QIODevice::ReadOnly);
    QJsonDocument jsonDocument = QJsonDocument::fromJson(file.readAll());
    file.close();

    QVariantList dataList = jsonDocument.object().value("data").toArray().toVariantList();
    foreach (QVariant variant, dataList) {
        Contact *newCont = new Contact(variant);
        m_items << newCont;
    }
}
