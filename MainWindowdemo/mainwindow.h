#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mainwindow2.h"
#include "dialog1.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void GetDlgPtr(Dialog1*dlgptr);                                      //欢迎界面使用

    void closeAllWidgets();

   // void changeEvent(QEvent *e);


private:
    Ui::MainWindow *ui;             //定义UI个数

    MainWindow2  mainwindow2;

    Dialog1 *dlg;                                                                          //欢迎界面使用



private slots:                                 //定义槽函数

    void on_pushButton_2_clicked();


    void on_pushreturnButton_1_clicked();                                 //返回欢迎界面



};

#endif // MAINWINDOW_H
