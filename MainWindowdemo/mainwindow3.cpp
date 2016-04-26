#include"mainwindow.h"
#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
}

MainWindow3::~MainWindow3()
{
    delete ui;
}


void MainWindow3::on_pushButton_1_clicked()
{
    MainWindow *window = new MainWindow();
    window->show();
    this->hide();
}

void MainWindow3::on_pushButton3_1_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}



void MainWindow3::on_pushButton3_2_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}

void MainWindow3::on_pushButton3_3_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}

void MainWindow3::on_pushButton3_4_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}

void MainWindow3::on_pushButton3_5_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}

void MainWindow3::on_pushButton3_6_clicked()
{
    this->hide();
    MainWindow h;
    mainwindow3_1.show();
    this->hide();
}
