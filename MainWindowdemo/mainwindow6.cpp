#include "mainwindow6.h"
#include "ui_mainwindow6.h"

MainWindow6::MainWindow6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow6)
{
    ui->setupUi(this);
}

MainWindow6::~MainWindow6()
{
    delete ui;
}
