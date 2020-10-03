//write includes statements
#include "loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cout;	using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	do
	{
		int number;
		cout<<"Enter a number: ";
		cin>>number;

		while (!(number>=1 && number<=20))
		{
			cout<<"Please choose a number from 1 to 20 \n";
			cout<<"Enter a Number: ";
			cin>>number;
		}
	cout<<"Factorial of "<<number<<" is "<<factorial(number)<<"\n";

	char choice;
		cout<<"\nEnter Y to continue: ";
		cin>>choice;
		if (choice == 'y' || choice == 'Y')
		cout<<"\n";

	}while(true);

	return 0;
}