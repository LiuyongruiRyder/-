#include "mytestedit.h"
#include "ui_mytestedit.h"
#include "myfindui.h"

#include <QFileDialog>
#include <QMessageBox>

MyTestEdit::MyTestEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyTestEdit)
{
    ui->setupUi(this);
    //初始化滚动槽和字体
    initConnect();

    initFont();

    //初始化高亮
    initHighlighter();

    //设置textedit不自动换行
    QTextOption option = ui->textEdit->document()->defaultTextOption();
    option.setWrapMode(QTextOption::NoWrap);
    ui->textEdit->document()->setDefaultTextOption(option);


}

MyTestEdit::~MyTestEdit()
{
    delete ui;
}

void MyTestEdit::settext(QString text)
{
    //打开文件的时候，将文件内容显示到text里面
    ui->textEdit->setPlainText(text);
}

QString MyTestEdit::gettext()
{
    //拿到新编辑的文本
    return ui->textEdit->toPlainText();
}

bool MyTestEdit::saveFile(QString URL)
{
    //保存文件
    QString fileName;
    if(mFileName.isEmpty()){ //文件是否存在方式不同
        fileName = QFileDialog::getSaveFileName(this,"保存文件",URL);
        mFileName = fileName;
    }else{
        fileName = mFileName; //为了实现二次保存不弹出保存窗口
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,tr("警告"),tr("无法保存文件:")+file.errorString());
        return false;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);

    out<<ui->textEdit->toPlainText();
    QString fph = file.fileName(); //获取文件地址
    QString new_name = fph.section("/",-1); //获取最后一个文件名
    mFileName = new_name;
    file.close();
    return true;
}

bool MyTestEdit::saveas(QString URL)
{
    //另存为的函数
    QString fileName = QFileDialog::getSaveFileName(this,"另存文件",URL);
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,tr("警告"),tr("无法另存为文件:")+file.errorString());
        return false;
    }
    mFileName = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText(); //带格式的
    out<<text;
    QString fph = file.fileName(); //获取文件地址
    QString new_name = fph.section("/",-1); //获取最后一个文件名
    mFileName = new_name;
    file.close();
    return true;
}

void MyTestEdit::setfilename(QString filename)
{
    mFileName = filename;
}

void MyTestEdit::copy()
{
    //复制
    ui->textEdit->copy();
}

void MyTestEdit::cut()
{
    //剪切
    ui->textEdit->cut();
}

void MyTestEdit::paste()
{
    //粘贴
    ui->textEdit->paste();
}

void MyTestEdit::print(QPrinter &printDev)
{
    //打印
    ui->textEdit->print(&printDev);
}

void MyTestEdit::setfont(QFont font)
{
    //设置字体
    ui->textEdit->setFont(font);
    myhighlighter = new MyHighlighter(ui->textEdit->document());
    myhighlighter->setFont(font);
}

void MyTestEdit::find()//查找与替换操作
{
    QString text_string = ui->textEdit->toPlainText();
    //text_string = text_string.simplified(); //去掉换行
    QStringList lines = text_string.split("\n"); //去掉换行

    Myfindui *findui = new Myfindui();
    findui->settext(lines); //将行的list传入查找实现的类中
    findui->show();

    //查找操作所需要的connect
    //查找下一处操作和查找条件
    connect(findui,SIGNAL(sendData(QString)),this,SLOT(receiveline(QString)));
    connect(findui,SIGNAL(sendData1(QString)),this,SLOT(finddown1(QString)));
    connect(findui,SIGNAL(sendData2(QString)),this,SLOT(finddown2(QString)));
    connect(findui,SIGNAL(sendData3(QString)),this,SLOT(finddown3(QString)));

    //查找上一处操作和查找条件
    connect(findui,SIGNAL(sendDataup(QString)),this,SLOT(findup(QString)));
    connect(findui,SIGNAL(sendDataup1(QString)),this,SLOT(findup1(QString)));
    connect(findui,SIGNAL(sendDataup2(QString)),this,SLOT(findup2(QString)));
    connect(findui,SIGNAL(sendDataup3(QString)),this,SLOT(findup3(QString)));

    //替换操作所需的槽函数
    //替换一个
    connect(findui,SIGNAL(send_replace_Data(QString,QString)),this,SLOT(replace_one(QString,QString)));//单个替换
    //替换所有
    connect(findui,SIGNAL(send_replace_all(QString,QString)),this,SLOT(replace_all(QString,QString)));//单个替换


}

