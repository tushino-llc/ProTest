#ifndef MAINWINDOW_STUD_H
#define MAINWINDOW_STUD_H

#include <QMainWindow>

namespace Ui {
class MainWindow_stud;
}

class MainWindow_stud : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_stud(QWidget *parent = nullptr);
    ~MainWindow_stud();

private:
    Ui::MainWindow_stud *ui;
};

#endif // MAINWINDOW_STUD_H
