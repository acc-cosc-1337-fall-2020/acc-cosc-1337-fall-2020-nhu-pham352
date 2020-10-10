//write include statements
#include"dna.h"
#include<iostream>
#include<string>

//write using statements
using std::cout;	using std::cin;		using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna;
	int option;
	char choice;
  do 
  {
	cout << "\nEnter 1 to get GC content" << "\n";
 	cout << "Enter 2 to get DNA complement" << "\n\n";
    cout << "Enter your option : ";
    cin >> option;
	cout << "Enter a DNA string: ";
    cin >> dna;
	
   	if (option == 1)
	{
		double content = get_gc_content(dna);
		cout<<"GC content: "<<content<<"\n";

	}
	else if (option == 2)
	{
		std::string complement = get_dna_complement(dna);
		cout<<"DNA Complement: "<<complement<<"\n";
	}
	else
	{
		cout<<"Invalid option"<<"\n";
	}
	

	
	cout<<"\nEnter Y to countinue: ";
	cin>>choice;
	}while (choice == 'Y' ||choice == 'y');
	return 0;
}