// BullsandCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	constexpr int magic_number = 12;
	cout << "Please guess the " << magic_number << " word!\n";
	string guess = "";
	cout << "Please enter here: ";
	cin >> guess;
	cout << "Your guess was: " << guess << "\n";
    return 0;
}
