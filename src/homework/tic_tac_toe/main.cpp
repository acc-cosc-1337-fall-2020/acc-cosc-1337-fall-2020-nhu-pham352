#include<iostream>
#include"tic_tac_toe.h"
#include<string>

using std::cout; 	using std::cin;		using std::string;


int main()
{
	int position;
	TicTacToe game;
	string firtsplayer;

	cout<<"Please enter first player (x or o): ";
	cin>>firtsplayer;

	game.start_game(firtsplayer);

	while(!game.game_over())
	{
		game.display_board();
		cout<<"Enter a position on the board (1-9): \n";
		cin>>position;
		game.mark_board(position);

	}

	cout<<"\nGame Over!\n";
	game.display_board();

	return 0;


}
