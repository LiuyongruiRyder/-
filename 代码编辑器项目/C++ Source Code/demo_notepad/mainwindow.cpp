#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>
#include <QMessageBox>

#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif
#include <QDateTime>
#include<QPrinter>
#endif
#endif


MainWindow::MainWindow(QWidget *parent,QString path)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<int> sizeList;
    sizeList<<1000<<4000; //设置spacer的最小值和最大值尺寸
    ui->splitter->setSizes(sizeList);


    //this->setCentralWidget(ui->tabWidget);

    //展示文件树
    URL=path;
    initTreeView();

#if !QT_CONFIG(printer)
    ui->print->setEnable(false); 
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event) //窗口关闭时候的函数重写
{
    if(ui->tabWidget->count()>0){
        QMessageBox::StandardButton btn =QMessageBox::question(this,tr("警告"),tr("有未保存的文件，确定要关闭吗?")
                              ,QMessageBox::Yes|QMessageBox::No);
        if(btn == QMessageBox::Yes){
            event->accept();
        }else{
            event->ignore();
        }
    }
}





void MainWindow::on_new_file_triggered() //新建文件的槽（已更新）
{
    MyTestEdit *mytestedit = new MyTestEdit(this);
    //创建一个tab并显示
    QString title = "NewTab";
    ui->tabWidget->addTab(mytestedit,title);
}

void MainWindow::on_open_file_triggered() //打开文件(以更新)
{
    qDebug()<<URL;
    QString fileName = QFileDialog::getOpenFileName(this,"打开文件",URL);
    QFile file(fileName);
    qDebug()<<fileName;
    if(!file.open(QIODevice::ReadOnly|QFile::Text)){ //只读文件不能打开
        QMessageBox::warning(this,tr("警告"),tr("无法打开此文件")+file.errorString());
        return;
    }
    currentFile = fileName; //将此时的文件置为此文件名
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll(); //读入文件并显示
    //qDebug()<<text<<endl;
    MyTestEdit *mytestedit = new MyTestEdit(this);
    mytestedit->settext(text);

    ui->tabWidget->addTab(mytestedit,currentFile);
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

    //ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_save_file_triggered()//保存文件(已更新)
{

    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        if(mytestedit->saveFile(URL)){ //调用方法保存成功换名字,保存功能封装在mytestedit里面
            QString new_name = mytestedit->getfilename();
            ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),new_name);
        }
    }

}

void MainWindow::on_save_as_triggered()//另存为（已更新）
{


    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        if(mytestedit->saveas(URL)){ //调用方法保存成功换名字,保存功能封装在mytestedit里面
            QString new_name = mytestedit->getfilename();
            ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),new_name);
        }
    }

}

void MainWindow::on_paste_triggered() //粘贴
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->paste();
    }
}

void MainWindow::on_cut_triggered() //剪切
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->cut();
    }
}

void MainWindow::on_copy_triggered() //复制的功能（这三个已经更新）
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->copy();
    }

}

//斜体加粗下划线不需要直接删了

void MainWindow::on_font_triggered() //设置字体
{    //智能设置字体大小，需要优化，自己编写一个弹窗。
    bool fonSelected;
    QFont font = QFontDialog::getFont(&fonSelected,QFont("Consolas",14),this);
    if(fonSelected){

        MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
        if(mytestedit){
            qDebug()<<"Enter";
            mytestedit->setfont(font);
        }

    }

}

void MainWindow::on_about_triggered() //关于
{
    QMessageBox::about(this,tr("我的notepad"),tr("字体设置的地方有些bug未修复，无法设置字体样式"));
}

void MainWindow::on_undo_triggered() //撤销
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    mytestedit->undo();
}

void MainWindow::on_redo_triggered()//取消撤消
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    mytestedit->redo();
}

void MainWindow::on_exit_triggered() //退出
{
    QCoreApplication::exit();
}

void MainWindow::on_print_triggered() //打印的功能（已经更新）
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev,this);
    if(dialog.exec()==QDialog::Rejected)
        return;
#endif
    mytestedit->print(printDev);
#endif
    }
}

//关闭一个tab的时候给提示
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    //判断是否保存
    if(!mytestedit->checkSaved()){
        //光闭标签
        ui->tabWidget->removeTab(index);
        delete mytestedit;
    }else{
        QMessageBox::StandardButton btn = QMessageBox::question(this,tr("警告"),
                                                                tr("您还没保存文档！是否保存?"),
                                                                QMessageBox::Save|QMessageBox::Cancel|QMessageBox::No);

        if(btn == QMessageBox::Save){
            if(mytestedit){
                if(mytestedit->saveFile(URL)){ //调用方法保存成功换名字,保存功能封装在mytestedit里面
                    QString new_name = mytestedit->getfilename();
                    ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),new_name);
                }
            }
            return;
        }else if(btn==QMessageBox::Cancel){
            return;
        }
        //光闭标签
        ui->tabWidget->removeTab(index);
        delete mytestedit;

    }
}

