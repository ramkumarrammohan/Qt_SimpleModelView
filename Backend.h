#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class ContactListModel;

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = 0);

    Q_PROPERTY(QObject* contactList READ contactList)

    QObject* contactList()
    {
        return (QObject*)m_contactList;
    }

//    void fillItems();

signals:

public slots:

private:
    void createMembers();

    ContactListModel *m_contactList;
};

#endif // BACKEND_H
