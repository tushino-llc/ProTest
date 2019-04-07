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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
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
    QAction *actionLog_out;
    QAction *actionAllow;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineFN;
    QLabel *label_3;
    QLineEdit *lineLN;
    QLabel *label;
    QLineEdit *lineLogin;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *lineLoops;
    QLineEdit *lineArrays;
    QLineEdit *lineStrings;
    QLabel *label_8;
    QLabel *label_7;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLineEdit *lineRecursion;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *lineStructures;
    QLineEdit *lineFiles;
    QLineEdit *lineMean;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *linePointers;
    QLineEdit *lineDyn_Mem;
    QLineEdit *lineFinal;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
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
        MainWindow_teach->resize(1133, 654);
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
        actionLog_out = new QAction(MainWindow_teach);
        actionLog_out->setObjectName(QString::fromUtf8("actionLog_out"));
        actionAllow = new QAction(MainWindow_teach);
        actionAllow->setObjectName(QString::fromUtf8("actionAllow"));
        actionAllow->setCheckable(true);
        centralwidget = new QWidget(MainWindow_teach);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(page);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setPointSize(11);
        comboBox->setFont(font);
        comboBox->setEditable(false);

        verticalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineFN = new QLineEdit(groupBox_3);
        lineFN->setObjectName(QString::fromUtf8("lineFN"));
        lineFN->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineFN);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineLN = new QLineEdit(groupBox_3);
        lineLN->setObjectName(QString::fromUtf8("lineLN"));
        lineLN->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineLN);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineLogin = new QLineEdit(groupBox_3);
        lineLogin->setObjectName(QString::fromUtf8("lineLogin"));
        lineLogin->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineLogin);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        lineLoops = new QLineEdit(groupBox_4);
        lineLoops->setObjectName(QString::fromUtf8("lineLoops"));
        lineLoops->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineLoops);

        lineArrays = new QLineEdit(groupBox_4);
        lineArrays->setObjectName(QString::fromUtf8("lineArrays"));
        lineArrays->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineArrays);

        lineStrings = new QLineEdit(groupBox_4);
        lineStrings->setObjectName(QString::fromUtf8("lineStrings"));
        lineStrings->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineStrings);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        lineRecursion = new QLineEdit(groupBox_4);
        lineRecursion->setObjectName(QString::fromUtf8("lineRecursion"));
        lineRecursion->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineRecursion);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        lineStructures = new QLineEdit(groupBox_4);
        lineStructures->setObjectName(QString::fromUtf8("lineStructures"));
        lineStructures->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineStructures);

        lineFiles = new QLineEdit(groupBox_4);
        lineFiles->setObjectName(QString::fromUtf8("lineFiles"));
        lineFiles->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineFiles);


        gridLayout->addLayout(formLayout_3, 0, 1, 1, 1);

        lineMean = new QLineEdit(groupBox_4);
        lineMean->setObjectName(QString::fromUtf8("lineMean"));
        lineMean->setReadOnly(true);

        gridLayout->addWidget(lineMean, 2, 1, 1, 2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_13);

        linePointers = new QLineEdit(groupBox_4);
        linePointers->setObjectName(QString::fromUtf8("linePointers"));
        linePointers->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, linePointers);

        lineDyn_Mem = new QLineEdit(groupBox_4);
        lineDyn_Mem->setObjectName(QString::fromUtf8("lineDyn_Mem"));
        lineDyn_Mem->setReadOnly(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineDyn_Mem);

        lineFinal = new QLineEdit(groupBox_4);
        lineFinal->setObjectName(QString::fromUtf8("lineFinal"));
        lineFinal->setReadOnly(true);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, lineFinal);


        gridLayout->addLayout(formLayout_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_4);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setFont(font);

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox_2);

        splitter->addWidget(groupBox);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 12)
            tableWidget->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 8, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 9, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 10, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 11, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(1, 8, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(1, 9, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(1, 10, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(1, 11, __qtablewidgetitem35);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(2);
        splitter->addWidget(tableWidget);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(90);
        tableWidget->horizontalHeader()->setMinimumSectionSize(35);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(splitter);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 270, 85, 24));
        checkBox_2 = new QCheckBox(page_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(640, 340, 85, 24));
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow_teach->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_teach);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1133, 23));
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
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineFN);
        label_3->setBuddy(lineLN);
        label->setBuddy(lineLogin);
        label_6->setBuddy(lineLoops);
        label_8->setBuddy(lineArrays);
        label_7->setBuddy(lineStrings);
        label_10->setBuddy(lineRecursion);
        label_9->setBuddy(lineStructures);
        label_11->setBuddy(lineFiles);
        label_4->setBuddy(linePointers);
        label_12->setBuddy(lineDyn_Mem);
        label_13->setBuddy(lineFinal);
        label_5->setBuddy(lineMean);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Database);
        menuFile->addAction(actionOpen_Database);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_Database);
        menuFile->addSeparator();
        menuFile->addAction(actionLog_out);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAllow);
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
        actionGet_Help->setText(QApplication::translate("MainWindow_teach", "Get Help (Online)", nullptr));
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
        actionLog_out->setText(QApplication::translate("MainWindow_teach", "Log out", nullptr));
        actionAllow->setText(QApplication::translate("MainWindow_teach", "Allow editing scores", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAllow->setToolTip(QApplication::translate("MainWindow_teach", "<html><head/><body><p>Ctrl+E</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAllow->setShortcut(QApplication::translate("MainWindow_teach", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QApplication::translate("MainWindow_teach", "Choose a student...", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow_teach", "Pavlovsky Anton", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow_teach", "Ahmetich Barab", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow_teach", "Choose a student...", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow_teach", "Credentials", nullptr));
        label_2->setText(QApplication::translate("MainWindow_teach", "First name", nullptr));
        label_3->setText(QApplication::translate("MainWindow_teach", "Last name", nullptr));
        label->setText(QApplication::translate("MainWindow_teach", "Login", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow_teach", "Scores", nullptr));
        label_6->setText(QApplication::translate("MainWindow_teach", "Loops", nullptr));
        label_8->setText(QApplication::translate("MainWindow_teach", "Arrays", nullptr));
        label_7->setText(QApplication::translate("MainWindow_teach", "Strings", nullptr));
        label_10->setText(QApplication::translate("MainWindow_teach", "Recursion", nullptr));
        label_9->setText(QApplication::translate("MainWindow_teach", "Structures", nullptr));
        label_11->setText(QApplication::translate("MainWindow_teach", "Files", nullptr));
        label_4->setText(QApplication::translate("MainWindow_teach", "Pointers and adresses", nullptr));
        label_12->setText(QApplication::translate("MainWindow_teach", "Dynamic memory", nullptr));
        label_13->setText(QApplication::translate("MainWindow_teach", "Final test result", nullptr));
        label_5->setText(QApplication::translate("MainWindow_teach", "Arithmetic mean of all results", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_2->setText(QApplication::translate("MainWindow_teach", "Add student", nullptr));
        pushButton->setText(QApplication::translate("MainWindow_teach", "Remove student", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow_teach", "First name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow_teach", "Last name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow_teach", "Loops", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow_teach", "Arrays", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow_teach", "Strings", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow_teach", "Recursion", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow_teach", "Stuctures", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow_teach", "Files", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow_teach", "Pointers", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow_teach", "Dynamics", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow_teach", "Final test", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow_teach", "Mean", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow_teach", "Anton", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow_teach", "Pavlosvsky", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow_teach", "4.6", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow_teach", "4.9", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow_teach", "4.8", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow_teach", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow_teach", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 7);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow_teach", "4.8", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 8);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow_teach", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 9);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow_teach", "4.9", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(0, 10);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow_teach", "5.0", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(0, 11);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow_teach", "4.73", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow_teach", "Barab", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow_teach", "Ahmetich", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow_teach", "4.7", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(1, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow_teach", "5.3", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(1, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(1, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(1, 6);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(1, 7);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(1, 8);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(1, 9);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(1, 10);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(1, 11);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow_teach", "6", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

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
