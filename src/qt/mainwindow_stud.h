#ifndef MAINWINDOW_STUD_H
#define MAINWINDOW_STUD_H

#include <QMainWindow>
#include "dialog3.h"
#include <QMessageBox>
#include "../headers/tests_main_header.h"
#include <QTableWidget>

extern int q_a[40];
extern int th;
extern int t_T;
extern int uid;

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
    void set_uid(int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_apply_clicked();

    void show_results(int, struct Question *, int *);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void color_row(int, int);

    void on_pushButton_4_clicked();

    void final_test();

    void on_actionLog_out_triggered();

    void on_actionExit_triggered();

    void on_actionGet_help_online_triggered();

    void on_actionAbout_triggered();

    void on_actionAbout_Qt_triggered();

    void new_test_visible(bool);

    void on_actionFiles_2_triggered();

    void on_actionLoops_triggered();

    void on_actionArrays_triggered();

    void on_actionStrings_triggered();

    void on_actionRecursion_triggered();

    void on_actionStructs_triggered();

    void on_actionFiles_triggered();

    void on_actionPointers_triggered();

    void on_actionDynamic_memory_triggered();

    void on_actionLoops_2_triggered();

    void on_actionArrays_2_triggered();

    void on_actionStrings_2_triggered();

    void on_actionRecursion_2_triggered();

    void on_actionStructs_2_triggered();

    void on_actionPointers_2_triggered();

    void on_actionDynamic_memory_2_triggered();

    void on_MainWindow_stud_destroyed();

    void on_actionFinal_test_triggered();

private:
    Ui::MainWindow_stud *ui;
    Dialog3 *dialog3;
};

#endif // MAINWINDOW_STUD_H
