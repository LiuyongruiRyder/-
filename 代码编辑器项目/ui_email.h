/********************************************************************************
** Form generated from reading UI file 'email.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAIL_H
#define UI_EMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Email
{
public:

    void setupUi(QWidget *Email)
    {
        if (Email->objectName().isEmpty())
            Email->setObjectName(QString::fromUtf8("Email"));
        Email->resize(400, 300);

        retranslateUi(Email);

        QMetaObject::connectSlotsByName(Email);
    } // setupUi

    void retranslateUi(QWidget *Email)
    {
        Email->setWindowTitle(QCoreApplication::translate("Email", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Email: public Ui_Email {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAIL_H
