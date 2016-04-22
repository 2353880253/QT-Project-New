#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    this->hide();   //初始化隐藏
    dialog1.show();
    dialog1.exec();//show后必加exec
    this->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    /*this->hide();   //初始化隐藏
    dialog2.show();
    dialog2.exec();//show后必加exec
    this->show();*/

     //this->hide();
    //close();
   this->hide();
    dialog2.show();
    dialog2.exec();
   this->hide();
   if(dialog2.exec() == QDialog::Accepted)show();



}

void MainWindow::GetDlgPtr(Dialog2*dlgptr)
{
    dlg2 = dlgptr;
}


void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
