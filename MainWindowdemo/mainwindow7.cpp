#include"mainwindow.h"
#include "mainwindow7.h"
#include "ui_mainwindow7.h"

MainWindow7::MainWindow7(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow7)
{
    ui->setupUi(this);
}

MainWindow7::~MainWindow7()
{
    delete ui;
}

void MainWindow7::on_pushButton_1_clicked()
{
    MainWindow *window = new MainWindow();
    window->show();
    this->hide();
}
