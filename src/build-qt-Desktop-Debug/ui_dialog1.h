/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QLineEdit *lineEdit_3;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QRadioButton *radioButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(391, 483);
        Dialog1->setSizeGripEnabled(false);
        lineEdit_3 = new QLineEdit(Dialog1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 200, 331, 32));
        radioButton_2 = new QRadioButton(Dialog1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(210, 370, 101, 22));
        QFont font;
        font.setPointSize(14);
        radioButton_2->setFont(font);
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 240, 59, 18));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_4 = new QLabel(Dialog1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 10, 191, 61));
        QFont font2;
        font2.setPointSize(40);
        label_4->setFont(font2);
        label_6 = new QLabel(Dialog1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 120, 91, 18));
        label_6->setFont(font1);
        lineEdit_2 = new QLineEdit(Dialog1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 320, 331, 32));
        lineEdit_4 = new QLineEdit(Dialog1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(30, 140, 331, 32));
        radioButton = new QRadioButton(Dialog1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 370, 101, 22));
        radioButton->setFont(font);
        label = new QLabel(Dialog1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 271, 51));
        QFont font3;
        font3.setPointSize(17);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(Dialog1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 260, 331, 32));
        label_5 = new QLabel(Dialog1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 180, 81, 20));
        label_5->setFont(font1);
        label_3 = new QLabel(Dialog1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 300, 81, 20));
        label_3->setFont(font1);
        pushButton = new QPushButton(Dialog1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 413, 331, 51));
        QFont font4;
        font4.setPointSize(16);
        pushButton->setFont(font4);

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Sign Up", 0));
        radioButton_2->setText(QApplication::translate("Dialog1", "Teacher", 0));
        label_2->setText(QApplication::translate("Dialog1", "Login", 0));
        label_4->setText(QApplication::translate("Dialog1", "ProTest", 0));
        label_6->setText(QApplication::translate("Dialog1", "First name", 0));
        radioButton->setText(QApplication::translate("Dialog1", "Student", 0));
        label->setText(QApplication::translate("Dialog1", "Sign up", 0));
        label_5->setText(QApplication::translate("Dialog1", "Last name", 0));
        label_3->setText(QApplication::translate("Dialog1", "Password", 0));
        pushButton->setText(QApplication::translate("Dialog1", "Sign Up", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
