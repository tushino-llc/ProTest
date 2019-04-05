#ifndef MAINWINDOW_TEACH_H
#define MAINWINDOW_TEACH_H

#include <QMainWindow>

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
    void on_actionStudents_2_triggered(bool checked);

    void on_actionQuestions_triggered(bool checked);

private:
    Ui::MainWindow_teach *ui;
};

#endif // MAINWINDOW_TEACH_H
