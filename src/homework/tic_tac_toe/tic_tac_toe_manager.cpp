//cpp
#include "tic_tac_toe_manager.h"

using std::cin;  using std::cout;

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win += 1;
    }
    else if(winner == "O")
    {
        o_win +=1;
    }
    else
    {
        tie += 1;
    }

}

void TicTacToeManager::get_winner(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = tie;

    cout<<"o win(s): "<< o << " x win(s): " << x << " tie(s): "<< t <<"\n";
}

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto& i: manager.game)
    {
        out << *i << "\n";
    }
    
    return out;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    game.push_back(std::move(b));
    get_winner(x_win, o_win, tie);
} 