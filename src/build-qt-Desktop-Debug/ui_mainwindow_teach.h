/********************************************************************************
** Form generated from reading UI file 'mainwindow_teach.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TEACH_H
#define UI_MAINWINDOW_TEACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_teach
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_teach)
    {
        if (MainWindow_teach->objectName().isEmpty())
            MainWindow_teach->setObjectName(QStringLiteral("MainWindow_teach"));
        MainWindow_teach->resize(800, 600);
        menubar = new QMenuBar(MainWindow_teach);
        menubar->setObjectName(QStringLiteral("menubar"));
        MainWindow_teach->setMenuBar(menubar);
        centralwidget = new QWidget(MainWindow_teach);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow_teach->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow_teach);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_teach->setStatusBar(statusbar);

        retranslateUi(MainWindow_teach);

        QMetaObject::connectSlotsByName(MainWindow_teach);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_teach)
    {
        MainWindow_teach->setWindowTitle(QApplication::translate("MainWindow_teach", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_teach: public Ui_MainWindow_teach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TEACH_H
