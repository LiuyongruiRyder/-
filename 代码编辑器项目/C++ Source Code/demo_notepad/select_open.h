#ifndef SELECT_OPEN_H
#define SELECT_OPEN_H

#include <QWidget>
#include <QFileDialog>
#include <QDebug>
#include "mainwindow.h"

namespace Ui {
class Select_Open;
}

class Select_Open : public QWidget
{
    Q_OBJECT

public:
    explicit Select_Open(QWidget *parent = nullptr);
    ~Select_Open();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Select_Open *ui;
};

#endif // SELECT_OPEN_H
