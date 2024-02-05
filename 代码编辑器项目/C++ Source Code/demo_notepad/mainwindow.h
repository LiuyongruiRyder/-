#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextCursor>
#include <QFontDialog>
#include "mytestedit.h"
#include <QDebug>
#include <QCloseEvent>
#include <QFileSystemModel>
#include <QMenu>
#include <QDesktopServices>
#include <QUrl>
#include "myfilesystemmodel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr,QString path="");
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_new_file_triggered();

    void on_open_file_triggered();

    void on_save_file_triggered();

    void on_save_as_triggered();

    void on_paste_triggered();

    void on_cut_triggered();

    void on_copy_triggered();

    void on_font_triggered();

    void on_about_triggered();

    void on_undo_triggered();

    void on_redo_triggered();

    void on_exit_triggered();

    void on_print_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void initTreeView();

    void showonCustomContextMenu(const QPoint &pos);

    void onDoubleClicked(const QModelIndex &index);

    void on_find_and_replace_triggered();

    void on_indentation_triggered();

    void on_explain_triggered();

    void on_action_3_triggered();

    void on_action_triggered();

    void on_share_triggered();

    void on_share_triggered(bool checked);

private:
    MyFileSystemModel *mFileSystemModel;
    Ui::MainWindow *ui;
    QString currentFile; //表示当前文件存放的地方，暂时只能存放一个文件

    QString URL;


};
#endif // MAINWINDOW_H
