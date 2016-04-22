/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QPushButton *Dialog2_pushButton;
    QLabel *label;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(400, 300);
        Dialog2_pushButton = new QPushButton(Dialog2);
        Dialog2_pushButton->setObjectName(QStringLiteral("Dialog2_pushButton"));
        Dialog2_pushButton->setGeometry(QRect(100, 120, 141, 101));
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 40, 67, 16));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        Dialog2_pushButton->setText(QApplication::translate("Dialog2", "\350\277\224\345\233\236\344\270\273\347\252\227\345\217\243", 0));
        label->setText(QApplication::translate("Dialog2", "dialog2", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
