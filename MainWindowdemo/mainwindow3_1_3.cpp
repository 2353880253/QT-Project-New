#include"mainwindow.h"
#include "mainwindow3.h"
#include "mainwindow3_1.h"
#include "mainwindow3_1_3.h"
#include "ui_mainwindow3_1_3.h"

MainWindow3_1_3::MainWindow3_1_3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3_1_3)
{
    ui->setupUi(this);
}

MainWindow3_1_3::~MainWindow3_1_3()
{
    delete ui;
}

void MainWindow3_1_3::on_pushreturnButton_1_clicked()
{
    MainWindow3_1 *window3_1 = new MainWindow3_1();
    window3_1->show();
    this->hide();
}
