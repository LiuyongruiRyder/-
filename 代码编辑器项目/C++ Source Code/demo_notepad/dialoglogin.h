#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H


#include <QDialog>
#include <QMessageBox>
#include <QSettings>
#include <QCryptographicHash>
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = nullptr);
    ~DialogLogin();

private slots:
    void on_btnOK_clicked();

private:
    Ui::DialogLogin *ui;
    QString m_user;
    QString m_pswd;
    int m_tryCount=0;
    void writeSettings();
    void readSetting();
    QString encrypt(const QString &str);
    bool m_moving;
    QPoint m_lastPos;

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


};


#endif // DIALOGLOGIN_H
