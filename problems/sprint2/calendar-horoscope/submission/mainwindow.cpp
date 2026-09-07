#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include "magic_horoscope.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->le_year->setValidator(new QIntValidator(1, 9999, this));
    ui->gb_horoscope->setDisabled(true);
    ui->sb_day->setDisabled(true);
    ui->cb_month->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rb_eastern_toggled(bool checked)
{
    if(checked) {
        calendar_ = Calendar::kEastern;
    }
    SetCalendarAndHoroscope();
}


void MainWindow::on_rb_tibetan_toggled(bool checked)
{
    if(checked) {
        calendar_ = Calendar::kTibetan;
    }
    SetCalendarAndHoroscope();
}


void MainWindow::on_rb_zoroastrian_toggled(bool checked)
{
    if(checked) {
        calendar_ = Calendar::kZoroastrian;
    }
    SetCalendarAndHoroscope();
}


void MainWindow::on_rb_zodiac_toggled(bool checked)
{
    if(checked) {
        horoscope_ = Horoscope::kZodiac;
    }
    SetCalendarAndHoroscope();
}


void MainWindow::on_rb_druid_toggled(bool checked)
{
    if(checked) {
        horoscope_ = Horoscope::kDruid;
    }
    SetCalendarAndHoroscope();
}


void MainWindow::on_cb_is_date_toggled(bool checked)
{
    if(checked) {
        ui->gb_horoscope->setEnabled(true);
        ui->sb_day->setEnabled(true);
        ui->cb_month->setEnabled(true);
        return;
    }
    ui->gb_horoscope->setEnabled(false);
    ui->sb_day->setEnabled(false);
    ui->cb_month->setEnabled(false);
    SetCalendarAndHoroscope();
}


void MainWindow::on_le_year_textChanged(const QString &arg1)
{
    SetCalendarAndHoroscope();
}


void MainWindow::on_sb_day_valueChanged(int arg1)
{
    SetCalendarAndHoroscope();
}


void MainWindow::on_cb_month_currentIndexChanged(int index)
{
    SetCalendarAndHoroscope();
}

void MainWindow::SetCalendarAndHoroscope()
{
    if(ui->le_year->text() == ""){
        ui->lbl_calendar->setText("Введите год");
        //return;
    }

    if(!ui->cb_is_date->isChecked()) {
        ui->lbl_horoscope->setText("Ввод даты отключён");
        //return;
    }

    if (calendar_ == Calendar::kTibetan) {
        ui->lbl_calendar->setText(QString("%1 — это год %2").arg(ui->le_year->text()).arg(GetAnimalForTibetanCalendar(ui->le_year->text().toInt())));
    } else if (calendar_ == Calendar::kZoroastrian) {
        ui->lbl_calendar->setText(QString("%1 — это год %2").arg(ui->le_year->text()).arg(GetAnimalForZoroastrianCalendar(ui->le_year->text().toInt())));
    } else if (calendar_ == Calendar::kEastern) {
        ui->lbl_calendar->setText(QString("%1 — это год %2. Стихия/цвет — %3").arg(ui->le_year->text()).arg(GetAnimalForEasternCalendar(ui->le_year->text().toInt())).arg(GetElementForEasternCalendar(ui->le_year->text().toInt())));
    }



    if (horoscope_ == Horoscope::kZodiac) {
        QString zod = GetZodiac(ui->sb_day->text().toInt(), ui->cb_month->currentIndex() + 1, ui->le_year->text().toInt());
        if (zod != "") {
            ui->lbl_horoscope->setText(QString("%1.%2 — ваш знак зодиака %3 по зодиакальному гороскопу").arg(ui->sb_day->value(), 2, 10, QChar('0')).arg(ui->cb_month->currentIndex() + 1, 2, 10, QChar('0')).arg(zod));
        } else {
            ui->lbl_horoscope->setText(QString("Такой даты не существует"));
        }
    } else if (horoscope_ == Horoscope::kDruid) {
        QString dru = GetTree(ui->sb_day->text().toInt(), ui->cb_month->currentIndex() + 1, ui->le_year->text().toInt());
        if (dru != "") {
            ui->lbl_horoscope->setText(QString("%1.%2 — ваше тотемное дерево %3 по гороскопу друидов").arg(ui->sb_day->value(), 2, 10, QChar('0')).arg(ui->cb_month->currentIndex() + 1, 2, 10, QChar('0')).arg(dru));
        } else {
            ui->lbl_horoscope->setText(QString("Такой даты не существует"));
        }
    }
}