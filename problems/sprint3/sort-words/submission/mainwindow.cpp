#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rb_asc_clicked()
{
    // Ваш код.
    if (!ui->rb_asc->isChecked()) {
        ui->rb_asc->setChecked(true);
    }
}

void MainWindow::on_rb_desc_clicked()
{
    // Ваш код.
    if (!ui->rb_desc->isChecked()) {
        ui->rb_desc->setChecked(true);
    }
}

void MainWindow::on_cb_case_clicked()
{
    // Ваш код.
    if (!ui->cb_case->isChecked()) {
        ui->cb_case->setChecked(true);
    } else {
        ui->cb_case->setChecked(false);
    }
}

void MainWindow::on_le_unsorted_textChanged(const QString&)
{
    // Ваш код.
    QString str_of_form = ui->le_unsorted->text();
    QStringList list_sorted = str_of_form.split(" ");
    auto sort_rule = [&](QString word1, QString word2) {
        if (!ui->cb_case->isChecked() && ui->rb_asc->isChecked()) {
            return QString::compare(word1, word2, Qt::CaseInsensitive) < 0;
        } else  if (!ui->cb_case->isChecked() && ui->rb_desc->isChecked()) {
            return QString::compare(word1, word2, Qt::CaseInsensitive) > 0;
        } else if (ui->cb_case->isChecked() && ui->rb_asc->isChecked()){
            return QString::compare(word1, word2, Qt::CaseSensitive) < 0;
        } else if (ui->cb_case->isChecked() && ui->rb_desc->isChecked()){
            return QString::compare(word1, word2, Qt::CaseSensitive) > 0;
        }
    };
    std::sort(list_sorted.begin(), list_sorted.end(), sort_rule);
    QString new_str = "";
    for (int i = 0; i < list_sorted.size(); i++) {
        new_str += list_sorted[i] + " ";
    }
    ui->le_sorted->setText(new_str);
}
