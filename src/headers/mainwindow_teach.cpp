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
