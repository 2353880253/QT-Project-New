#include "mainwindow.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
     //w.show();
    // MainWindow *main_window = new MainWindow();
   // main_window->show();
   /**************/
    MainWindow w;
    Dialog2 dialog;
    w.GetDlgPtr(&dialog);
    if(dialog.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }

    else return 0;
    /********************/
    //return a.exec();
}
