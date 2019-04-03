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

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Initializing variables */
    FILE *fp;
    QString login, pass;

    /* I/O flow */
    if ((fp = fopen("remember.lp", "rb")) != nullptr) {
        Ui::Log_pass str;
        fread(&str, sizeof(str), 1, fp);
        login = str.login;
        pass = str.pass;
        if (login != "" && pass != "") {
            ui->lineLogin->setText(login);
            ui->linePass->setText(pass);
            ui->checkBox->setCheckState(Qt::CheckState::Checked);
            // MainWindow::on_pushButtonSignIn_clicked();
        }
        fclose(fp);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSignIn_clicked()
{
    /* Initializing variables */
    QString login, pass;

    /* I/O flow */
    login = ui->lineLogin->text();
    pass = ui->linePass->text();

    if (login == "admin" && pass == "6585") {
        QMessageBox::about(this, "Succesful login!", "Hello, Anatoliy Borisovish!");
        if (ui->checkBox->checkState()) {
            FILE *fp;
            if ((fp = fopen("remember.lp", "wb")) == nullptr) {
                QMessageBox::critical(this, "Error!", "Couldn't save your login and password. \"Remember me\" feature won't work for some reason");
            } else {
                Ui::Log_pass str;
                QByteArray array = login.toLocal8Bit();
                strcpy(str.login, array.data());
                array = pass.toLocal8Bit();
                strcpy(str.pass, array.data());
//                str.login = login;
//                str.pass = pass;
                fwrite(&str, sizeof(str), 1, fp);
                fclose(fp);
            }
        } else {
            FILE *fp = fopen("remember.lp", "wb");
            fclose(fp);
        }
    } else {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::critical(this, "Error!", "Wrong login or password!", QMessageBox::Yes);
        if (reply == QMessageBox::Yes) {
            ui->linePass->setText("");
        }
    }
}

void MainWindow::on_pushButtonSignUp_clicked()
{
    /* Main part */
    hide();
    dialog1 = new Dialog1(this);
    dialog1->SetLogin(ui->lineLogin->text());
    dialog1->SetPass(ui->linePass->text());
    dialog1->show();
}

void MainWindow::on_lineLogin_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->linePass->text() != "") {
        ui->pushButtonSignIn->setEnabled(true);
    } else {
        ui->pushButtonSignIn->setEnabled(false);
    }
}

void MainWindow::on_linePass_textChanged(const QString &arg1)
{
    /* Main part */
    if (arg1 != "" && ui->lineLogin->text() != "") {
        ui->pushButtonSignIn->setEnabled(true);
    } else {
        ui->pushButtonSignIn->setEnabled(false);
    }
}
