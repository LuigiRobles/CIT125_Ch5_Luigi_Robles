// CIT125_Ch5_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.5 Pg. 137 Lab 5-1
// 6-22-2020 Summer Term
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sales = 0.0;
	double rate = 0.0;
	char code = '';

	cout << "Sales: ";
	cin >> sales;
	cout << "Code (1, 2, 3, or 4): ";
	cin >> code;

	if (code == '1' || code == '3')
		rate = 0.2;
	else
		rate = 0.15;
	// end if

	// calculate and display the projected sales amount
	sales = sales + sales * rate;
	cout << fixed << setprecision(2);
	cout << "Projected sales: " << sales << endl;

	return 0;
} // end of main function
