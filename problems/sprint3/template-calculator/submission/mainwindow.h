#pragma once

#include "calculator.h"
#include "enums.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    void SetText(const QString& text);
    void AddText(const QString& suffix);
    QString RemoveLeadingZeroes(const QString &text) const;
    QString NormalizeNumber(const QString &text) const;
    void SetOperation (Operation op);
    static QString OpToString(Operation op);

private slots:
    void on_btn_zero_clicked();
    void on_btn_one_clicked();
    void on_btn_two_clicked();
    void on_btn_three_clicked();
    void on_btn_four_clicked();
    void on_btn_five_clicked();
    void on_btn_six_clicked();
    void on_btn_seven_clicked();
    void on_btn_eight_clicked();
    void on_btn_nine_clicked();
    void on_btn_comma_clicked();
    void on_btn_negate_clicked();
    void on_btn_backspace_clicked();
    void on_btn_power_clicked();
    void on_btn_divide_clicked();
    void on_btn_multiplicate_clicked();
    void on_btn_substract_clicked();
    void on_btn_add_clicked();
    void on_btn_equal_clicked();
    void on_btn_c_clicked();
    void on_btn_ms_clicked();
    void on_btn_mc_clicked();
    void on_btn_mr_clicked();

private:
    Ui::MainWindow* ui;
    std::function<void(Operation key)> operation_cb_;
    std::function<void(int key)> digit_cb_;
    std::function<void(ControlKey key)> control_cb_;
    std::function<void(ControllerType controller)> controller_cb_;

    // Calculator calculator_;
    // QString input_number_;
    // Number active_number_ = 0;
    // Operation current_operation_ = Operation::NO_OPERATION;
    // Number memory_ = 0;
    // bool is_in_memory_ = false;
};

