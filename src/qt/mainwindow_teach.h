#ifndef MAINWINDOW_TEACH_H
#define MAINWINDOW_TEACH_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include "dialog1.h"
#include "../headers/tests_main_header.h"
#include <QDesktopServices>
#include "dialog2.h"

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

    void init_table();

    void remove_table();

    void on_actionGet_Help_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionAbout_triggered();

    void init_q();

    void remove_q();

    void refresh_q();

    void on_pushButton_Rem_Q_clicked();

    void on_pushButton_Add_Q_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    int get_question_id(int);

    void on_pushButton_apply_clicked();

    void on_lineA1_textChanged(const QString &arg1);

    void on_lineA2_textChanged(const QString &arg1);

    void on_lineA3_textChanged(const QString &arg1);

    void on_lineA4_textChanged(const QString &arg1);

    void on_textEdit_textChanged();

    void on_radioButton_A1_clicked();

    void on_radioButton_A2_clicked();

    void on_radioButton_A3_clicked();

    void on_radioButton_A4_clicked();

    int check_all_fields();

    void on_MainWindow_teach_destroyed();

    int check_marks_fields();

private:
    Ui::MainWindow_teach *ui;
    Dialog1 *dialog1;
    Dialog2 *dialog2;
};

#endif // MAINWINDOW_TEACH_H
