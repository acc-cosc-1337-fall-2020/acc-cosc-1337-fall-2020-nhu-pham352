#include<iostream>
#include"tic_tac_toe.h"
#include<string>
#include<utility>
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"

using std::cin; using std::cout;

int main()
{
	int size = 0;
    char choice;
	std::string player;
	TicTacToeManager manager;
  std::unique_ptr <TicTacToe> game=nullptr;
	
	do{
	    cout << "Pick 'X' or 'O': ";
	    cin >> player;
	    
	    while (player != "X" && player !="O")
	    {
	        cout << "Invalid entry! Enter 'X' or 'O': ";
	        cin >> player;	
	        
	    }
	    
      while (size == 0)
		{
			cout<<"Eneter 3 or 4 if you want a 3X3 or 4X4 board: ";
			cin>>size;
			if(size == 3)
			{
				game = std::make_unique<TicTacToe3>();
				cout<<*game;
			}	
			else if(size == 4)
			{
				game = std::make_unique<TicTacToe4>();
				cout<<*game;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}

		game->start_game(player);
		cout<<"\n";

		do	
		{
			
			cin>>*game;
			cout<<*game;

			if (game->game_over() == false)
			{
			
				cout<<"The player is: "<<game->get_player()<<"\n";
			}

		} while (game->game_over() == false);

		cout<<"The game is over!"<<"\n";
		int o;
		int x;
		int t;

		size = 0;

		manager.save_game(game);
		manager.get_winner(o, x, t);
		cout<<"Do you want to play another game? (y/n): ";
		cin>>choice;
	
	}while (choice == 'y' || 'Y');	
	cout << manager<<"\n";
	return 0;
}