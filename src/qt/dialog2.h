#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_textEdit_textChanged();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_pushButton_clicked();

    int check_all_stuff();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
