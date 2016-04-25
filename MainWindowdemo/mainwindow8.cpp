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
