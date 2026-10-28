#pragma once

#ifdef PRAC_TESTS
#include "../tests/model.h"
#include "../tests/view.h"
#else
#include "model.h"
#include "view.h"
#endif

class Controller {
public:

    Controller(){
        auto start_game = [&](size_t x, size_t y){
            model_.Reset(x, y);
            view_.SetupField(x, y);
            //вызвать метод, который обновит статус игры
            UpdateStatus();
        };
        auto players_turn = [&](size_t turn_x, size_t turn_y){
            Symbol turn_result = model_.DoMove(turn_x, turn_y);
            if (turn_result != Symbol::kEmpty) {
                view_.UpdateCell(turn_x, turn_y, ToQString(turn_result));
            }
            //вызвать метод, который обновит статус игры
            UpdateStatus();
        };
        view_.SetNewgameCallback(start_game);
        view_.SetMoveCallback(players_turn);
        start_game(3, 3);
        view_.show();
    }

    void UpdateStatus() {
        std::optional<Symbol> winner = model_.GetWinner();
        if (winner == std::nullopt) {
            Symbol next_player = model_.GetNextPlayer();
            view_.SetStatus(QString("Ход игрока " + ToQString(next_player)));
            view_.SetStatusStyle("black", false);
        } else if (winner.value() == Symbol::kEmpty) {
            view_.SetStatus("Ничья");
            view_.SetStatusStyle("red", true);
        } else if (winner.value() == Symbol::kCross || winner.value() == Symbol::kNought) {
            view_.SetStatus("Выиграл " + ToQString(winner.value()));
            view_.SetStatusStyle("green", true);
            std::vector<std::pair<size_t, size_t>> vector_win = model_.GetWinnerPath();
            for (size_t i = 0; i < vector_win.size(); i++) {
                view_.SetCellStyle(vector_win[i].first, vector_win[i].second, "green", true);
            }
        }

    }

private:
    Model model_;
    View view_;
};
