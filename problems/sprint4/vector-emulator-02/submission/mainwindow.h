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

    void on_list_widget_currentRowChanged(int currentRow);

    void on_btn_begin_clicked();

    void on_btn_end_clicked();

    //void on_btn_prev_clicked();

    //void on_btn_next_clicked();

    void on_btn_erase_clicked();

    void on_btn_edit_clicked();

    void on_btn_dec_clicked();

    void on_btn_inc_clicked();

    void on_btn_insert_clicked();

private:
    void ApplyModel();
    void ApplyIterator();

private:
    Model vector_model_;
    Ui::MainWindow *ui;
};
