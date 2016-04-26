#ifndef MAINWINDOW6_H
#define MAINWINDOW6_H

#include <QMainWindow>

namespace Ui {
class MainWindow6;
}

class MainWindow6 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow6(QWidget *parent = 0);
    ~MainWindow6();

private slots:
    void on_pushButton_1_clicked();

private:
    Ui::MainWindow6 *ui;
};

#endif // MAINWINDOW6_H
