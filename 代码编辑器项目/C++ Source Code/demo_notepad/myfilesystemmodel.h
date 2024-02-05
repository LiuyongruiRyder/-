#ifndef MYFILESYSTEMMODEL_H
#define MYFILESYSTEMMODEL_H

#include <QObject>
#include <QFileSystemModel>

class MyFileSystemModel : public QFileSystemModel
{
    Q_OBJECT
public:
    MyFileSystemModel(QObject *parent = nullptr);

protected:
    Qt::ItemFlags flags(const QModelIndex &index) const override;

    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
};

#endif // MYFILESYSTEMMODEL_H
