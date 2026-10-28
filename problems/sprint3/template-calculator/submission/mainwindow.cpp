#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->l_result->setText("0");
    ui->l_memory->setText("");
    ui->l_formula->setText("");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::SetInputText(const std::string& text) {
    ui->l_result->setStyleSheet("");
    ui->l_result->setText(QString::fromStdString(text));
}

void MainWindow::SetErrorText(const std::string& text) {
    ui->l_result->setStyleSheet("color: red;");
    ui->l_result->setText(QString::fromStdString(text));
}

void MainWindow::SetFormulaText(const std::string& text) {
    ui->l_formula->setText(QString::fromStdString(text));
}

void MainWindow::SetMemText(const std::string& text) {
    ui->l_memory->setText(QString::fromStdString(text));
}

void MainWindow::SetExtraKey(const std::optional<std::string>& key) {
    if (key == std::nullopt) {
        ui->tb_extra->setVisible(false);
        return;
    }
    ui->tb_extra->setVisible(true);
}

void MainWindow::SetDigitKeyCallback(std::function<void(int key)> cb) {
    digit_cb_ = cb;
}

void MainWindow::SetProcessOperationKeyCallback(std::function<void(Operation key)> cb) {
    operation_cb_ = cb;
}

void MainWindow::SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb) {
    control_cb_ = cb;
}

void MainWindow::SetControllerCallback(std::function<void(ControllerType controller)> cb) {
    controller_cb_ = cb;
}

void MainWindow::on_btn_zero_clicked()
{
    digit_cb_(0);
}

void MainWindow::on_btn_one_clicked()
{
    digit_cb_(1);
}

void MainWindow::on_btn_two_clicked()
{
    digit_cb_(2);
}

void MainWindow::on_btn_three_clicked()
{
    digit_cb_(3);
}

void MainWindow::on_btn_four_clicked()
{
    digit_cb_(4);
}

void MainWindow::on_btn_five_clicked()
{
    digit_cb_(5);
}

void MainWindow::on_btn_six_clicked()
{
    digit_cb_(6);
}

void MainWindow::on_btn_seven_clicked()
{
    digit_cb_(7);
}

void MainWindow::on_btn_eight_clicked()
{
    digit_cb_(8);
}

void MainWindow::on_btn_nine_clicked()
{
    digit_cb_(9);
}

void MainWindow::on_btn_negate_clicked()
{
    control_cb_(ControlKey::PLUS_MINUS);
}

void MainWindow::on_btn_backspace_clicked()
{
    control_cb_(ControlKey::BACKSPACE);
}

void MainWindow::on_btn_power_clicked()
{
    operation_cb_(Operation::POWER);
}

void MainWindow::on_btn_divide_clicked()
{
    operation_cb_(Operation::DIVISION);
}

void MainWindow::on_btn_multiplicate_clicked()
{
    operation_cb_(Operation::MULTIPLICATION);
}

void MainWindow::on_btn_substract_clicked()
{
    operation_cb_(Operation::SUBTRACTION);
}

void MainWindow::on_btn_add_clicked()
{
    operation_cb_(Operation::ADDITION);
}

void MainWindow::on_btn_equal_clicked()
{
    control_cb_(ControlKey::EQUALS);
}

void MainWindow::on_btn_c_clicked()
{
    control_cb_(ControlKey::CLEAR);
}

void MainWindow::on_btn_ms_clicked()
{
    control_cb_(ControlKey::MEM_SAVE);
}

void MainWindow::on_btn_mc_clicked()
{
    control_cb_(ControlKey::MEM_CLEAR);
}

void MainWindow::on_btn_mr_clicked()
{
    control_cb_(ControlKey::MEM_LOAD);
}

void MainWindow::on_cmb_controller_currentIndexChanged(int index)
{
    if (index <= 3) {
        ui->tb_extra->setVisible(false);
    } else if (index >= 4 && index <= 5) {
        ui->tb_extra->setText(".");
        ui->tb_extra->setVisible(true);
    } else {
        ui->tb_extra->setText("/");
        ui->tb_extra->setVisible(true);
    }
    controller_cb_(ControllerType(index));
}

void MainWindow::on_tb_extra_clicked()
{
    control_cb_(ControlKey::EXTRA_KEY);
}

