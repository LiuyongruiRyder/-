#include "myfindui.h"
#include "ui_myfindui.h"
#include <QDebug>
//用来显示查找与替换的UI界面
Myfindui::Myfindui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Myfindui)
{
    ui->setupUi(this);
    Init();
}


Myfindui::~Myfindui()
{
    delete ui;
}

void Myfindui::settext(QStringList text)
{
    //传入文本的每一行的list
    list = text;
}

void Myfindui::Init()
{   //初始化字体大小
    QLineEdit *edit1 = ui->textEdit;
    QLineEdit *edit2 = ui->textEdit_2;
    QFont font = edit1->font();
    font.setPointSize(12);
    edit1->setFont(font);
    font = edit2->font();
    font.setPointSize(12);
    edit2->setFont(font);

}

void Myfindui::on_pushButton_clicked()
{
    //查找下一处的槽函数
    QString target = ui->textEdit->text();

    //判断是否勾选
    if(ui->checkBox->isChecked() && ui->checkBox_2->isChecked()){
        sendData1(target);
    }else if(!ui->checkBox->isChecked() && ui->checkBox_2->isChecked()){
        sendData2(target);
    }else if(ui->checkBox->isChecked() && !ui->checkBox_2->isChecked()){
        sendData3(target);
    }else{
        sendData(target);
    }


}

void Myfindui::on_pushButton_2_clicked()
{
    //查找上一处的槽函数
    QString target = ui->textEdit->text();
    //判断是否勾选
    if(ui->checkBox->isChecked() && ui->checkBox_2->isChecked()){
        sendDataup1(target);
    }else if(!ui->checkBox->isChecked() && ui->checkBox_2->isChecked()){
        sendDataup2(target);
    }else if(ui->checkBox->isChecked() && !ui->checkBox_2->isChecked()){
        sendDataup3(target);
    }else{
        sendDataup(target);
    }
}

void Myfindui::on_pushButton_4_clicked()
{
    //替换一个的操作,就是替换第一个
    //替换必须严格按照大小写和全词匹配来替换写来替换
    QString before_replace = ui->textEdit->text();
    QString atfer_replace = ui->textEdit_2->text();
    send_replace_Data(before_replace,atfer_replace);
}

void Myfindui::on_pushButton_3_clicked()
{
    //全部替换
    QString before_replace = ui->textEdit->text();
    QString atfer_replace = ui->textEdit_2->text();
    send_replace_all(before_replace,atfer_replace);

}
