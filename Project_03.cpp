// ****************************************
// Program Title: Sample header file
// Project File: Project_03.cpp
// Name: Samuel Robinson
// Course Section: CPE-211-01
// Lab Section: 4
// Due Date: 01/19/05
// program description: Description of
// What the program does.
// ****************************************
#include <iostream>
#include <cmath>
using namespace std;

// Main part of the function
int main()
{
// Part of the function that declares variables used in later calculations

	cout << "Input starting balance: ";		// Initializing and printing prompt
	double StarBal;					// for the Starting Balance
	cin >> StartBal;
	cout << StartBal << endl;

	cout << " Input the interest rate: ";		// Initializing and printing prompt
	double IntRate;					// for the Interest Rate
	cin >> IntRate;
	cout << IntRate << endl;

	cout << "Input the number of years: "		// Initializing and printing prompt
	double Years;					// for the number of Years
	cin >> Years;
	cout << Years << endl;
	
// Printing to screen values for Starting Balance, Interest Rate, and Years

	cout << "For a principle of $" << StartBal << "/nat an interest rate of ";
	cout << IntRate << "%/nfor a period of" << Years << "years,";
	cout << "the final account balance would be:";


// The Part of the funtion that calculates the interest rates for each part

	
// Simple Interest
	double SimpInt = StartBal ( 1 + Years * IntRate )




























return 0;
}