void MyTestEdit::add_space()
{    //选中代码加空格操作
    QTextEdit *edit = ui->textEdit;

    int start = edit->textCursor().selectionStart();//起始字符位置
    int end = edit->textCursor().selectionEnd();//结束字符位置
    int start_line = edit->textCursor().blockNumber();//起始行号，从0开始

    //预处理出每行的字符数
    QVector<int> lines_count;
    QString text = ui->textEdit->document()->toPlainText();
    QStringList lines = text.split("\n"); // 分割成多行
    for(int i=0;i<lines.length();i++){
        lines_count.append(lines.at(i).length());//获取每一行的字符数
    }

    //给选中的每行加空格
    while(start<(end-1)){
        QTextCursor tmpcursor = ui->textEdit->textCursor();
        tmpcursor.setPosition(start);
        ui->textEdit->setTextCursor(tmpcursor);
        //添加空格
        edit->moveCursor(QTextCursor::StartOfLine);
        edit->insertPlainText("    ");
        start+=lines_count.at(start_line);
        start_line++;
    }

}

void MyTestEdit::add_explain()
{
    //实现多行注释
    //选中代码加空格操作
        QTextEdit *edit = ui->textEdit;

        int start = edit->textCursor().selectionStart();//起始字符位置
        int end = edit->textCursor().selectionEnd();//结束字符位置
        int start_line = edit->textCursor().blockNumber();//起始行号，从0开始

        //预处理出每行的字符数
        QVector<int> lines_count;
        QString text = ui->textEdit->document()->toPlainText();
        QStringList lines = text.split("\n"); // 分割成多行
        for(int i=0;i<lines.length();i++){
            lines_count.append(lines.at(i).length());//获取每一行的字符数
        }

        //给选中的每行加空格
        while(start<(end-1)){
            QTextCursor tmpcursor = ui->textEdit->textCursor();
            tmpcursor.setPosition(start);
            ui->textEdit->setTextCursor(tmpcursor);
            //添加空格
            edit->moveCursor(QTextCursor::StartOfLine);
            edit->insertPlainText("//");
            start+=lines_count.at(start_line);
            start_line++;
        }
}

void MyTestEdit::undo()
{
    //撤销
    ui->textEdit->undo();
}

void MyTestEdit::redo()
{
    //反撤销
    ui->textEdit->redo();
}

QString MyTestEdit::getfilename()
{
    return mFileName;
}

bool MyTestEdit::checkSaved()
{
    //仅仅是判断是文件是否被改动，若没被改动则直接退出，后面要去改一下
    return  ui->textEdit->document()->isModified();
}

void MyTestEdit::initConnect() //初始化信号与槽
{
    //text中字动滚动条跟着动
    connect(ui->textEdit->horizontalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(textEditScrollBarChanged()));
    //滚动条带着字动
    connect(ui->horizontalScrollBar,SIGNAL(valueChanged(int)),this,SLOT(scrollBarChanged()));
    //每输入一行行号跟着出现
    connect(ui->textEdit,SIGNAL(textChanged()),this,SLOT(onTextChanged()));

    //text中字动editbrowser跟着动,就是相互绑定
    connect(ui->textEdit->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(textEditVScrollBarChanged()));
    //browser带着text动
    connect(ui->textBrowser->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(textBrowserVScrollBarChanged()));

}

void MyTestEdit::initFont() //字体初始化
{
    QFont font("Consolas",14);
    ui->textEdit->setFont(font);
    ui->textBrowser->setFont(font);
}

void MyTestEdit::initHighlighter()
{
    //初始化高亮
    new MyHighlighter(ui->textEdit->document());
}

//后面几个相关函数就是实现行号和内容下拉绑定
void MyTestEdit::textEditScrollBarChanged()
{
    ui->horizontalScrollBar->setMaximum(ui->textEdit->horizontalScrollBar()->maximum());
    ui->horizontalScrollBar->setMinimum(ui->textEdit->horizontalScrollBar()->minimum());
    ui->horizontalScrollBar->setPageStep(ui->textEdit->horizontalScrollBar()->pageStep());
    ui->horizontalScrollBar->setValue(ui->textEdit->horizontalScrollBar()->value());
}

