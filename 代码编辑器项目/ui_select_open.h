/********************************************************************************
** Form generated from reading UI file 'select_open.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_OPEN_H
#define UI_SELECT_OPEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Select_Open
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Select_Open)
    {
        if (Select_Open->objectName().isEmpty())
            Select_Open->setObjectName(QString::fromUtf8("Select_Open"));
        Select_Open->resize(899, 460);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/code_lg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Select_Open->setWindowIcon(icon);
        label_2 = new QLabel(Select_Open);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 10, 701, 301));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/success.webp")));
        layoutWidget = new QWidget(Select_Open);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 320, 881, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(11);
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);

        layoutWidget1 = new QWidget(Select_Open);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(300, 390, 321, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(Select_Open);

        QMetaObject::connectSlotsByName(Select_Open);
    } // setupUi

    void retranslateUi(QWidget *Select_Open)
    {
        Select_Open->setWindowTitle(QCoreApplication::translate("Select_Open", "\345\255\230\345\202\250\351\200\211\346\213\251", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("Select_Open", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\257\267\351\200\211\346\213\251\344\273\243\347\240\201\345\255\230\345\202\250\350\267\257\345\276\204\357\274\232</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Select_Open", "\346\265\217\350\247\210", nullptr));
        pushButton->setText(QCoreApplication::translate("Select_Open", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Select_Open", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Select_Open: public Ui_Select_Open {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_OPEN_H