void MainWindow::initTreeView()
{
    mFileSystemModel = new MyFileSystemModel();
    //设置要展示的目录
    qDebug()<<URL<<endl;
    mFileSystemModel->setRootPath(URL);
    ui->treeView->setModel(mFileSystemModel);
    ui->treeView->setRootIndex(mFileSystemModel->index(URL));

    //隐藏header
    ui->treeView->setHeaderHidden(true);
    //设置右键菜单
    ui->treeView->setContextMenuPolicy(Qt::CustomContextMenu);

    //填加connect
    connect(ui->treeView,SIGNAL(customContextMenuRequested(const QPoint &)),this,SLOT(showonCustomContextMenu(const QPoint &)));
    //取消双击编辑
    ui->treeView->setEditTriggers(QTreeView::NoEditTriggers);

    //绑定双击事件
    connect(ui->treeView,SIGNAL(doubleClicked(const QModelIndex &)),this,SLOT(onDoubleClicked(const QModelIndex &)));
}

//treeview的右键事件
void MainWindow::showonCustomContextMenu(const QPoint &pos)
{

    QModelIndex index = ui->treeView->indexAt(pos);
    QMenu menu(this);
    if(mFileSystemModel->isDir(index)){
        QString filePath = mFileSystemModel->filePath(index);
        if(filePath.isNull()) filePath = "D:/";
        menu.addAction(tr("新建文件(New File)"),[=]{
            QString fileName = filePath+tr("/新建文件")+QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss")+".txt";
            QFile file(fileName);
            if(!file.open(QIODevice::ReadWrite)){
                QMessageBox::critical(this,tr("失败"),tr("创建新文件失败!可能是没有权限或文件已存在"));
            }
            file.close();
        });
        menu.addAction(tr("新建文件夹(New Folder)"),[=]{
            QDir dir(filePath);
            QString dirName = filePath+tr("/新建文件夹")+QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss");
            if(!dir.exists(dirName)){
                dir.mkdir(dirName);
            }
        });
        menu.addAction(tr("重命名文件夹(Rename Dir)"),[=](){
            ui->treeView->edit(index);
        });

    }else{
        menu.addAction(tr("删除文件(Remove File)"),[=]{
            //删除文件
            QString fileName = mFileSystemModel->fileName(index);
            QString filePath = mFileSystemModel->filePath(index);

            if(QMessageBox::Yes == QMessageBox::question(this,tr("是否删除"),tr("请确定是否删除文件：\n")+fileName+tr("\n此操作不可恢复!")
                                  ,QMessageBox::Yes| QMessageBox::No)){
                //删除失败的情况
                if(!QFile::remove(filePath)){
                    QMessageBox::critical(this,tr("失败"),tr("删除文件：\n ")+fileName+tr("\n失败!可能没有权限或文件不存在"));
                }
            }
        });
        menu.addAction(tr("重命名文件(Rename File)"),[=](){
            ui->treeView->edit(index);
        });
    }

    menu.exec(QCursor::pos());

}

void MainWindow::onDoubleClicked(const QModelIndex &index)
{
    //打开文件树形结构的操作
    //判断是否是文件
    if(!mFileSystemModel->isDir(index)){
        QString filePath = mFileSystemModel->filePath(index);
        QFile file(filePath);
        if(!file.open(QIODevice::ReadOnly|QFile::Text)){ //只读文件不能打开
            QMessageBox::warning(this,tr("警告"),tr("无法打开此文件")+file.errorString());
            return;
        }
        currentFile = filePath; //将此时的文件置为此文件名
        setWindowTitle(filePath);
        QTextStream in(&file);
        QString text = in.readAll(); //读入文件并显示
        //qDebug()<<text<<endl;
        MyTestEdit *mytestedit = new MyTestEdit(this);
        mytestedit->settext(text);

        ui->tabWidget->addTab(mytestedit,currentFile);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

        file.close();
    }
}

void MainWindow::on_find_and_replace_triggered()
{
    //查找与替换的功能实现
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->find();
    }
}

void MainWindow::on_indentation_triggered()
{
    //选中行缩进的实现
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->add_space();
    }
}

void MainWindow::on_explain_triggered()
{
    MyTestEdit *mytestedit = (MyTestEdit *)ui->tabWidget->currentWidget();
    if(mytestedit){
        mytestedit->add_explain();
    }
}

void MainWindow::on_share_triggered()
{
    QUrl url("http://mail.qq.com");
    QDesktopServices::openUrl(url);
}

