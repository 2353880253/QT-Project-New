#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include "mainwindow3_1.h"

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = 0);
    ~MainWindow3();


private slots:
    void on_pushButton_1_clicked();

    void on_pushButton3_1_clicked();

    void on_pushButton3_2_clicked();

    void on_pushButton3_3_clicked();

    void on_pushButton3_4_clicked();

    void on_pushButton3_5_clicked();

    void on_pushButton3_6_clicked();

private:
    Ui::MainWindow3 *ui;

   MainWindow3_1  mainwindow3_1;                     //


};

#endif // MAINWINDOW3_H
