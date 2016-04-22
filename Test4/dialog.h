#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>
#include<QGridLayout>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QPushButton *fileBtn;
    QLineEdit*fileLineEdit;
    QGridLayout *mainLayout;

   // QPushButton*colorBtn;//color部分
 //   QFrame*colorFrame;



private slots:
    void showFile();
  //  void showColor();


};

#endif // DIALOG_H
