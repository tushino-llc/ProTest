#include "dialog3.h"
#include "../build-qt-Desktop-Debug/ui_dialog3.h"
#include "mainwindow_stud.h"

int tt = 0;

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_Loops_clicked()
{

    /* Main part */
    start(0);
}

void Dialog3::on_pushButton_Arrays_clicked()
{

    /* Main part */
    start(1);
}

void Dialog3::on_pushButton_Strings_clicked()
{

    /* Main part */
    start(2);
}

void Dialog3::on_pushButton_Recursion_clicked()
{

    /* Main part */
    start(3);
}

void Dialog3::on_pushButton_Structures_clicked()
{

    /* Main part */
    start(4);
}

void Dialog3::on_pushButton_Files_clicked()
{

    /* Main part */
    start(5);
}

void Dialog3::on_pushButton_Pointers_clicked()
{

    /* Main part */
    start(6);
}

void Dialog3::on_pushButton_Dyn_Mem_clicked()
{

    /* Main part */
    start(7);
}

void Dialog3::select_test_type(int t) {

    /* Initializing variables */
    extern int tt;
    tt = t;
}

void Dialog3::start(int theme) {

    /* Initializing variables */
    extern int tt;

    /* Main part */
    QObject *p = this;

    p = p->parent();

    MainWindow_stud *mws = qobject_cast<MainWindow_stud *>(p);
    if (!mws)
    {
        // couldnt find main window
    }
    else
    {
        if (tt == 1) {
            mws->practice(theme);
        } else if (!tt) {
            mws->training(theme);
        }

        this->hide();
    }
}
