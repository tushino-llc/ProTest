#include "mainwindow_stud.h"
#include "ui_mainwindow_stud.h"

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
