#include "select_open.h"
#include "ui_select_open.h"

Select_Open::Select_Open(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Select_Open)
{
    ui->setupUi(this);
}

Select_Open::~Select_Open()
{
    delete ui;
}



void Select_Open::on_pushButton_3_clicked()
{
    //点击事件，获取文件夹的位置
    QString filename = QFileDialog::getExistingDirectory();
    ui->lineEdit->setText(filename);
}

void Select_Open::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void Select_Open::on_pushButton_clicked()
{
    MainWindow *mainwindow = new MainWindow(nullptr,ui->lineEdit->text());
    mainwindow->show();
    mainwindow->setWindowState(Qt::WindowMaximized);
    this->close();
}
