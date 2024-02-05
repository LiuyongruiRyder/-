#include "myfilesystemmodel.h"

MyFileSystemModel::MyFileSystemModel(QObject *parent):QFileSystemModel(parent)
{

}

Qt::ItemFlags MyFileSystemModel::flags(const QModelIndex &index) const
{
    //返回可编辑的信息,使文件夹不可编辑
    return Qt::ItemIsEditable | Qt::ItemIsSelectable | Qt::ItemIsEnabled;
}

int MyFileSystemModel::columnCount(const QModelIndex &parent) const
{
    return 1;
}
