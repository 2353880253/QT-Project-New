#ifndef MAINWINDOW3_1_3_H
#define MAINWINDOW3_1_3_H

#include <QMainWindow>

namespace Ui {
class MainWindow3_1_3;
}

class MainWindow3_1_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3_1_3(QWidget *parent = 0);
    ~MainWindow3_1_3();

private slots:
    void on_pushreturnButton_1_clicked();

private:
    Ui::MainWindow3_1_3 *ui;
};

#endif // MAINWINDOW3_1_3_H
