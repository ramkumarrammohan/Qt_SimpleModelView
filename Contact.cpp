#include "Contact.h"

#include <QVariant>
#include <QDebug>

Contact::Contact(QObject *parent) : QObject(parent)
{

}

Contact::Contact(QVariant data)
{
    qDebug() << "obj: " << data.value<QVariantMap>()["name"].toString();
    m_name = data.value<QVariantMap>()["name"].toString();
    m_phoneNumber = data.value<QVariantMap>()["phone"].toString();
}

void Contact::setName(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
}

void Contact::setPhoneNumber(QString phoneNumber)
{
    if (m_phoneNumber == phoneNumber)
        return;

    m_phoneNumber = phoneNumber;
}
