#include "ListModel.h"

ListModel::ListModel(QObject *parent): QAbstractListModel(parent)
{

}

int ListModel::rowCount(const QModelIndex &parent) const
{
    return parent.isValid() ? 0 : m_items.size();
}

QVariant ListModel::data(const QModelIndex &index, int role) const
{
    if ((index.row() >= 0 || index.row() < m_items.count()) &&
        role == ItemRole) {
        return QVariant::fromValue(m_items[index.row()]);
    }
    return QVariant();
}

QHash<int, QByteArray> ListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ItemRole] = "item";
    return roles;
}
