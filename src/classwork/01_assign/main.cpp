//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

using std::cout;	using std::cin;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int result=mutiply_numbers(num);
	cout<<"Result = "<<result;
	int num1 = 4;
	result = mutiply_numbers(num1);
	cout<<"Result =" + result;
	
	return 0;
}

