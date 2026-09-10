#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>


void MainWindow::CheckValidity(QLineEdit* elem) {
    bool is_valid = elem->hasAcceptableInput();
    elem->setStyleSheet(is_valid ? "border:1px solid transparent" : "border:1px solid red");
}

int DaysPerMonth(int month, int year)
{
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            return 29; // February in a leap year.
        } else {
            return 28; // February in a non-leap year.
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November have 30 days.
    } else {
        return 31; // All other months have 31 days.
    }
}

int CalculateDaysFromStartYear(int day, int month, int year)
{
    if(month == 0) {
        return 0;
    }
    int num_days = 0;
    for(size_t num_month = 1; num_month < static_cast<size_t>(month); ++num_month) {
        num_days += DaysPerMonth(num_month, year);
    }
    num_days += day;
    return num_days;
}

QString MainWindow::GetFormatType1(int day, int month, int year)
{
    // Реализуйте метод форматирования даты.
    return QString("%1.%2.%3").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(year);
}

QString MainWindow::GetFormatType2(int day, int month, int year)
{
    // Реализуйте метод форматирования даты.
    return QString("%2/%1/%3").arg(day, 2, 10, QChar('0')).arg(month, 2, 10, QChar('0')).arg(year);
}

QString MainWindow::GetFormatType3(int day, int month, int year)
{
    // Реализуйте метод форматирования даты.
    static const std::vector<QString> months = {
                                          "января", "февраля", "марта", "апреля", "мая", "июня",
                                          "июля", "августа", "сентября", "октября", "ноября", "декабря"};
    return QString("%1 %2 %3 года").arg(day, 2, 10, QChar('0')).arg(months[month - 1]).arg(year);
}

QString MainWindow::GetStrNumDays(int num_days, int year) {
    // Метод должен возвращать текст о номере дня в году.
    return QString("Это %1 день в %2 году").arg(num_days).arg(year);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->le_day->setValidator(new QIntValidator(1, 31, this));
    ui->le_month->setValidator(new QIntValidator(1, 12, this));
    ui->le_year->setValidator(new QIntValidator(1, 9999, this));

    SetError("Некорректная дата");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowFormattedDate()
{
    if(!ui->le_day->hasAcceptableInput() ||
        !ui->le_month->hasAcceptableInput() ||
        !ui->le_year->hasAcceptableInput() ) {
        SetError("Некорректная дата");

        return;
    }

    // Отобразим результаты.
    ui->le_date->setText(ui->le_day->text() + ui->le_month->text() + ui->le_year->text());
    int day = ui->le_day->text().toInt();
    int month = ui->le_month->text().toInt();
    int year = ui->le_year->text().toInt();
    // Используйте DaysPerMonth для определения количества дней в месяце.
    if(DaysPerMonth(month, year) < day) {
        SetError("Такой даты не существует");

        return;
    }

    // Используйте CalculateDaysFromStartYear для определения номера дня в году.
    int num_day = CalculateDaysFromStartYear(day, month, year);

    // Используйте GetFormatType1, GetFormatType2, GetFormatType3 и GetStrNumDays
    // для определения надписей, которые нужно вывести пользователю.
    ui->lbl_format_type1->setText(GetFormatType1(day, month, year));
    ui->lbl_format_type2->setText(GetFormatType2(day, month, year));
    ui->lbl_format_type3->setText(GetFormatType3(day, month, year));
    ui->lbl_message->setText(GetStrNumDays(num_day, year));

    // Эти методы реализуйте самостоятельно.
}

void MainWindow::SetError(const QString& err_text)
{
    ui->lbl_format_type1->clear();
    ui->lbl_format_type2->clear();
    ui->lbl_format_type3->clear();
    ui->lbl_message->setText(err_text);
}

void MainWindow::on_le_date_textChanged(const QString&)
{
    // Пользователь изменил дату. Реализуйте слот.
    auto arr = ui->le_date->text().split(".");
<<<<<<< HEAD
    if (arr.size() == 3) {
=======
    editing_now_ = true;
    if(arr.size() == 3) {
>>>>>>> 772fa75 (format_date из дома)
        ui->le_day->setText(arr[0]);
        ui->le_month->setText(arr[1]);
        ui->le_year->setText(arr[2]);
    }
<<<<<<< HEAD
=======
    editing_now_ = false;
    ShowFormattedDate();
>>>>>>> 772fa75 (format_date из дома)
}

void MainWindow::on_le_day_textChanged(const QString&)
{
    CheckValidity(ui->le_day);
    // Пользователь изменил день. Реализуйте слот.
<<<<<<< HEAD
=======
    if(editing_now_ == true) {
        return;
    }
>>>>>>> 772fa75 (format_date из дома)
    ShowFormattedDate();
}

void MainWindow::on_le_month_textChanged(const QString&)
{
    CheckValidity(ui->le_month);
    // Пользователь изменил месяц. Реализуйте слот.
<<<<<<< HEAD
=======
    if(editing_now_ == true) {
        return;
    }
>>>>>>> 772fa75 (format_date из дома)
    ShowFormattedDate();
}

void MainWindow::on_le_year_textChanged(const QString&)
{
    CheckValidity(ui->le_year);
    // Пользователь изменил год. Реализуйте слот.
<<<<<<< HEAD
=======
    if(editing_now_ == true) {
        return;
    }
>>>>>>> 772fa75 (format_date из дома)
    ShowFormattedDate();
}
