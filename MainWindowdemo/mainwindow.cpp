#include "mainwindow.h"                                                     //mainwindow用于显示七个大button界面
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


//    Qt::WindowFlags flags = 0;             //控制窗口大小部分
 //   flags |= Qt::WindowMinimizeButtonHint;
 //   setWindowFlags(flags);                  //设置 禁止最大化
 //   setFixedSize(600,400);                    //禁止改变窗口大小

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{


        this->hide();
        MainWindow h;
        mainwindow2.show();                                                         //注：调用mainwindow时没有exec（）函数，调用dialog类型时需要
        this->hide();

}

void MainWindow::GetDlgPtr(Dialog1 *dlgptr)                        //欢迎界面使用函数
{
    dlg = dlgptr;
}

void MainWindow::on_pushreturnButton_1_clicked()             //欢迎界面使用函数（返回）
{

    close();
    Dialog1 dlg1;
    if(dlg1.exec() == QDialog::Accepted)show();


}

/*void MainWindow::changeEvent(QEvent *e)             //窗口改变事件
{
    QMainWindow::changeEvent(e);
    switch(e->type()){
        case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
     default:
         break;
    }
}*/
