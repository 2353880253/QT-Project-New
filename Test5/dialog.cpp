#include "dialog.h"
#include "ui_dialog.h"
#include<QGridLayout>
#include<QFileDialog>
#include<QPushButton>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    fileBtn = new QPushButton;//添加控件
    fileBtn->setText(tr("文件"));
    fileLineEdit = new QLineEdit;

   mainLayout = new QGridLayout(this);//布局设计
   mainLayout->addWidget(fileBtn,0,0);
   mainLayout->addWidget(fileLine,0,1);

   connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFile()));

}

void Dialog::showFile()
{

}


Dialog::~Dialog()
{
    delete ui;
}
