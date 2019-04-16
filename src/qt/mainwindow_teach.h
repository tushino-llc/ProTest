#ifndef MAINWINDOW_TEACH_H
#define MAINWINDOW_TEACH_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include "dialog1.h"

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

private:
    Ui::MainWindow_teach *ui;
};

#endif // MAINWINDOW_TEACH_H
