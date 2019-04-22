#ifndef MAINWINDOW_STUD_H
#define MAINWINDOW_STUD_H

#include <QMainWindow>
#include "dialog3.h"
#include <QMessageBox>
#include "../headers/tests_main_header.h"

namespace Ui {
class MainWindow_stud;
}

class MainWindow_stud : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_stud(QWidget *parent = nullptr);
    ~MainWindow_stud();
    void practice(int);
    void training(int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow_stud *ui;
    Dialog3 *dialog3;
};

#endif // MAINWINDOW_STUD_H
