#include"mainwindow.h"
#include "mainwindow8.h"
#include "ui_mainwindow8.h"

MainWindow8::MainWindow8(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow8)
{
    ui->setupUi(this);
}

MainWindow8::~MainWindow8()
{
    delete ui;
}

void MainWindow8::on_pushButton_1_clicked()
{
    MainWindow *window = new MainWindow();
    window->show();
    this->hide();
}
