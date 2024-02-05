#include "dialoglogin.h"
#include "ui_dialoglogin.h"

#include <QSlider>

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlag(Qt::FramelessWindowHint);
    readSetting();
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_btnOK_clicked()
{
    //用户名密码
    QString user = ui->editUser->text().trimmed();
    QString pswd = ui->editPSWD->text().trimmed();

    if(user==m_user && encrypt(pswd) == m_pswd){
        writeSettings();
        accept();
    }else{
        m_tryCount++; //三次强制退出
        if(m_tryCount>3){
            QMessageBox::critical(this,"err",tr("错误次数太多，强行退出"));
            reject();
        }else{
            QMessageBox::warning(this,"err",tr("用户名或密码错误"));
        }
    }
}

void DialogLogin::writeSettings()
{
    QSettings settings("AXB-Qt","Notepad");
    settings.setValue("Username",m_user);
    settings.setValue("PSWD",m_pswd);
    settings.setValue("saved",ui->chkBoxSave->isChecked());
}

void DialogLogin::readSetting()
{
    //从注册表中拿数据
    QSettings settings("AXB-Qt","Samp_6_5");
    bool saved = settings.value("saved",false).toBool();
    m_user=settings.value("Username","user").toString(); //返回setting中的的key对应的value值，否则返回默认值
    QString defaultPSWD=encrypt("12345");
    m_pswd=settings.value("PSWD",defaultPSWD).toString();
    if(saved){
        ui->editUser->setText(m_user);
    }
    ui->chkBoxSave->setChecked(saved);
}

QString DialogLogin::encrypt(const QString &str)
{
    //给密码进行加密
    QByteArray btArray;
    btArray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(btArray);
    QByteArray resultArray = hash.result();
    QString md5 = resultArray.toHex();
    return md5;
}

//实现界面的移动
void DialogLogin::DialogLogin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        m_moving=true;
        m_lastPos=event->globalPos()-pos();
    }
    return QDialog::mousePressEvent(event);
}

void DialogLogin::mouseMoveEvent(QMouseEvent *event)
{
    if(m_moving&&(event->buttons()&Qt::LeftButton)){
        move(event->globalPos()-m_lastPos);
        m_lastPos=event->globalPos()-pos();
    }
        return QDialog::mouseMoveEvent(event);
}

void DialogLogin::mouseReleaseEvent(QMouseEvent *event)
{
    m_moving=false;

}




