/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editUser;
    QLabel *label_3;
    QLineEdit *editPSWD;
    QCheckBox *chkBoxSave;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(975, 544);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/code_lg.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLogin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogLogin);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DialogLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images2/images2/splash.jpg")));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        editUser = new QLineEdit(DialogLogin);
        editUser->setObjectName(QString::fromUtf8("editUser"));
        editUser->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(editUser);

        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        editPSWD = new QLineEdit(DialogLogin);
        editPSWD->setObjectName(QString::fromUtf8("editPSWD"));
        editPSWD->setMinimumSize(QSize(0, 30));
        editPSWD->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(editPSWD);

        chkBoxSave = new QCheckBox(DialogLogin);
        chkBoxSave->setObjectName(QString::fromUtf8("chkBoxSave"));
        QFont font1;
        font1.setPointSize(11);
        chkBoxSave->setFont(font1);

        horizontalLayout->addWidget(chkBoxSave);

        horizontalSpacer_3 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnOK = new QPushButton(DialogLogin);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images2/images2/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon1);

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(DialogLogin);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images2/images2/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon2);

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_6 = new QSpacerItem(58, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogLogin);
        QObject::connect(btnCancel, SIGNAL(clicked()), DialogLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QCoreApplication::translate("DialogLogin", "\347\231\273\345\275\225", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("DialogLogin", "\345\257\206 \347\240\201", nullptr));
        chkBoxSave->setText(QCoreApplication::translate("DialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        btnOK->setText(QCoreApplication::translate("DialogLogin", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("DialogLogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
