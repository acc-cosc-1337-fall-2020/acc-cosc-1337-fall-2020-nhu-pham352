#include "tic_tac_toe_manager.h"
//cpp

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    get_winner_total(x_win, o_win, tie);
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for (auto& i: manager.games)
    {
        out << *i << "\n";
    }
    
    return out;
}
void TicTacToeManager::get_winner_total(int& o, int& x, int& c)
{
    std::cout << "X wins " << x <<" wins " << o << " Ties " << c << "\n";
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X") { x_win++; }
    else if (winner == "O") { o_win++; }
    else { tie++; }
}

TicTacToeManager::TicTacToeManager(TicTacToeData &data)
{
    games = std::move(data.get_games());

    for (auto& i : games)
    {
        update_winner_count(i->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager()
{
    data.save_games(games);
}