void MyTestEdit::scrollBarChanged()
{
    ui->textEdit->horizontalScrollBar()->setValue(ui->horizontalScrollBar->value());
}

void MyTestEdit::onTextChanged()
{
    //整个思想就是拿到browser和text的行数，browser大就删掉行，小就增加行
    int lineCountoftextedit = ui->textEdit->document()->lineCount();
    QString text = ui->textBrowser->toPlainText();
    int lineCountoftestbrowser = text.trimmed().split("\n").length();

    if(lineCountoftestbrowser>lineCountoftextedit){
        for(int i = lineCountoftestbrowser;i>lineCountoftextedit;i--){
            text.chop((QString::number(i)+"\n").length());//移除空白字符
        }

    }else if(lineCountoftestbrowser==1 && text.length()<1){
        text +="1\n";
    }

    else if (lineCountoftestbrowser<lineCountoftextedit) {
        for(int i = lineCountoftestbrowser;i<lineCountoftextedit;i++){
            text += QString::number(i+1)+"\n";
        }
    }


    ui->textBrowser->setMaximumWidth(25+QString::number(lineCountoftextedit).length()*10);
    ui->textBrowser->setText(text);
}

void MyTestEdit::textEditVScrollBarChanged()
{
    ui->textBrowser->verticalScrollBar()->setValue(ui->textEdit->verticalScrollBar()->value());
}

void MyTestEdit::textBrowserVScrollBarChanged()
{
    ui->textEdit->verticalScrollBar()->setValue(ui->textBrowser->verticalScrollBar()->value());
}

void MyTestEdit::receiveline(QString target)
{
    //向下查找，12都不选
    ui->textEdit->find(target);
}

void MyTestEdit::findup(QString target)
{
    //查找数据内容，并向上查找,12都不选
    ui->textEdit->find(target,QTextDocument::FindBackward);
}

void MyTestEdit::finddown1(QString target)
{
    //向下查找且1，2都选
    ui->textEdit->find(target,QTextDocument::FindCaseSensitively | QTextDocument::FindWholeWords);
}

void MyTestEdit::finddown2(QString target)
{
    //向下查找且1不选，2选
    ui->textEdit->find(target,QTextDocument::FindWholeWords);
}

void MyTestEdit::finddown3(QString target)
{
    //向下查找且1选，2不选
    ui->textEdit->find(target,QTextDocument::FindCaseSensitively);

}

void MyTestEdit::findup1(QString target)
{
    //向上，12都选
    ui->textEdit->find(target,QTextDocument::FindBackward | QTextDocument::FindCaseSensitively | QTextDocument::FindWholeWords);
}

void MyTestEdit::findup2(QString target)
{
    //向上，1不选2选
    ui->textEdit->find(target,QTextDocument::FindBackward | QTextDocument::FindWholeWords);
}

void MyTestEdit::findup3(QString target)
{
    //向上，1选2不选
    ui->textEdit->find(target,QTextDocument::FindBackward | QTextDocument::FindCaseSensitively);
}

void MyTestEdit::replace_one(QString beforereplace, QString afterreplace)
{
    //替代第一个
    QTextCursor cursor = ui->textEdit->textCursor();
    //cursor.beginEditBlock();//开始编辑块

    if(!cursor.isNull() && !cursor.atEnd()){

        cursor = ui->textEdit->document()->find(beforereplace,QTextCursor::Start,
                                                QTextDocument::FindWholeWords);
        if(!cursor.isNull()){
            //删除找到的文本
            cursor.deleteChar();
            //替换文本
            cursor.insertText(afterreplace);
        }
    }
    //cursor.endEditBlock();

}

void MyTestEdit::replace_all(QString beforereplace, QString afterreplace)
{
    //全部替换
    //替代第一个
    QTextCursor cursor = ui->textEdit->textCursor();


    while(!cursor.isNull() && !cursor.atEnd()){
        //cursor.beginEditBlock();//开始编辑块
        cursor = ui->textEdit->document()->find(beforereplace,QTextCursor::Start,
                                                QTextDocument::FindWholeWords);
        if(!cursor.isNull()){
            //删除找到的文本
            cursor.deleteChar();
            //替换文本
            cursor.insertText(afterreplace);
        }

        //cursor.endEditBlock();
    }

}
