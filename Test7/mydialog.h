#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QWidget>

namespace Ui {
class MyDialog;
}
class MyDialog;//
class MyDialog : public QWidget
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();
    void GetDlgPtr(MyDialog*dlgptr);

private:
    Ui::MyDialog *ui;

 private:
   MyDialog*dlg;

public slots:

    void on_showChildButton_clicked();

 private slots:

    void on_pushButton_clicked();


};

#endif // MYDIALOG_H
