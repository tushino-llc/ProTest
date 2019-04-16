#include "mainwindow_teach.h"
#include "mainwindow.h"
#include "../build-qt-Desktop-Debug/ui_mainwindow_teach.h"

MainWindow_teach::MainWindow_teach(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_teach)
{
    ui->setupUi(this);
}

MainWindow_teach::~MainWindow_teach()
{
    delete ui;
}

void MainWindow_teach::Set_init_mode(int mode) {

    /* Main part */
    if (!mode) {
        ui->actionStudents_2->setChecked(true);
        ui->actionQuestions->setChecked(false);
        ui->actionAllow->setVisible(true);
        // ui->actionNew_Database->setVisible(false);
        // ui->actionOpen_Database->setVisible(false);
        // ui->actionClose_Database->setVisible(false);
    } else {
        ui->actionStudents_2->setChecked(false);
        ui->actionQuestions->setChecked(true);
        ui->actionAllow->setVisible(false);
        // ui->actionNew_Database->setVisible(true);
        // ui->actionOpen_Database->setVisible(true);
        // ui->actionClose_Database->setVisible(true);
    }


    ui->stackedWidget->setCurrentIndex(mode);
}

void MainWindow_teach::on_actionStudents_2_triggered()
{

    /* Main part */
    Set_init_mode(0);
}

void MainWindow_teach::on_actionQuestions_triggered()
{

    /* Main part */
    Set_init_mode(1);
}

void MainWindow_teach::on_actionExit_triggered()
{

    /* Initializing variables */
    QMessageBox::StandardButton reply;

    /* Main part */
    reply = QMessageBox::question(this, "Teacher's mode", "Are you sure you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        this->close();
    }
}

void MainWindow_teach::on_comboBox_currentIndexChanged(int index)
{
    char a[10];
    sprintf(a, "%d", index);
    ui->lineFN->setText(a);

    ui->pushButton_rm->setEnabled((index) ? true : false);
}

void MainWindow_teach::on_actionAllow_triggered()
{

    /* Main part */
    if ((ui->actionAllow->isChecked())) {
        ui->actionAllow->setChecked(true);
        ui->lineLoops->setReadOnly(false);
        ui->lineArrays->setReadOnly(false);
        ui->lineStrings->setReadOnly(false);
        ui->lineRecursion->setReadOnly(false);
        ui->lineStructures->setReadOnly(false);
        ui->lineFiles->setReadOnly(false);
        ui->linePointers->setReadOnly(false);
        ui->lineDyn_Mem->setReadOnly(false);
        ui->lineFinal->setReadOnly(false);
    } else {
        ui->actionAllow->setChecked(false);
        ui->lineLoops->setReadOnly(true);
        ui->lineArrays->setReadOnly(true);
        ui->lineStrings->setReadOnly(true);
        ui->lineRecursion->setReadOnly(true);
        ui->lineStructures->setReadOnly(true);
        ui->lineFiles->setReadOnly(true);
        ui->linePointers->setReadOnly(true);
        ui->lineDyn_Mem->setReadOnly(true);
        ui->lineFinal->setReadOnly(true);
    }
}

void MainWindow_teach::on_actionLog_out_triggered()
{

    /* Initializing variables */
    QMessageBox::StandardButton reply;

    /* Main part */
    reply = QMessageBox::question(this, "Teacher's mode", "Are you sure you want to log out?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        /* Forum's code */
        QObject *p = this;
        do
        {
            p = p->parent();
            } while (p->parent() != nullptr);

        MainWindow *mw = qobject_cast<MainWindow *>(p);
        if (!mw)
        {
            // couldnt find main window
        }
        else
        {
            mw->show();
            hide();

            this->hide();
        }
    }
}

void MainWindow_teach::on_actionOpen_Database_triggered()
{
    /* Initializing variables */
    QString file_name = QFileDialog::getOpenFileName(this, "Open database", PATH_TO_DB);
    QByteArray arr = file_name.toLocal8Bit();
    char *fnln;
    fnln = new char[513];
    struct User *usr;
    int size;

    /* Main part */
    if (db_open(arr.data()) == 0) {
        usr = db_get_users(&size);
        for (int i = 0; i < size; ++i) {
            strcpy(fnln, "");
            strcat(fnln, (usr + i)->first_name);
            strcat(fnln, " ");
            strcat(fnln, (usr + i)->last_name);
            ui->comboBox->addItem(fnln);
        }
        delete usr;
    } else {
        QMessageBox::critical(this, "Error!", "Couldn't open database!");
    }

    delete fnln;
}
