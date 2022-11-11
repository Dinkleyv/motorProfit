// motorProfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
/*Exercise III
Write a program that computes the profit made for selling a motor vehicle.
The program should allow a user to input the buying price and selling price and compute, and display the profit*/

	//variable declaration
	int bPrice, sPrice;
	float profit;

	//getting input from user
	cout << "Please enter the buying price of the motor vehicle  \t Ksh";
	cin >> bPrice;
	cout << "Enter the selling price\t Ksh";
	cin >> sPrice;

	//Process
	profit = bPrice - sPrice;

	//output 
	cout << "Profit earned from the sale is: Ksh" << profit;
}

