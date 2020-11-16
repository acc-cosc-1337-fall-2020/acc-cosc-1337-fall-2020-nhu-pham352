//h
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::string;  using std::vector;

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe
{
public :
    TicTacToe(int sum): pegs(sum*sum," "){}
    bool game_over();
    void start_game (string firts_player);
    void mark_board(int position);
    string get_player()const{return player;};
    void display_board()const;
    string get_winner(){return winner;};
    friend std::istream& operator>>(std::istream&, TicTacToe& game);
    friend std::ostream& operator<<(std::ostream&, const TicTacToe& game);

protected:
std::vector <string> pegs;
virtual bool check_column_win();
virtual bool check_row_win();
virtual bool check_diagonal_win();


private:
    string player;
    bool check_board_full()const;
    void set_next_player();
    void clear_board();
    string winner;
    void set_winner();

}; 
#endif