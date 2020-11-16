
#include "tic_tac_toe.h"

#ifndef Tic_Tac_Toe4_h
#define Tic_Tac_Toe4_h

class TicTacToe4 : public TicTacToe
{
    public:
        TicTacToe4() : TicTacToe(4) {}
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagnol_win();
};
#endif
