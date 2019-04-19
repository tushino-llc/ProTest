#ifndef MAINWINDOW_TEACH_H
#define MAINWINDOW_TEACH_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include "dialog1.h"
#include "../headers/tests_main_header.h"

namespace Ui {
class MainWindow_teach;
}

class MainWindow_teach : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_teach(QWidget *parent = nullptr);
    ~MainWindow_teach();
    void Set_init_mode(int);
    void refresh_users();

private slots:
    void on_actionStudents_2_triggered();

    void on_actionQuestions_triggered();

    void on_actionExit_triggered();

    void on_comboBox_currentIndexChanged(int index);

    void on_actionAllow_triggered();

    void on_actionLog_out_triggered();

    void on_actionOpen_Database_triggered();

    void on_actionClose_Database_triggered();

    void on_pushButton_add_clicked();

    void init_users();

    void remove_users();

    void on_pushButton_rm_clicked();

    int get_student_id(int);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    double get_mean(int);

    void on_actionRefresh_triggered();

private:
    Ui::MainWindow_teach *ui;
    Dialog1 *dialog1;
};

#endif // MAINWINDOW_TEACH_H
