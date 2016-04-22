#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dialog1.h"
#include"dialog2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void closeAllWidgets();
    void GetDlgPtr(Dialog2*dlgptr);

private:
    Ui::MainWindow *ui;             //定义UI个数

    Dialog1 dialog1;
    Dialog2 dialog2;
    Dialog2 *dlg2;


private slots:                                 //定义槽函数

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_1_clicked();

    //void closeAllWidgets();
};

#endif // MAINWINDOW_H
