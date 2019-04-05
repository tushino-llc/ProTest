#include "mainwindow_teach.h"
#include "ui_mainwindow_teach.h"

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
    } else {
        ui->actionStudents_2->setChecked(false);
        ui->actionQuestions->setChecked(true);
    }


    ui->stackedWidget->setCurrentIndex(mode);
}

void MainWindow_teach::on_actionStudents_2_triggered(bool checked)
{
    Set_init_mode(0);
}

void MainWindow_teach::on_actionQuestions_triggered(bool checked)
{
    Set_init_mode(1);
}
