/********************************************************************************
** Form generated from reading UI file 'mainwindow_teach.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TEACH_H
#define UI_MAINWINDOW_TEACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_teach
{
public:
    QAction *actionNew_Database;
    QAction *actionOpen_Database;
    QAction *actionClose_Database;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionGet_Help;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionStudents;
    QAction *actionQuestions;
    QAction *actionStudents_2;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QWidget *page_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuWindow;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow_teach)
    {
        if (MainWindow_teach->objectName().isEmpty())
            MainWindow_teach->setObjectName(QString::fromUtf8("MainWindow_teach"));
        MainWindow_teach->resize(800, 600);
        actionNew_Database = new QAction(MainWindow_teach);
        actionNew_Database->setObjectName(QString::fromUtf8("actionNew_Database"));
        actionOpen_Database = new QAction(MainWindow_teach);
        actionOpen_Database->setObjectName(QString::fromUtf8("actionOpen_Database"));
        actionClose_Database = new QAction(MainWindow_teach);
        actionClose_Database->setObjectName(QString::fromUtf8("actionClose_Database"));
        actionCut = new QAction(MainWindow_teach);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow_teach);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow_teach);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionGet_Help = new QAction(MainWindow_teach);
        actionGet_Help->setObjectName(QString::fromUtf8("actionGet_Help"));
        actionAbout = new QAction(MainWindow_teach);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow_teach);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionStudents = new QAction(MainWindow_teach);
        actionStudents->setObjectName(QString::fromUtf8("actionStudents"));
        actionQuestions = new QAction(MainWindow_teach);
        actionQuestions->setObjectName(QString::fromUtf8("actionQuestions"));
        actionQuestions->setCheckable(true);
        actionStudents_2 = new QAction(MainWindow_teach);
        actionStudents_2->setObjectName(QString::fromUtf8("actionStudents_2"));
        actionStudents_2->setCheckable(true);
        actionStudents_2->setChecked(true);
        actionExit = new QAction(MainWindow_teach);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow_teach);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 390, 80, 26));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 390, 80, 26));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(350, 40, 361, 291));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 270, 85, 24));
        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(420, 270, 85, 24));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow_teach->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_teach);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        MainWindow_teach->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow_teach);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow_teach->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Database);
        menuFile->addAction(actionOpen_Database);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_Database);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionGet_Help);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        menuWindow->addAction(actionStudents_2);
        menuWindow->addAction(actionQuestions);

        retranslateUi(MainWindow_teach);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow_teach);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_teach)
    {
        MainWindow_teach->setWindowTitle(QApplication::translate("MainWindow_teach", "Teacher's mode", nullptr));
        actionNew_Database->setText(QApplication::translate("MainWindow_teach", "New Database", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew_Database->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + N</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew_Database->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_Database->setText(QApplication::translate("MainWindow_teach", "Open Database", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen_Database->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + O</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen_Database->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_Database->setText(QApplication::translate("MainWindow_teach", "Close Database", nullptr));
        actionCut->setText(QApplication::translate("MainWindow_teach", "Cut", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + X</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow_teach", "Copy", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + C</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow_teach", "Paste", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + V</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionGet_Help->setText(QApplication::translate("MainWindow_teach", "Get Help", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow_teach", "About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow_teach", "About Qt", nullptr));
        actionStudents->setText(QApplication::translate("MainWindow_teach", "Students", nullptr));
        actionQuestions->setText(QApplication::translate("MainWindow_teach", "Questions", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuestions->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + 2</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuestions->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+2", nullptr));
#endif // QT_NO_SHORTCUT
        actionStudents_2->setText(QApplication::translate("MainWindow_teach", "Students", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStudents_2->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + 1</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStudents_2->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+1", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow_teach", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + Q</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton->setText(QApplication::translate("MainWindow_teach", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow_teach", "PushButton", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow_teach", "Student", nullptr));
        checkBox->setText(QApplication::translate("MainWindow_teach", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow_teach", "CheckBox", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow_teach", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow_teach", "Edit", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow_teach", "Help", nullptr));
        menuWindow->setTitle(QApplication::translate("MainWindow_teach", "Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_teach: public Ui_MainWindow_teach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TEACH_H
