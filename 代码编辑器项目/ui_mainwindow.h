/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_file;
    QAction *open_file;
    QAction *save_file;
    QAction *save_as;
    QAction *paste;
    QAction *cut;
    QAction *copy;
    QAction *font;
    QAction *about;
    QAction *undo;
    QAction *redo;
    QAction *exit;
    QAction *print;
    QAction *find_and_replace;
    QAction *indentation;
    QAction *explain;
    QAction *share;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTreeView *treeView;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;
    QToolBar *toolBar_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(937, 668);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/code_lg.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        new_file = new QAction(MainWindow);
        new_file->setObjectName(QString::fromUtf8("new_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_file->setIcon(icon1);
        open_file = new QAction(MainWindow);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_file->setIcon(icon2);
        save_file = new QAction(MainWindow);
        save_file->setObjectName(QString::fromUtf8("save_file"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_file->setIcon(icon3);
        save_as = new QAction(MainWindow);
        save_as->setObjectName(QString::fromUtf8("save_as"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_as->setIcon(icon4);
        paste = new QAction(MainWindow);
        paste->setObjectName(QString::fromUtf8("paste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        paste->setIcon(icon5);
        cut = new QAction(MainWindow);
        cut->setObjectName(QString::fromUtf8("cut"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cut->setIcon(icon6);
        copy = new QAction(MainWindow);
        copy->setObjectName(QString::fromUtf8("copy"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copy->setIcon(icon7);
        font = new QAction(MainWindow);
        font->setObjectName(QString::fromUtf8("font"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        font->setIcon(icon8);
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon9);
        undo = new QAction(MainWindow);
        undo->setObjectName(QString::fromUtf8("undo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo->setIcon(icon10);
        redo = new QAction(MainWindow);
        redo->setObjectName(QString::fromUtf8("redo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redo->setIcon(icon11);
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon12);
        print = new QAction(MainWindow);
        print->setObjectName(QString::fromUtf8("print"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        print->setIcon(icon13);
        find_and_replace = new QAction(MainWindow);
        find_and_replace->setObjectName(QString::fromUtf8("find_and_replace"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_and_replace->setIcon(icon14);
        indentation = new QAction(MainWindow);
        indentation->setObjectName(QString::fromUtf8("indentation"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        indentation->setIcon(icon15);
        explain = new QAction(MainWindow);
        explain->setObjectName(QString::fromUtf8("explain"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/explain.png"), QSize(), QIcon::Normal, QIcon::Off);
        explain->setIcon(icon16);
        share = new QAction(MainWindow);
        share->setObjectName(QString::fromUtf8("share"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        share->setIcon(icon17);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMaximumSize(QSize(16777215, 16777215));
        splitter->addWidget(treeView);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        splitter->addWidget(tabWidget);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 937, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);
        toolBar_5 = new QToolBar(MainWindow);
        toolBar_5->setObjectName(QString::fromUtf8("toolBar_5"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_5);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(new_file);
        menu->addAction(open_file);
        menu->addSeparator();
        menu->addAction(save_file);
        menu->addAction(save_as);
        menu->addSeparator();
        menu->addAction(print);
        menu->addSeparator();
        menu_2->addAction(copy);
        menu_2->addAction(paste);
        menu_2->addAction(cut);
        menu_2->addSeparator();
        menu_2->addAction(font);
        menu_3->addAction(about);
        menu_3->addAction(exit);
        menu_4->addAction(find_and_replace);
        menu_4->addSeparator();
        menu_4->addAction(indentation);
        menu_4->addAction(explain);
        menu_4->addSeparator();
        menu_4->addAction(share);
        toolBar->addAction(new_file);
        toolBar->addAction(open_file);
        toolBar->addAction(print);
        toolBar->addAction(save_file);
        toolBar->addAction(save_as);
        toolBar_2->addAction(copy);
        toolBar_2->addAction(paste);
        toolBar_2->addAction(cut);
        toolBar_2->addAction(font);
        toolBar_3->addAction(find_and_replace);
        toolBar_3->addAction(indentation);
        toolBar_3->addAction(explain);
        toolBar_4->addAction(undo);
        toolBar_4->addAction(redo);
        toolBar_5->addAction(share);
        toolBar_5->addAction(about);
        toolBar_5->addAction(exit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\273\243\347\240\201\347\274\226\350\276\221\345\231\250", nullptr));
        new_file->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        new_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        open_file->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        open_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save_file->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(shortcut)
        save_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        save_as->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#if QT_CONFIG(shortcut)
        save_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(shortcut)
        cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        font->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(shortcut)
        font->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(shortcut)
        about->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\345\233\236", nullptr));
#if QT_CONFIG(shortcut)
        undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        redo->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\346\222\244\345\233\236", nullptr));
#if QT_CONFIG(shortcut)
        redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        print->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(shortcut)
        print->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        find_and_replace->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\344\270\216\346\233\277\346\215\242", nullptr));
        indentation->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\241\214\347\274\251\350\277\233", nullptr));
        explain->setText(QCoreApplication::translate("MainWindow", "\345\244\232\350\241\214\346\263\250\351\207\212", nullptr));
        share->setText(QCoreApplication::translate("MainWindow", "\345\210\206\344\272\253", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_4", nullptr));
        toolBar_5->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
