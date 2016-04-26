#ifndef MAINWINDOW3_1_2_H
#define MAINWINDOW3_1_2_H

#include <QMainWindow>

namespace Ui {
class MainWindow3_1_2;
}

class MainWindow3_1_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3_1_2(QWidget *parent = 0);
    ~MainWindow3_1_2();

private slots:
    void on_pushreturnButton_1_clicked();

private:
    Ui::MainWindow3_1_2 *ui;
};

#endif // MAINWINDOW3_1_2_H
