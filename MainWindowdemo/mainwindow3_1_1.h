#ifndef MAINWINDOW3_1_1_H
#define MAINWINDOW3_1_1_H

#include <QMainWindow>

namespace Ui {
class MainWindow3_1_1;
}

class MainWindow3_1_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3_1_1(QWidget *parent = 0);
    ~MainWindow3_1_1();

private slots:


    void on_pushreturnButton3_1_1_clicked();

private:
    Ui::MainWindow3_1_1 *ui;
};

#endif // MAINWINDOW3_1_1_H
