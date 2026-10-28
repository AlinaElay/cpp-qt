#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

#include <string> //УДАЛИТЬ!!!
#include <iostream> //УДАЛИТЬ!!!

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
    auto preserve_iterator = vector_model_.iterator;
    ui->list_widget->clear();
    size_t number_of_element = 0;
    for (const std::string& element_of_vector : vector_model_.items) {
        ui->list_widget->addItem(QString::number(number_of_element) + ": " + QString::fromStdString(element_of_vector));
        number_of_element++;
    }
    ui->list_widget->addItem(QString("end"));
    vector_model_.iterator = preserve_iterator;
    if (vector_model_.items.empty()) {
        ui->btn_pop_back->setEnabled(false);
    } else {
        ui->btn_pop_back->setEnabled(true);
    }
    ui->txt_size->setText(QString::number(vector_model_.items.size()));
    ui->txt_capacity->setText(QString::number(vector_model_.items.capacity()));
    ApplyIterator();
}

void MainWindow::ApplyIterator() {
    int offset = std::distance(vector_model_.items.begin(), vector_model_.iterator);
    ui->list_widget->setCurrentRow(offset);
    if (vector_model_.iterator == vector_model_.items.end()) {
        ui->btn_edit->setEnabled(false);
        ui->btn_erase->setEnabled(false);
        ui->btn_inc->setEnabled(false);
        ui->txt_elem_content->setText("");
    } else {
        ui->btn_edit->setEnabled(true);
        ui->btn_erase->setEnabled(true);
        ui->btn_inc->setEnabled(true);
        ui->txt_elem_content->setText(QString::fromStdString(*(vector_model_.iterator)));
    }
    if (vector_model_.iterator == vector_model_.items.begin()) {
        ui->btn_dec->setEnabled(false);
    } else {
        ui->btn_dec->setEnabled(true);
    }
}

void MainWindow::on_btn_pop_back_clicked()
{
    vector_model_.items.pop_back();
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_push_back_clicked()
{
    std::string new_element = ui->txt_elem_content->text().toStdString();
    vector_model_.items.push_back(new_element);
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_clear_clicked()
{
    vector_model_.items.clear();
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_days_of_week_clicked()
{
    static const std::vector<std::string> days_of_week = {"Понедельник", "Вторник", "Среда", "Четверг",
                                                          "Пятница", "Суббота", "Воскресенье"};
    vector_model_.items = days_of_week;
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_month_clicked()
{
    static const std::vector<std::string> month = {"Январь", "Февраль", "Март", "Апрель", "Май",
                                                   "Июнь", "Июль", "Август", "Сентябрь", "Октябрь",
                                                   "Ноябрь", "Декабрь"};
    vector_model_.items = month;
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_list_widget_currentRowChanged(int currentRow)
{
    if (currentRow == -1) {
        return;
    }
    vector_model_.iterator = vector_model_.items.begin() + currentRow;

    ApplyIterator();
}


void MainWindow::on_btn_begin_clicked()
{
    vector_model_.iterator = vector_model_.items.begin();
    ApplyIterator();
}


void MainWindow::on_btn_end_clicked()
{
    vector_model_.iterator = vector_model_.items.end();
    ApplyIterator();
}

void MainWindow::on_btn_erase_clicked()
{
    vector_model_.items.erase(vector_model_.iterator);
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_edit_clicked()
{
    std::string element_text = ui->txt_elem_content->text().toStdString();
    *(vector_model_.iterator) = element_text;
    ApplyModel();
}


void MainWindow::on_btn_dec_clicked()
{
    vector_model_.iterator--;
    ApplyIterator();
}


void MainWindow::on_btn_inc_clicked()
{
    vector_model_.iterator++;
    ApplyIterator();
}


void MainWindow::on_btn_insert_clicked()
{
    std::string new_element = ui->txt_elem_content->text().toStdString();
    vector_model_.items.insert(vector_model_.iterator, new_element);
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_reserve_clicked()
{
    vector_model_.items.reserve(ui->txt_capacity->text().toInt());
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}


void MainWindow::on_btn_resize_clicked()
{
    vector_model_.items.resize(ui->txt_size->text().toInt());
    vector_model_.iterator = vector_model_.items.begin();
    ApplyModel();
}

