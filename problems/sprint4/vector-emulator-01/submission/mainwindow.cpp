#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ApplyModel();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::ApplyModel() {
    ui->list_widget->clear();
    size_t number_of_element = 0;
    for (const std::string& element_of_vector : vector_model_.items) {
        ui->list_widget->addItem(QString::number(number_of_element) + ": " + QString::fromStdString(element_of_vector));
        number_of_element++;
    }
    if (vector_model_.items.empty()) {
        ui->btn_pop_back->setEnabled(false);
    } else {
        ui->btn_pop_back->setEnabled(true);
    }
    ui->txt_size->setText(QString::number(vector_model_.items.size()));
}

void MainWindow::on_btn_pop_back_clicked()
{
    vector_model_.items.pop_back();
    ApplyModel();
}


void MainWindow::on_btn_push_back_clicked()
{
    std::string new_element = ui->txt_elem_content->text().toStdString();
    vector_model_.items.push_back(new_element);
    ApplyModel();
}


void MainWindow::on_btn_clear_clicked()
{
    vector_model_.items.clear();
    ApplyModel();
}


void MainWindow::on_btn_days_of_week_clicked()
{
    static const std::vector<std::string> days_of_week = {"Понедельник", "Вторник", "Среда", "Четверг",
                                                          "Пятница", "Суббота", "Воскресенье"};
    vector_model_.items = days_of_week;
    ApplyModel();
}

void MainWindow::on_btn_month_clicked()
{
    static const std::vector<std::string> month = {"Январь", "Февраль", "Март", "Апрель", "Май",
                                                   "Июнь", "Июль", "Август", "Сентябрь", "Октябрь",
                                                   "Ноябрь", "Декабрь"};
    vector_model_.items = month;
    ApplyModel();
}

