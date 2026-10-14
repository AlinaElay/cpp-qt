#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::SetText(const QString &text) {
    QString result_of_normalize = RemoveLeadingZeroes(text);
    result_of_normalize = NormalizeNumber(result_of_normalize);
    input_number_ = result_of_normalize;
    ui->l_result->setText(input_number_);
    active_number_ = input_number_.toDouble();
}

void MainWindow::AddText(const QString &suffix) {
    input_number_ += suffix;
    SetText(input_number_);
    if (current_operation_ == Operation::NO_OPERATION) {
        ui->l_formula->setText("");
    }
}

QString MainWindow::RemoveLeadingZeroes(const QString &text) const {
    for (qsizetype i = 0; i < text.size(); ++i) {
        if (text[i] != '0') {
            return text.mid(i);
        }
    }
    return "";
}

QString MainWindow::NormalizeNumber(const QString &text) const {
    if (text.isEmpty()) {
        return "0";
    }
    if (text == "-" || text == "" || text == "-0") {
        return "0";
    }
    if (text.startsWith('.')) {
        // Рекурсивный вызов.
        return NormalizeNumber("0" + text);
    }
    if (text.startsWith('-')) {
        // Рекурсивный вызов.
        return "-" + NormalizeNumber(text.mid(1));
    }
    if (text.startsWith('0') && !text.startsWith("0.")) {
        return NormalizeNumber(RemoveLeadingZeroes(text));
    }
    return text;
}

void MainWindow::SetOperation(Operation op) {
    if (current_operation_ == Operation::NO_OPERATION) {
        calculator_.Set(active_number_);
        ui->l_formula->setText(QString("%1 %2").arg(calculator_.GetNumber()).arg(OpToString(current_operation_)));
        input_number_ = "";
    }
    current_operation_ = op;
    ui->l_formula->setText(QString("%1 %2").arg(calculator_.GetNumber()).arg(OpToString(current_operation_)));
}

QString MainWindow::OpToString(Operation op) {
    switch(op) {
        case Operation::NO_OPERATION: return "";
        case Operation::ADDITION: return "+";
        case Operation::DIVISION: return "÷";
        case Operation::MULTIPLICATION: return "×";
        case Operation::SUBTRACTION: return "−";
        case Operation::POWER: return "^";
    }
}

void MainWindow::on_btn_zero_clicked()
{
    AddText("0");
}

void MainWindow::on_btn_one_clicked()
{
    AddText("1");
}

void MainWindow::on_btn_two_clicked()
{
    AddText("2");
}

void MainWindow::on_btn_three_clicked()
{
    AddText("3");
}

void MainWindow::on_btn_four_clicked()
{
    AddText("4");
}

void MainWindow::on_btn_five_clicked()
{
    AddText("5");
}

void MainWindow::on_btn_six_clicked()
{
    AddText("6");
}

void MainWindow::on_btn_seven_clicked()
{
    AddText("7");
}

void MainWindow::on_btn_eight_clicked()
{
    AddText("8");
}

void MainWindow::on_btn_nine_clicked()
{
    AddText("9");
}

void MainWindow::on_btn_comma_clicked()
{
    if (input_number_.contains('.')) {
        return;
    }
    AddText(".");
}

void MainWindow::on_btn_negate_clicked()
{
    if (input_number_.isEmpty()) {
        return;
    }
    QString result = input_number_;
    if (input_number_.startsWith("-")) {
        result = input_number_.mid(1);
        SetText(result);
        return;
    }
    SetText("-" + result);

}

void MainWindow::on_btn_backspace_clicked()
{
    if(!input_number_.isEmpty()){
        input_number_.chop(1);
        SetText(input_number_);
        return;
    }
}

void MainWindow::on_btn_power_clicked()
{
    SetOperation(Operation::POWER);
}


void MainWindow::on_btn_divide_clicked()
{
    SetOperation(Operation::DIVISION);
}


void MainWindow::on_btn_multiplicate_clicked()
{
    SetOperation(Operation::MULTIPLICATION);
}


void MainWindow::on_btn_substract_clicked()
{
    SetOperation(Operation::SUBTRACTION);
}


void MainWindow::on_btn_add_clicked()
{
    SetOperation(Operation::ADDITION);
}

void MainWindow::on_btn_equal_clicked()
{
    if (current_operation_ == Operation::NO_OPERATION) {
        return;
    }
    ui->l_formula->setText(QString("%1 %2 %3 =").arg(calculator_.GetNumber()).arg(OpToString(current_operation_)).arg(active_number_));
    switch(current_operation_) {
        case Operation::ADDITION:
            calculator_.Add(active_number_);
            break;
        case Operation::DIVISION:
            calculator_.Div(active_number_);
            break;
        case Operation::MULTIPLICATION:
            calculator_.Mul(active_number_);
            break;
        case Operation::SUBTRACTION:
            calculator_.Sub(active_number_);
            break;
        case Operation::POWER:
            calculator_.Pow(active_number_);
            break;
        default:
            break;
    }
    active_number_ = calculator_.GetNumber();
    ui->l_result->setText(QString::number(active_number_));
    input_number_ = "";
    current_operation_ = Operation::NO_OPERATION;
}
void MainWindow::on_btn_c_clicked()
{
    current_operation_ = Operation::NO_OPERATION;
    ui->l_formula->setText("");
    SetText("");
}


void MainWindow::on_btn_ms_clicked()
{
    memory_ = active_number_;
    is_in_memory_ = true;
    ui->l_memory->setText("M");
}


void MainWindow::on_btn_mc_clicked()
{
    is_in_memory_ = false;
    ui->l_memory->setText("");
}


void MainWindow::on_btn_mr_clicked()
{
    if (!is_in_memory_) {
        return;
    }
    active_number_ = memory_;
    ui->l_result->setText(QString::number(memory_));
    if (current_operation_ == Operation::NO_OPERATION) {
        ui->l_formula->setText("");
    }
    input_number_ = "";
}

