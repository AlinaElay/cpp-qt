#pragma once

#include <QMainWindow>
#include <QStringListModel>
#include <QListWidgetItem>

#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_pop_back_clicked();
    void on_btn_push_back_clicked();
    void on_btn_clear_clicked();
    void on_btn_days_of_week_clicked();

    void on_btn_month_clicked();

private:
    void ApplyModel();

private:
    Model vector_model_;
    Ui::MainWindow *ui;
};
