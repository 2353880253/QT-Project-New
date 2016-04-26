#ifndef MAINWINDOW3_1_H
#define MAINWINDOW3_1_H

#include <QMainWindow>
#include "mainwindow3_1_1.h"
#include "mainwindow3_1_2.h"
#include "mainwindow3_1_3.h"
#include "mainwindow3_1_4.h"

namespace Ui {
class MainWindow3_1;
}

class MainWindow3_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3_1(QWidget *parent = 0);
    ~MainWindow3_1();

private slots:
    void on_pushreturnButton3_1_clicked();

    void on_pushButton3_1_1_clicked();

    void on_pushButton3_1_2_clicked();

    void on_pushButton3_1_3_clicked();

    void on_pushButton3_1_4_clicked();

private:
    Ui::MainWindow3_1 *ui;

   MainWindow3_1_1  mainwindow3_1_1;

   MainWindow3_1_2  mainwindow3_1_2;

   MainWindow3_1_3  mainwindow3_1_3;

   MainWindow3_1_4  mainwindow3_1_4;
};

#endif // MAINWINDOW3_1_H
