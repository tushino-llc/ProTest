/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonSignIn;
    QPushButton *pushButtonSignUp;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_4;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineLogin;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *linePass;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(474, 366);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setInputMethodHints(Qt::ImhLatinOnly);
        MainWindow->setDockNestingEnabled(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonSignIn = new QPushButton(centralWidget);
        pushButtonSignIn->setObjectName(QStringLiteral("pushButtonSignIn"));
        pushButtonSignIn->setGeometry(QRect(70, 290, 161, 51));
        QFont font;
        font.setPointSize(15);
        pushButtonSignIn->setFont(font);
        pushButtonSignUp = new QPushButton(centralWidget);
        pushButtonSignUp->setObjectName(QStringLiteral("pushButtonSignUp"));
        pushButtonSignUp->setGeometry(QRect(240, 290, 161, 51));
        pushButtonSignUp->setFont(font);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 250, 151, 22));
        QFont font1;
        font1.setPointSize(11);
        checkBox->setFont(font1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 271, 51));
        QFont font2;
        font2.setPointSize(17);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 10, 191, 61));
        QFont font3;
        font3.setPointSize(40);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 120, 331, 56));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setPointSize(12);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineLogin = new QLineEdit(widget);
        lineLogin->setObjectName(QStringLiteral("lineLogin"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, lineLogin);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(70, 180, 331, 56));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        linePass = new QLineEdit(widget1);
        linePass->setObjectName(QStringLiteral("linePass"));
        linePass->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, linePass);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ProTest", 0));
        pushButtonSignIn->setText(QApplication::translate("MainWindow", "Sign In", 0));
        pushButtonSignUp->setText(QApplication::translate("MainWindow", "Sign Up", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Remember me", 0));
        label->setText(QApplication::translate("MainWindow", "Authorize", 0));
        label_4->setText(QApplication::translate("MainWindow", "ProTest", 0));
        label_2->setText(QApplication::translate("MainWindow", "Login", 0));
        label_3->setText(QApplication::translate("MainWindow", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
