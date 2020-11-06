#include<iostream>
#include"tic_tac_toe.h"
#include<string>

using std::cout; 	using std::cin;		using std::string;


int main()
{
    int position;
    char choice;
	std::string player;
	TicTacToe game;
	
	do{
	    cout << "Please enter 'X' or 'O' to play: ";
	    cin >> player;
	    game.start_game(player);
	    
	    while (player != "X" && player !="O")
	    {
	        cout << "Invalid entry! Enter 'X' or 'O': ";
	        cin >> player;	
	        
	    }
	    
	    while (game.game_over() == false)
	    {
	        cout << "Choose your position (1-9): ";
	        cin >> position;
	        game.mark_board(position);
	        game.display_board();
	        game.get_player();
	        
	        while(position < 1 || position > 9)
	        {
	            cout << "Position must be between 1 & 9: ";
	            cin >> position;
	            
	        }
	        
	        game.mark_board(position);
	        game.display_board();
	        
	    }
	    
	    if(game.get_winner() == "C")
	    {
	        cout << "IT'S A TIE!";
	        game.display_board();
	        
	    }
	    
	    else
	    {
	        cout << game.get_winner() << " WINS!\n";
	        game.display_board();
	        
	    }
	    
	    cout << "Game over!\n";
	    cout << "Play again? (y/n): ";
	    cin >> choice; 
	    
	}
	
	while (choice == 'y' || choice == 'Y');	
	return 0;
}