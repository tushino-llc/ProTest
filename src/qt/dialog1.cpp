/*
ProTest — free powerful program for educational tests
Copyright © 2019 Tushino Software LLC

This file is part of ProTest.

ProTest is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

ProTest is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ProTest. If not, see <https://www.gnu.org/licenses/>.
*/

#include "dialog1.h"
#include "../build-qt-Desktop-Debug/ui_dialog1.h"
#include "mainwindow.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    /* Main part */
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::SetLogin(class QString str) {

    /* Initializing variables */
    ui->lineEditLogin->setText(str);
}

void Dialog1::SetPass(class QString str) {

    /* Initializing variables */
    ui->lineEditPass->setText(str);
    ui->lineEditPass->setStyleSheet("");
    ui->lineEditPass_2->setStyleSheet("");
}

void Dialog1::on_lineEditPass_2_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineEditFN->text() != "" && ui->lineEditLN->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditLogin->text() != "" &&
            (ui->radioStudent->isChecked() || ui->radioTeacher->isChecked())) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }

    if (ui->lineEditPass->text() != "") {
        if (arg1 != ui->lineEditPass->text()) {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(255, 255, 0); selection-background-color: rgb(250, 150, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(255, 255, 0); selection-background-color: rgb(250, 150, 0); }");
        } else {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
        }
    }

    if (arg1 == "") {
        ui->lineEditPass->setStyleSheet("");
        ui->lineEditPass_2->setStyleSheet("");
    }
}

void Dialog1::on_lineEditPass_2_editingFinished()
{
    /* Main part */
    if (ui->lineEditPass_2->text() != "" && ui->lineEditPass->text() != ""){
        if (ui->lineEditPass_2->text() != ui->lineEditPass->text()) {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(255, 80, 80); selection-background-color: rgb(255, 0, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(255, 80, 80); selection-background-color: rgb(255, 0, 0); }");
        } else {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
        }

        if (ui->lineEditPass_2->text() == "") {
            ui->lineEditPass->setStyleSheet("");
            ui->lineEditPass_2->setStyleSheet("");
        }
    }
}

void Dialog1::on_lineEditFN_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineEditLN->text() != "" && ui->lineEditLogin->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            (ui->radioStudent->isChecked() || ui->radioTeacher->isChecked())) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }
}

void Dialog1::on_lineEditLN_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineEditFN->text() != "" && ui->lineEditLogin->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            (ui->radioStudent->isChecked() || ui->radioTeacher->isChecked())) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }
}

void Dialog1::on_lineEditLogin_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineEditFN->text() != "" && ui->lineEditLN->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            (ui->radioStudent->isChecked() || ui->radioTeacher->isChecked())) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }
}

void Dialog1::on_lineEditPass_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineEditFN->text() != "" && ui->lineEditLogin->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            (ui->radioStudent->isChecked() || ui->radioTeacher->isChecked())) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }

    if (ui->lineEditPass_2->text() != "") {
        if (arg1 != ui->lineEditPass_2->text() && ui->lineEditPass_2->text() != "") {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(255, 255, 0); selection-background-color: rgb(250, 150, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(255, 255, 0); selection-background-color: rgb(250, 150, 0); }");
        } else {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
        }
    }

    if (arg1 == "") {
        ui->lineEditPass->setStyleSheet("");
        ui->lineEditPass_2->setStyleSheet("");
    }

}

void Dialog1::on_radioStudent_toggled(bool checked)
{
    /* Main part */
    if (ui->lineEditFN->text() != "" && ui->lineEditLN->text() != "" && ui->lineEditLogin->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            checked == true) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }
}

void Dialog1::on_radioTeacher_toggled(bool checked)
{
    /* Main part */
    if (ui->lineEditFN->text() != "" && ui->lineEditLN->text() != "" && ui->lineEditLogin->text() != "" &&
            ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "" &&
            checked == true) {
        ui->pushSignUp->setEnabled(true);
    } else {
        ui->pushSignUp->setEnabled(false);
    }
}

void Dialog1::on_lineEditPass_editingFinished()
{
    /* Main part */
    if (ui->lineEditPass->text() != "" && ui->lineEditPass_2->text() != "") {
        if (ui->lineEditPass_2->text() != ui->lineEditPass->text()) {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(255, 80, 80); selection-background-color: rgb(255, 0, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(255, 80, 80); selection-background-color: rgb(255, 0, 0); }");
        } else {
            ui->lineEditPass->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
            ui->lineEditPass_2->setStyleSheet("QLineEdit {background: rgb(150, 255, 0); selection-background-color: rgb(100, 250, 0); }");
        }
    }
}

void Dialog1::on_pushSignUp_clicked()
{

    /* Initializing variables */
    char *login, *pass, *fn, *ln, *hel = new char[100], *q1;
    strcpy(hel, "Hello, ");
    QString temp, Qlogin, Qpass;
    QByteArray temp_ba;
    QMessageBox::StandardButton reply;

    /* Main part */
    if (ui->lineEditPass->text() == ui->lineEditPass_2->text()) {
        Qlogin = ui->lineEditLogin->text();
        temp_ba = Qlogin.toLocal8Bit();
        login = strdup(temp_ba);

        Qpass = ui->lineEditPass->text();
        temp_ba = Qpass.toLocal8Bit();
        pass = strdup(temp_ba);

        temp = ui->lineEditFN->text();
        temp_ba = temp.toLocal8Bit();
        fn = strdup(temp_ba);

        temp = ui->lineEditLN->text(); 
        temp_ba = temp.toLocal8Bit();
        ln = strdup(temp_ba);

        q1 = new char[strlen("Is that OK?\n\nLogin: \nFirst name: \nLast name: \n") + strlen(login) + strlen(fn) + strlen(ln)];
        strcpy(q1, "");
        strcat(q1, "Is that OK?\n\nLogin: ");
        strcat(q1, login);
        strcat(q1, "\nFirst name: ");
        strcat(q1, fn);
        strcat(q1, "\nLast name: ");
        strcat(q1, ln);

        reply = QMessageBox::question(this, "Sign Up", q1, QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            QMessageBox::about(this, "Done!", "Signed up successfully!");
            strcat(hel, fn);
            strcat(hel, " ");
            strcat(hel, ln);
            QMessageBox::about(this, "Successfull sign up!", hel);

            /* Forum's code */
            QObject *p = this;
            do
            {
                p = p->parent();
                } while (p->parent() != nullptr);

            MainWindow *mw = qobject_cast<MainWindow *>(p);
            if (!mw)
            {
                // couldnt find main window
            }
            else
            {
                mw->SetLogin(Qlogin);
                mw->SetPass(Qpass);
                mw->show();
                hide();

                this->hide();
            }
        }

        free(q1);
        free(login);
        free(pass);
        free(fn);
        free(ln);
        free(hel);
    } else {
        QMessageBox::critical(this, "Error!", "Password mismatch!");
    }

}
