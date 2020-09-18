#include "variables.h"
#include<iostream>

using std::cout; using std::cin;

const double tax_rate = 6.75;
double get_sales_tax_amount(double meal_amount)
{
	
	return (tax_rate/100) * meal_amount;

}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate/100);
}


