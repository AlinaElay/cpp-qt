#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btn_input_clicked()
{
    ui->lbl_result->setText(QString("Привет из Qt, ") + ui->le_input->text() + "!");
}

