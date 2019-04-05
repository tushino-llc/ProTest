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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
            MainWindow_teach->setObjectName(QStringLiteral("MainWindow_teach"));
        MainWindow_teach->resize(800, 600);
        actionNew_Database = new QAction(MainWindow_teach);
        actionNew_Database->setObjectName(QStringLiteral("actionNew_Database"));
        actionOpen_Database = new QAction(MainWindow_teach);
        actionOpen_Database->setObjectName(QStringLiteral("actionOpen_Database"));
        actionClose_Database = new QAction(MainWindow_teach);
        actionClose_Database->setObjectName(QStringLiteral("actionClose_Database"));
        actionCut = new QAction(MainWindow_teach);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow_teach);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow_teach);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionGet_Help = new QAction(MainWindow_teach);
        actionGet_Help->setObjectName(QStringLiteral("actionGet_Help"));
        actionAbout = new QAction(MainWindow_teach);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow_teach);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionStudents = new QAction(MainWindow_teach);
        actionStudents->setObjectName(QStringLiteral("actionStudents"));
        actionQuestions = new QAction(MainWindow_teach);
        actionQuestions->setObjectName(QStringLiteral("actionQuestions"));
        actionQuestions->setCheckable(true);
        actionStudents_2 = new QAction(MainWindow_teach);
        actionStudents_2->setObjectName(QStringLiteral("actionStudents_2"));
        actionStudents_2->setCheckable(true);
        actionStudents_2->setChecked(true);
        actionExit = new QAction(MainWindow_teach);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(MainWindow_teach);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 390, 80, 26));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 390, 80, 26));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(350, 40, 361, 291));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 270, 85, 24));
        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(420, 270, 85, 24));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow_teach->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_teach);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        MainWindow_teach->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow_teach);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow_teach->setWindowTitle(QApplication::translate("MainWindow_teach", "Teacher's mode", 0));
        actionNew_Database->setText(QApplication::translate("MainWindow_teach", "New Database", 0));
#ifndef QT_NO_TOOLTIP
        actionNew_Database->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + N</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionNew_Database->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+N", 0));
        actionOpen_Database->setText(QApplication::translate("MainWindow_teach", "Open Database", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_Database->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + O</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOpen_Database->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+O", 0));
        actionClose_Database->setText(QApplication::translate("MainWindow_teach", "Close Database", 0));
        actionCut->setText(QApplication::translate("MainWindow_teach", "Cut", 0));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + X</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow_teach", "Copy", 0));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + C</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow_teach", "Paste", 0));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + V</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionGet_Help->setText(QApplication::translate("MainWindow_teach", "Get Help", 0));
        actionAbout->setText(QApplication::translate("MainWindow_teach", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow_teach", "About Qt", 0));
        actionStudents->setText(QApplication::translate("MainWindow_teach", "Students", 0));
        actionQuestions->setText(QApplication::translate("MainWindow_teach", "Questions", 0));
#ifndef QT_NO_TOOLTIP
        actionQuestions->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + 2</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionQuestions->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+2", 0));
        actionStudents_2->setText(QApplication::translate("MainWindow_teach", "Students", 0));
#ifndef QT_NO_TOOLTIP
        actionStudents_2->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + 1</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionStudents_2->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+1", 0));
        actionExit->setText(QApplication::translate("MainWindow_teach", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl + Q</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+Q", 0));
        pushButton->setText(QApplication::translate("MainWindow_teach", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindow_teach", "PushButton", 0));
        groupBox->setTitle(QApplication::translate("MainWindow_teach", "Student", 0));
        checkBox->setText(QApplication::translate("MainWindow_teach", "CheckBox", 0));
        checkBox_2->setText(QApplication::translate("MainWindow_teach", "CheckBox", 0));
        menuFile->setTitle(QApplication::translate("MainWindow_teach", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow_teach", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow_teach", "Help", 0));
        menuWindow->setTitle(QApplication::translate("MainWindow_teach", "Window", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_teach: public Ui_MainWindow_teach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TEACH_H
