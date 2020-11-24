#include<vector>
#include<string>
#include<iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(){};
    TicTacToe(int size) : pegs (size*size, " "){}
    TicTacToe(std::vector<std::string> p, std::string win) : pegs(p), winner(win){}
    std::string get_player()const{return player;}
    std::string get_winner(){return winner;}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& b);
    friend std::istream& operator>>(std::istream& in, TicTacToe& b);
    std::vector<std::string> get_pegs()const{return pegs;}

protected:
    std::vector<std::string> pegs{};
    std::vector<int> pegs1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> pegs2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    virtual bool check_column_win() const = 0;
    virtual bool check_row_win() const = 0;
    virtual bool check_diagonal_win() const = 0;

private:
    std::string winner;
    std::string player;
    bool check_board_full()const;
    void set_next_player();
    void set_winner();
    void clear_board();
};

#endif
