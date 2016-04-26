#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mainwindow2.h"
#include "mainwindow3.h"
#include "mainwindow4.h"
#include "mainwindow5.h"
#include "mainwindow6.h"
#include "mainwindow7.h"
#include "mainwindow8.h"

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
    MainWindow3  mainwindow3;
    MainWindow4  mainwindow4;
    MainWindow5  mainwindow5;
    MainWindow6  mainwindow6;
    MainWindow7  mainwindow7;
    MainWindow8  mainwindow8;
    Dialog1 *dlg;                                                                          //欢迎界面使用



private slots:                                 //定义槽函数


    void on_pushreturnButton_1_clicked();                                 //返回欢迎界面


    void on_pushButton_2_clicked();                                           //第一个button

    void on_pushButton_3_clicked();                                           //第二个button

    void on_pushButton_4_clicked();                                           //第三个button

    void on_pushButton_5_clicked();                                           //第五个button

    void on_pushButton_6_clicked();                                           //第六个button

    void on_pushButton_7_clicked();                                           //第七个button

    void on_pushButton_8_clicked();                                           //第八个button
};

#endif // MAINWINDOW_H
