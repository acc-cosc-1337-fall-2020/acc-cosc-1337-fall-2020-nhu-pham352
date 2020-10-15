#include<iostream>

using std::cout;	using std::cin;


int main() 
{
	int num=5;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Stack Address of num: "<<&num<<"\n";

	int& num_ref = num;

	cout<<"Value of num_ref: "<<num_ref<<"\n";
	cout<<"Stack Address of num_ref: "<<&num_ref<<"\n";

	num_ref = 10;
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value of num_ref: "<<num_ref<<"\n";
	
	return 0;
}