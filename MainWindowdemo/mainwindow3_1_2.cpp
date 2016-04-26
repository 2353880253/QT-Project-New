#include"mainwindow.h"
#include "mainwindow3.h"
#include "mainwindow3_1.h"
#include "mainwindow3_1_2.h"
#include "ui_mainwindow3_1_2.h"

MainWindow3_1_2::MainWindow3_1_2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3_1_2)
{
    ui->setupUi(this);
}

MainWindow3_1_2::~MainWindow3_1_2()
{
    delete ui;
}

void MainWindow3_1_2::on_pushreturnButton_1_clicked()
{
    MainWindow3_1 *window3_1 = new MainWindow3_1();
    window3_1->show();
    this->hide();
}
