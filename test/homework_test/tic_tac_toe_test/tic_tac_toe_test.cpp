#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr;	using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	
	unique_ptr<TicTacToe> x = make_unique<TicTacToe3> ();
	x->start_game("X");

	REQUIRE(x->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	
	unique_ptr<TicTacToe> o = make_unique<TicTacToe3> ();

	o->start_game("O");

	REQUIRE(o->get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test in by first column")
{
	
	unique_ptr<TicTacToe> col1 = make_unique<TicTacToe3> ();
	col1->start_game("X");
	col1->mark_board(1);
	col1->mark_board(2);
	col1->mark_board(4);
	col1->mark_board(5);
	col1->mark_board(7);

	REQUIRE(col1->game_over() == true);
	REQUIRE(col1->get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	
	unique_ptr<TicTacToe> col2 = make_unique<TicTacToe3> ();
	col2->start_game("X");
	col2->mark_board(2);
	col2->mark_board(1);
	col2->mark_board(5);
	col2->mark_board(3);
	col2->mark_board(8);

	REQUIRE(col2->game_over() == true);
	REQUIRE(col2->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	
	unique_ptr<TicTacToe> col3 = make_unique<TicTacToe3> ();
	col3->start_game("X");
	col3->mark_board(3);
	col3->mark_board(2);
	col3->mark_board(6);
	col3->mark_board(5);
	col3->mark_board(9);

	REQUIRE(col3->game_over() == true);
	REQUIRE(col3->get_winner() == "X");
}

TEST_CASE("Test determine a tie")
{
	std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3> ();
	board->start_game("X");
	
	for (int i=1; i<6; i++)
	{
	board->mark_board(i);
	REQUIRE(board->game_over() == false);
	}
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
}


TEST_CASE("Test win by first row")
{
	
	unique_ptr<TicTacToe> row1 = make_unique<TicTacToe3> ();
	row1->start_game("X");
	row1->mark_board(1);
	row1->mark_board(4);
	row1->mark_board(2);
	row1->mark_board(5);
	row1->mark_board(3);

	REQUIRE(row1->game_over() == true);
	REQUIRE(row1->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	
	unique_ptr<TicTacToe> row2 = make_unique<TicTacToe3> ();
	row2->start_game("X");
	row2->mark_board(4);
	row2->mark_board(2);
	row2->mark_board(5);
	row2->mark_board(1);
	row2->mark_board(6);

	REQUIRE(row2->game_over() == true);
	REQUIRE(row2->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	
	unique_ptr<TicTacToe> row3 = make_unique<TicTacToe3> ();
	row3->start_game("X");
	row3->mark_board(7);
	row3->mark_board(2);
	row3->mark_board(8);
	row3->mark_board(5);
	row3->mark_board(9);

	REQUIRE(row3->game_over() == true);
	REQUIRE(row3->get_winner() == "X");
}

TEST_CASE("Test win by top left diagnol")
{
	
	unique_ptr<TicTacToe> diag1 = make_unique<TicTacToe3> ();
	diag1->start_game("X");
	diag1->mark_board(1);
	diag1->mark_board(2);
	diag1->mark_board(5);
	diag1->mark_board(3);
	diag1->mark_board(9);

	REQUIRE(diag1->game_over() == true);
	REQUIRE(diag1->get_winner() == "X");
}

TEST_CASE("Test win by bottom left diagnol")
{
	
	unique_ptr<TicTacToe> diag2 = make_unique<TicTacToe3> ();
	diag2->start_game("X");
	diag2->mark_board(3);
	diag2->mark_board(2);
	diag2->mark_board(5);
	diag2->mark_board(1);
	diag2->mark_board(7);

	REQUIRE(diag2->game_over() == true);
	REQUIRE(diag2->get_winner() == "X");
}



TEST_CASE("Test determine a tie")
{
	
	unique_ptr<TicTacToe> tie = make_unique<TicTacToe3> ();
	
	tie->start_game("X");
	
	for (int i=1; i<13; i++)
	{
	
	tie->mark_board(i);
	REQUIRE(tie->game_over() == false);
	}
	tie->mark_board(16);
	REQUIRE(tie->game_over() == false);
	tie->mark_board(15);
	REQUIRE(tie->game_over() == false);
	tie->mark_board(14);
	REQUIRE(tie->game_over() == false);
	tie->mark_board(13);
	
	REQUIRE(tie->game_over() == true);
	REQUIRE(tie->get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	
	unique_ptr<TicTacToe> x1 = make_unique<TicTacToe3> ();

	
	x1->start_game("X");

	REQUIRE(x1->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	
	unique_ptr<TicTacToe> o1 = make_unique<TicTacToe3> ();
	
	o1->start_game("O");

	REQUIRE(o1->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	
	unique_ptr<TicTacToe> col_1 = make_unique<TicTacToe3> ();

	col_1->start_game("X");
	col_1->mark_board(1);
	col_1->mark_board(2);
	col_1->mark_board(5);
	col_1->mark_board(3);
	col_1->mark_board(9);
	col_1->mark_board(4);
	col_1->mark_board(13);

	REQUIRE(col_1->game_over() == true);
	REQUIRE(col_1->get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	
	unique_ptr<TicTacToe> col_2 = make_unique<TicTacToe3> ();

	col_2->start_game("X");
	col_2->mark_board(2);
	col_2->mark_board(1);
	col_2->mark_board(6);
	col_2->mark_board(3);
	col_2->mark_board(10);
	col_2->mark_board(9);
	col_2->mark_board(14);

	REQUIRE(col_2->game_over() == true);
	REQUIRE(col_2->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	
	unique_ptr<TicTacToe> col_3 = make_unique<TicTacToe3> ();

	col_3->start_game("X");
	col_3->mark_board(3);
	col_3->mark_board(2);
	col_3->mark_board(7);
	col_3->mark_board(5);
	col_3->mark_board(11);
	col_3->mark_board(1);
	col_3->mark_board(15);

	REQUIRE(col_3->game_over() == true);
	REQUIRE(col_3->get_winner() == "X");
}

TEST_CASE("Test win by fourth column")
{
	
	unique_ptr<TicTacToe> col4 = make_unique<TicTacToe3> ();

	col4->start_game("X");
	col4->mark_board(4);
	col4->mark_board(2);
	col4->mark_board(8);
	col4->mark_board(5);
	col4->mark_board(12);
	col4->mark_board(1);
	col4->mark_board(16);

	REQUIRE(col4->game_over() == true);
	REQUIRE(col4->get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	
	unique_ptr<TicTacToe> row_1 = make_unique<TicTacToe3> ();

	row_1->start_game("X");
	row_1->mark_board(1);
	row_1->mark_board(6);
	row_1->mark_board(2);
	row_1->mark_board(5);
	row_1->mark_board(3);
	row_1->mark_board(7);
	row_1->mark_board(4);

	REQUIRE(row_1->game_over() == true);
	REQUIRE(row_1->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	
	unique_ptr<TicTacToe> row_2 = make_unique<TicTacToe3> ();

	row_2->start_game("X");
	row_2->mark_board(7);
	row_2->mark_board(2);
	row_2->mark_board(5);
	row_2->mark_board(1);
	row_2->mark_board(6);
	row_2->mark_board(4);
	row_2->mark_board(8);

	REQUIRE(row_2->game_over() == true);
	REQUIRE(row_2->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	
	unique_ptr<TicTacToe> row_3 = make_unique<TicTacToe3> ();

	row_3->start_game("X");
	row_3->mark_board(9);
	row_3->mark_board(2);
	row_3->mark_board(10);
	row_3->mark_board(5);
	row_3->mark_board(11);
	row_3->mark_board(7);
	row_3->mark_board(12);

	REQUIRE(row_3->game_over() == true);
	REQUIRE(row_3->get_winner() == "X");
}
TEST_CASE("Test win by third row")
{
	
	unique_ptr<TicTacToe> row4 = make_unique<TicTacToe3> ();

	row4->start_game("X");
	row4->mark_board(13);
	row4->mark_board(2);
	row4->mark_board(14);
	row4->mark_board(5);
	row4->mark_board(15);
	row4->mark_board(7);
	row4->mark_board(16);

	REQUIRE(row4->game_over() == true);
	REQUIRE(row4->get_winner() == "X");
}

TEST_CASE("Test win by top left diagnol")
{
	
	unique_ptr<TicTacToe> diag_1 = make_unique<TicTacToe3> ();

	diag_1->start_game("X");
	diag_1->mark_board(1);
	diag_1->mark_board(2);
	diag_1->mark_board(6);
	diag_1->mark_board(3);
	diag_1->mark_board(11);
	diag_1->mark_board(4);
	diag_1->mark_board(16);

	REQUIRE(diag_1->game_over() == true);
	REQUIRE(diag_1->get_winner() == "X");
}

TEST_CASE("Test win by bottom left diagnol")
{
	
	unique_ptr<TicTacToe> diag_2 = make_unique<TicTacToe3> ();

	diag_2->start_game("X");
	diag_2->mark_board(4);
	diag_2->mark_board(2);
	diag_2->mark_board(10);
	diag_2->mark_board(1);
	diag_2->mark_board(7);
	diag_2->mark_board(12);
	diag_2->mark_board(13);

	REQUIRE(diag_2->game_over() == true);
	REQUIRE(diag_2->get_winner() == "X");
}