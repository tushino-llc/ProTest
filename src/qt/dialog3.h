#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include "../headers/tests_main_header.h"

extern int tt;

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = nullptr);
    ~Dialog3();
    void select_test_type(int);

private slots:
    void on_pushButton_Loops_clicked();

    void on_pushButton_Arrays_clicked();

    void on_pushButton_Strings_clicked();

    void on_pushButton_Recursion_clicked();

    void on_pushButton_Structures_clicked();

    void on_pushButton_Files_clicked();

    void on_pushButton_Pointers_clicked();

    void on_pushButton_Dyn_Mem_clicked();

    void start(int);

private:
    Ui::Dialog3 *ui;
};

#endif // DIALOG3_H
