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

void MainWindow::on_btn_start_clicked()
{
    const QString str = ui->le_input->text();
    QString rts = str;
    for(int i = 0; i <= str.size() - 1; i++) {
        rts[i] = str[str.size() - 1 - i];
    }
    ui->le_input->setText(rts);
}

