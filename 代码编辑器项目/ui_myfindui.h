/********************************************************************************
** Form generated from reading UI file 'myfindui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFINDUI_H
#define UI_MYFINDUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Myfindui
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *textEdit_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *Myfindui)
    {
        if (Myfindui->objectName().isEmpty())
            Myfindui->setObjectName(QString::fromUtf8("Myfindui"));
        Myfindui->resize(993, 243);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/code_lg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Myfindui->setWindowIcon(icon);
        layoutWidget = new QWidget(Myfindui);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 681, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textEdit = new QLineEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textEdit_2 = new QLineEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        horizontalLayout_2->addWidget(textEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Myfindui);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(790, 40, 141, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(50, 35));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 35));

        verticalLayout_2->addWidget(pushButton_3);

        checkBox = new QCheckBox(Myfindui);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(230, 160, 121, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        checkBox->setFont(font);
        checkBox_2 = new QCheckBox(Myfindui);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(380, 160, 121, 41));
        checkBox_2->setFont(font);

        retranslateUi(Myfindui);

        QMetaObject::connectSlotsByName(Myfindui);
    } // setupUi

    void retranslateUi(QWidget *Myfindui)
    {
        Myfindui->setWindowTitle(QCoreApplication::translate("Myfindui", "\346\237\245\346\211\276\344\270\216\346\233\277\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("Myfindui", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\346\237\245\346\211\276\345\206\205\345\256\271</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Myfindui", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\346\233\277\346\215\242\345\206\205\345\256\271</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Myfindui", "\346\237\245\346\211\276\344\270\213\344\270\200\345\244\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Myfindui", "\346\237\245\346\211\276\344\270\212\344\270\200\345\244\204", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Myfindui", "\346\233\277\346\215\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Myfindui", "\345\205\250\351\203\250\346\233\277\346\215\242", nullptr));
        checkBox->setText(QCoreApplication::translate("Myfindui", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Myfindui", "\345\205\250\350\257\215\345\214\271\351\205\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Myfindui: public Ui_Myfindui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFINDUI_H
