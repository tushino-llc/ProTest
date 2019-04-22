#include "mainwindow_stud.h"
#include "ui_mainwindow_stud.h"
#include "../headers/tests_main_header.h"


MainWindow_stud::MainWindow_stud(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_stud)
{
    ui->setupUi(this);
}

MainWindow_stud::~MainWindow_stud()
{
    delete ui;
}

void MainWindow_stud::on_pushButton_clicked()
{

    /* Initializing variables */
    dialog3 = new Dialog3(this);

    /* Main part */
    dialog3->setModal(true);
    dialog3->show();
    dialog3->select_test_type(0);
}

void MainWindow_stud::on_pushButton_2_clicked()
{

    /* Initializing variables */
    dialog3 = new Dialog3(this);

    /* Main part */
    dialog3->setModal(true);
    dialog3->show();
    dialog3->select_test_type(1);
}

void MainWindow_stud::on_pushButton_3_clicked()
{

    /* Main part */
//    final_test();
}

void MainWindow_stud::practice(int theme) {

    /* Initializing variables */
    int i;
    struct Question *quest = nullptr;
    int q_a[10] = {};

    /* Main part */
    if ((quest = db_get_test(theme))) {
        ui->stackedWidget->setCurrentIndex(1);

        for (i = 0; i < 10; ++i) {
            ui->textEdit->setPlainText((quest + i)->value);
            ui->radioButton->setText((quest + i)->ans[0]);
            ui->radioButton_2->setText((quest + i)->ans[1]);
            ui->radioButton_3->setText((quest + i)->ans[2]);
            ui->radioButton_4->setText((quest + i)->ans[3]);


        }

        delete quest;
    } else {
        QMessageBox::critical(this, "Error!", "Couldn't get test!");
    }
}

void MainWindow_stud::training(int theme) {

    /* Initialzing variables */

    /* Main part */
    QMessageBox::about(this, "", "Training");
}
