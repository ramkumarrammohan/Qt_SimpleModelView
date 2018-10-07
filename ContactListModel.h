#ifndef CONTACTLISTMODEL_H
#define CONTACTLISTMODEL_H

#include <QObject>

#include "ListModel.h"

class ContactListModel : public ListModel
{
public:
    explicit ContactListModel(QObject *parent = 0);

    void dummyData();
};

#endif // CONTACTLISTMODEL_H
