#include "dialog.h"
#include "ui_dialog.h"
#include <QGridLayout>
#include<QFileDialog>
#include<QPushButton>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    fileBtn = new QPushButton;//Button 初始化
    fileBtn->setText(("文件标准对话框实例") );
    fileLineEdit = new QLineEdit;//用来显示选择的文件

    mainLayout = new QGridLayout(this);//布局设计
    mainLayout->addWidget(fileBtn,0,0);
    mainLayout->addWidget(fileLineEdit,0,1);



   connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFile()));

  /* colorBtn = new QPushButton;
   colorBtn->setText(tr("颜色标准"));
   colorFrame = new QFrame;
   colorFrame->setFrameshape(QFrame::Box);
   colorFrame->setAutoFillBackground(true);

*/


}

void Dialog::showFile()
{
    QString s = QFileDialog::getOpenFileName(this,"open file dialog","/","C++ file(*.cpp)::C files(*.c)::Head files(*.h)");
    fileLineEdit->setText(s);
}






Dialog::~Dialog()
{
    delete ui;
}
