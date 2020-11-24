#include "tic_tac_toe.h"
#include <iostream>
#include <memory>
#include "tic_tac_toe_data.h"

//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::unique_ptr;

class TicTacToeManager
{
public:
    
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData &data);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& x, int& t);
    ~TicTacToeManager();

private:
    void update_winner_count(std::string);
    std::vector<unique_ptr<TicTacToe>> games;
    int o_win = {0};
    int tie = {0};
    int x_win = {0};
    TicTacToeData data;
    // data variable (uunknown data type)
};

#endif