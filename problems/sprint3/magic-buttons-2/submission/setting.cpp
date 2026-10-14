#include "setting.h"
#include "ui_setting.h"
#include <prac/QInputDialog>
#include <iostream>

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);

    setWindowFlags(Qt::WindowStaysOnTopHint);

    for (const auto& action : actions_) {
        ui->cb_action->addItem(action.name);
    }
    ui->cb_action->addItem("Открыть URL");
    ui->cb_action->addItem("Открыть папку");
}

Setting::~Setting() {
    delete ui;
}

void Setting::on_pb_save_clicked() {
    auto index = ui->cb_action->currentIndex();
    if (index >= 0 && static_cast<size_t>(index) < actions_.size()) {
        //return;
        emit signalSetAction(current_button_idx_, actions_[index].name, actions_[index].action);
        return;
    }
    //emit signalSetAction(current_button_idx_, actions_[index].name, actions_[index].action);

    QString user_input;
    std::cout << "111" << std::endl;
    //if (static_cast<size_t>(index) >= actions_.size()){
    user_input = prac::QInputDialog::getText(this, "Введите URL", "URL:");
    //}

    auto lambda_f = [index, user_input]() {
        if(index == 5){
            OpenCustomUrl(user_input);
        }else{
            OpenCustomDirectory(user_input);
        }

    };
    std::cout << "222" << std::endl;
    QString action_name = (index == 5 ? "Открыть URL " : "Открыть папку ");

    emit signalSetAction(current_button_idx_, action_name, lambda_f);
    //lambda(index);

    //if (index == 4)
    ui->cb_action->setCurrentIndex(0);
    this->close();
}
