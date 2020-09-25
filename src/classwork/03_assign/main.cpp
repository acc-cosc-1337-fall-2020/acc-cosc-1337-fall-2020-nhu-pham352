//Write the include statement for decisions.h here
#include"decision.h"
#include<iostream>

//Write namespace using statements for cout and cin
using namespace std;



int main() 
{
	int grade;

	cout<<"Enter your numerial grade:  ";
	cin>>grade;

	if (grade < 101 && grade >= 0)
	{
		cout<<"\nYour grade for "<<grade<<" will be a/an "<<get_letter_grade_using_if(grade)<<" in letter grade by using if function \n";
		cout<<"Your grade for "<<grade<<" will be a/an "<<get_letter_grade_using_switch(grade)<<" in letter grade by using switch function \n";
	}
	else
	{
		cout<<"Your grade number is out of range.";
	}
	return 0;
}

