#include"mainwindow.h"
#include "mainwindow3.h"
#include "mainwindow3_1.h"
#include "ui_mainwindow3_1.h"
#include "mainwindow3_1_2.h"
#include "ui_mainwindow3_1_2.h"

MainWindow3_1::MainWindow3_1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3_1)
{
    ui->setupUi(this);
}

MainWindow3_1::~MainWindow3_1()
{
    delete ui;
}

void MainWindow3_1::on_pushreturnButton3_1_clicked()
{
    MainWindow3 *window3 = new MainWindow3();
    window3->show();
    this->hide();
}

void MainWindow3_1::on_pushButton3_1_1_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1_1.show();
    this->hide();
}

void MainWindow3_1::on_pushButton3_1_2_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1_2.show();
    this->hide();
}

void MainWindow3_1::on_pushButton3_1_3_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1_3.show();
    this->hide();
}

void MainWindow3_1::on_pushButton3_1_4_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1_4.show();
    this->hide();
}
