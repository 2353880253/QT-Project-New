#include "mainwindow.h"
#include "ui_dialog2.h"
#include "dialog1.h"
#include <QMessageBox>
#include<QDebug>


Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()

{
    delete ui;
}

/*void Dialog2::closeAllWidgets()   //返回主界面函数
{
    foreach(QWidget *widget,QApplication::topLevelWidgets())
    {
        if(widget->isWindow()&&widget != this)
        {
            widget->close();
        }
    }
}*/
/*void Dialog2::GetDlgPtr(MainWindow*dlgptr)
{
    dlg2 = dlgptr;
}*/

void Dialog2::on_Dialog2_pushButton_clicked()
{

   // close();
    //Dialog2 dlg2;
    //if(dlg2.exec() == QDialog::Accepted)show();





   /* this->hide();
     MainWindow dlg(this);
    int res = dlg.exec();
        if (res ==   MainWindow::Accepted)
        {
            QMessageBox::information(this, "INFORMATION", "You clicked OK button!");
        }
        if (res ==   MainWindow::Rejected)
        {
            QMessageBox::information(this, "INFORMATION", "You clicked CANCEL button!");
        }
        this->show();*/

   // MainWindow *window = new MainWindow();
  //  window->show();

         accept();

}
