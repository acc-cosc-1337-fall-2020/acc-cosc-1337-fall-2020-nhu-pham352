//h
#include<iostream>
#include<vector>
#include<string>

using std::vector;  using std::string;


class TicTacToe
{
public :
    bool game_over();
    void start_game (string firts_player);
    void mark_board(int position);
    string get_player()const;
    void display_board()const;

private:
    string player;
    vector<string> pegs{9," "};
    bool check_board_full()const;
    void set_next_player();
    void clear_board();

}; 