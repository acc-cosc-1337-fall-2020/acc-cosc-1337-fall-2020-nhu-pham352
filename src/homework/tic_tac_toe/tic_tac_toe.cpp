#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"

using std::vector; using std::string; 
using std::cin; using std::cout;


void TicTacToe::start_game(string first_player)
{   
    player = first_player;
    clear_board();
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

void TicTacToe::mark_board(int position)
{
    do
    {
        if(pegs[position - 1] == " ")
        {
            pegs[position - 1] = player;
            if (game_over() ==  false)
            {
                set_next_player();
            }
            
        }
        else
        {
            cout<<"Invalid entry! Enter a position that has not been played: ";
        }
    } while (pegs[position - 1] == " ");
        
}


bool TicTacToe::check_board_full() const
{
    for(auto peg: pegs)
    {    
        if(peg == " ")
        {
            return false;
        }
        
    }
    return true;
}

bool TicTacToe::check_column_win()const
{
   
    return false;
}

bool TicTacToe::check_row_win()const
{
    return false;
}


bool TicTacToe::check_diagonal_win()const
{
    return false;
}
    

void TicTacToe::set_winner()
{
    if(player == "x")
    {
        winner = "x";
    }
    else
    {
        winner = "o";
    }
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }

}

bool TicTacToe::game_over()
{
    
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "c";
        return true;
    }
    return false;
}

std::istream& operator >> (std::istream& in, TicTacToe& game)
{
    if(game.pegs.size() == 9)
    {
        int position;
        
        cout << "Choose your position (1-9): ";

        while (!(in >> position))
        {
            cout << "Invalid entry! Please enter a number (1-9): ";
            in.clear();
            in.ignore(123, '\n');
        }

        while (position <= 0 || position > 9)
        {
            cout<<"Invalid entry! Position must be between 1 & 9 \n";
            cout<<"Please enter your position (1-9): ";
            in>>position;
        }

        if(position >= 1 && position <= 9)
        {
	        game.mark_board(position);
        }
    }
    else if(game.pegs.size() == 16)
    {
        int position;
        
        cout<<"Choose your position (1-16): ";

        while (!(in>>position))
        {
            cout<<"Invalid entry! Please enter a number (1-16): ";
            in.clear();
            in.ignore(123, '\n');
        }

        while (position <= 0 || position > 16)
        {
            cout<<"Invalid entry! Position must be between 1 & 16 \n";
            cout<<"Choose your position (1-16): ";
            in>>position;
        }
        if(position >=1 && position <= 16)
        {
	        game.mark_board(position);
        }
    }
    
    

    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe &game)
{
    if(game.pegs.size() == 9)
    {
        for(std::size_t i = 0; (i < game.pegs.size()); i+=3)
        {
            out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
        }
    }
    else if(game.pegs.size() == 16)
    {
        for(std::size_t n=0; n<game.pegs.size(); n+=4)
        {
            out<<game.pegs[n]<<"|"<<game.pegs[n+1]<<"|"<<game.pegs[n+2]<<"|"<<game.pegs[n+3]<<"\n";
        }
    }
    return out;
}