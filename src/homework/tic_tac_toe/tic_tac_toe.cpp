//cpp
#include<iostream>
#include<string>
#include"tic_tac_toe.h"

using std::string;  using std::vector;  using std::cout;

bool TicTacToe::game_over()
{
    return  check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();

}

void TicTacToe::display_board()const
{
    for (std::size_t i=0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }

}


void TicTacToe::set_next_player()
{
    if(player == "x")
    {
        player = "o";
    }
    else
    {
        player = "x";
    }
    
}

bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if (peg ==" ")
        {
            return false;
        }

    }
    return true;
}

void TicTacToe::clear_board()
{
    for(std::size_t i = 0; i<pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}