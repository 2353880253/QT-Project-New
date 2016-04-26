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
void MainWindow::on_pushButton_2_clicked()                       //第一个Button 内部基带信号生成  （push_Button_2 ->MainWindow2）
{

        this->hide();
        MainWindow h;
        mainwindow2.show();                                                         //注：调用mainwindow时没有exec（）函数，调用dialog类型时需要
        this->hide();

}



void MainWindow::on_pushButton_3_clicked()                        //第二个Button 信道参数                   （push_Button_3 ->MainWindow3）
{
        this->hide();
        MainWindow h;
        mainwindow3.show();
        this->hide();
}

void MainWindow::on_pushButton_4_clicked()                         //第三个Button 外部基带信号         （push_Button_4 ->MainWindow4）
{
        this->hide();
        MainWindow h;
        mainwindow4.show();
        this->hide();
}

void MainWindow::on_pushButton_5_clicked()                          //第四个Button 信道参数                  （push_Button_5 ->MainWindow5）
{
        this->hide();
        MainWindow h;
        mainwindow5.show();
        this->hide();
}

void MainWindow::on_pushButton_6_clicked()                           //第五个Button 噪声设置                   （push_Button_6 ->MainWindow6）
{
        this->hide();
        MainWindow h;
        mainwindow6.show();
        this->hide();
}

void MainWindow::on_pushButton_7_clicked()                           //第六个Button 正交调制                    （push_Button_7 ->MainWindow7）
{
        this->hide();
        MainWindow h;
        mainwindow7.show();
        this->hide();
}

void MainWindow::on_pushButton_8_clicked()                            //第七个Button 中频输出       （push_Button_8 ->MainWindow8）
{
        this->hide();
        MainWindow h;
        mainwindow8.show();
        this->hide();
}
