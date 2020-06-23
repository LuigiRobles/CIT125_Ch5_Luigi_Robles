// CIT125_Ch5_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.5 Pg. 137 Lab 5-1
// 6-22-2020 Summer Term

#include <iostream> // preprocessing directive
using namespace std;
#include <iomanip> // directive to use setprecisoin manipulator

int main()
{	// Declare and defaulting variables
	double sales = 0.0;
	double rate = 0.0;
	char code = ' ';

	// Input part of IPO
	cout << "Sales: ";
	cin >> sales; // input for sales
	cout << "Code (1, 2, 3, or 4): ";
	cin >> code; // input for code

	// selection structure
	if (code == '1' || code == '3') // true path
		rate = 0.2;
	else
		rate = 0.15; // false path
	// end if

	// calculate and display the projected sales amount
	// processing and output part of IPO
	sales = sales + sales * rate; 
	cout << fixed << setprecision(2); // setting allowed decimal places to "2"
	cout << "Projected sales: " << sales << endl; // display sales

	return 0;
} // end of main function
