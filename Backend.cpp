#include "Backend.h"
#include "ContactListModel.h"

Backend::Backend(QObject *parent) : QObject(parent)
{
    createMembers();
}

void Backend::createMembers()
{
    m_contactList = new ContactListModel();
}

//void Backend::fillItems()
//{

//}
