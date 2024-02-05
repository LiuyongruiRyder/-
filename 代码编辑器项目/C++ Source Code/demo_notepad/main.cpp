#include "mainwindow.h"
#include "dialoglogin.h"
#include <QApplication>
#include <QTextCodec>
#include "select_open.h"

int main(int argc, char *argv[])
{
    //解决文件流中文乱码问题
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);




    DialogLogin *dlg = new DialogLogin;
    if(dlg->exec()==QDialog::Accepted){
          Select_Open S;
          S.show();
//        MainWindow w;
//        w.show();

        return a.exec();
    }

}
