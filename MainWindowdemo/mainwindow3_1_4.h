#ifndef MAINWINDOW3_1_4_H
#define MAINWINDOW3_1_4_H

#include <QMainWindow>

namespace Ui {
class MainWindow3_1_4;
}

class MainWindow3_1_4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3_1_4(QWidget *parent = 0);
    ~MainWindow3_1_4();

private slots:
    void on_pushreturnButton_1_clicked();

private:
    Ui::MainWindow3_1_4 *ui;
};

#endif // MAINWINDOW3_1_4_H
