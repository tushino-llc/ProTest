#include "dialog2.h"
#include "../build-qt-Desktop-Debug/ui_dialog2.h"
#include "../headers/tests_main_header.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_comboBox_currentIndexChanged(int index)
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_textEdit_textChanged()
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_lineEdit_textChanged(const QString &arg1)
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_lineEdit_2_textChanged(const QString &arg1)
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_lineEdit_4_textChanged(const QString &arg1)
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_lineEdit_3_textChanged(const QString &arg1)
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_radioButton_clicked()
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_radioButton_2_clicked()
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_radioButton_3_clicked()
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_radioButton_4_clicked()
{
    /* VarCheck */
    check_all_stuff();
}

void Dialog2::on_pushButton_clicked()
{
    /* Initializing variables */
    struct Question quest;
    QByteArray arr;

    /* Main part */
    quest.theme = ui->comboBox->currentIndex() - 1;

    arr = ui->textEdit->toPlainText().toLocal8Bit();
    strcpy(quest.value, arr.data());

    arr = ui->lineEdit->text().toLocal8Bit();
    strcpy(quest.ans[0], arr.data());

    arr = ui->lineEdit_2->text().toLocal8Bit();
    strcpy(quest.ans[1], arr.data());

    arr = ui->lineEdit_3->text().toLocal8Bit();
    strcpy(quest.ans[2], arr.data());

    arr = ui->lineEdit_4->text().toLocal8Bit();
    strcpy(quest.ans[3], arr.data());

    quest.correct = (ui->radioButton->isChecked()) ? 0 : (ui->radioButton_2->isChecked()) ?
                    1 : (ui->radioButton_3->isChecked()) ? 2 : 3;

    if (db_add_question(quest) != -1) {
        this->close();
    } else {
        QMessageBox::critical(this, "Error!", "Couldn't create question!");
    }
}

int Dialog2::check_all_stuff() {

    /* VarCheck */
    if (ui->comboBox->currentIndex() && ui->textEdit->toPlainText() != "" &&
            ui->lineEdit->text() != "" && ui->lineEdit_2->text() != "" && ui->lineEdit_3->text() != "" &&
            ui->lineEdit_4->text() != "" && (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() ||
                                             ui->radioButton_3->isChecked() || ui->radioButton_4->isChecked())) {
        ui->pushButton->setEnabled(true);
    } else {
        ui->pushButton->setEnabled(false);
    }

    /* Retutning value */
    return (ui->pushButton->isEnabled()) ? 1 : 0;
}
