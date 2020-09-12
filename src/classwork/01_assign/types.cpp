//Write the include statement for types.h here
#include "types.h"
#include<iostream>

using std::cout;	using std::cin;

int main()
{
	int num1;
	cout<<"Enter a number: "; 
	cin>>num1;
	int prod=mutiply_numbers(num1);
	cout<<"Product:"<<prod;
	return 0;
}

int mutiply_numbers(int num1)
{
	int num2=5;
	return num1*num2;
}






