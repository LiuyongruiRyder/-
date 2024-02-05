#ifndef MYFINDUI_H
#define MYFINDUI_H

#include <QWidget>
#include <QStringList>
#include <QDebug>

namespace Ui {
class Myfindui;
}

class Myfindui : public QWidget
{
    Q_OBJECT

public:
    explicit Myfindui(QWidget *parent = nullptr);
    ~Myfindui();
    void settext(QStringList text);
    QStringList list;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Myfindui *ui;
    void Init();
    QString lastword;
    int currentrow; //记录当前行号
    int currentcolumn; //记录列号

signals:
    void sendData(QString);
    void sendDataup(QString);
    void sendData1(QString);
    void sendData2(QString);
    void sendData3(QString);

    void sendDataup1(QString);
    void sendDataup2(QString);
    void sendDataup3(QString);

    void send_replace_Data(QString,QString);
    void send_replace_all(QString,QString);
};

#endif // MYFINDUI_H
