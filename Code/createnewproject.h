#ifndef CREATENEWPROJECT_H
#define CREATENEWPROJECT_H

#include <QAbstractListModel>

class CreateNewProject : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit CreateNewProject(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // CREATENEWPROJECT_H
