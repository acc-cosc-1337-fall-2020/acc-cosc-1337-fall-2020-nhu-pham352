
#include "tic_tac_toe.h"

#ifndef Tic_Tac_Toe3_h
#define Tic_Tac_Toe3_h

class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3() : TicTacToe(3) {}
          TicTacToe3(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner){}
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagnol_win();
    
};
#endif