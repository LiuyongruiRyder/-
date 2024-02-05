#ifndef MYTESTEDIT_H
#define MYTESTEDIT_H

#include <QWidget>
#include <QDebug>
#include <QPrinter>
#include <QMenu>
#include <QAction>
#include "myhighlighter.h"

namespace Ui {
class MyTestEdit;
}

class MyTestEdit : public QWidget
{
    Q_OBJECT

public:
    explicit MyTestEdit(QWidget *parent = nullptr);
    ~MyTestEdit();
    void settext(QString text);
    QString gettext();
    bool saveFile(QString URL);
    bool saveas(QString URL);

    void setfilename(QString filename);
    void copy();
    void cut();
    void paste();
    void print(QPrinter &printDev);
    void setfont(QFont font);
    void find();
    void add_space();
    void add_explain();

    void undo();
    void redo();
    QString getfilename();
    bool checkSaved();


private:
    Ui::MyTestEdit *ui;
    void initConnect();
    void initFont();
    void initHighlighter();
    QString mFileName;
    MyHighlighter *myhighlighter;


private slots:
    void textEditScrollBarChanged();
    void scrollBarChanged();
    void onTextChanged();
    void textEditVScrollBarChanged();
    void textBrowserVScrollBarChanged();
    void receiveline(QString target);
    void findup(QString target);

    void finddown1(QString target);
    void finddown2(QString target);
    void finddown3(QString target);

    void findup1(QString target);
    void findup2(QString target);
    void findup3(QString target);

    void replace_one(QString beforereplace,QString afterreplace);
    void replace_all(QString beforereplace,QString afterreplace);


};

#endif // MYTESTEDIT_H
