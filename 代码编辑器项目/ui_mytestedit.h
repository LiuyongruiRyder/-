/********************************************************************************
** Form generated from reading UI file 'mytestedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTESTEDIT_H
#define UI_MYTESTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTestEdit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QScrollBar *horizontalScrollBar;

    void setupUi(QWidget *MyTestEdit)
    {
        if (MyTestEdit->objectName().isEmpty())
            MyTestEdit->setObjectName(QString::fromUtf8("MyTestEdit"));
        MyTestEdit->resize(607, 485);
        verticalLayout = new QVBoxLayout(MyTestEdit);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(MyTestEdit);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(25, 16777215));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(textBrowser);

        textEdit = new QTextEdit(MyTestEdit);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalScrollBar = new QScrollBar(MyTestEdit);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar);


        retranslateUi(MyTestEdit);

        QMetaObject::connectSlotsByName(MyTestEdit);
    } // setupUi

    void retranslateUi(QWidget *MyTestEdit)
    {
        MyTestEdit->setWindowTitle(QCoreApplication::translate("MyTestEdit", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTestEdit: public Ui_MyTestEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTESTEDIT_H
