#include <QApplication>
#include "mainwindow.h"
#include"mainwindow2.h"
#include "mainwindow3.h"
#include "mainwindow4.h"
#include "mainwindow5.h"
#include "mainwindow6.h"
#include "mainwindow7.h"
#include "mainwindow8.h"
#include "dialog1.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // w.show();
    Dialog1 dialog;
    w.GetDlgPtr(&dialog);
    if(dialog.exec() == QDialog::Accepted){
        w.show();
        return a.exec();
    }

    return a.exec();
}
