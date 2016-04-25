#include"mainwindow.h"                                                               //mainwindow2用于显示七个大button下面的标签页面
#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_1_clicked()
{
    MainWindow *window = new MainWindow();
    window->show();
    this->hide();
}
