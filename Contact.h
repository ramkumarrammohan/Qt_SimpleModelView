#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class Contact : public QObject
{
    Q_OBJECT
public:
    explicit Contact(QObject *parent = 0);
    explicit Contact(QVariant data);

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)

    QString name() const
    {
        return m_name;
    }
    QString phoneNumber() const
    {
        return m_phoneNumber;
    }

    void setName(QString name);
    void setPhoneNumber(QString phoneNumber);

signals:
    void nameChanged(QString name);
    void phoneNumberChanged(QString phoneNumber);

private:
    QString m_name;
    QString m_phoneNumber;
};

#endif // CONTACT_H
