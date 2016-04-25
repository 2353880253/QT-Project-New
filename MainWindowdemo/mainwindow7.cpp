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
