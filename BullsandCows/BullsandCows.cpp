// BullsandCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;

void PrintIntro();
string getGuess();

void PrintIntro() {
	constexpr int magic_number = 12;
	cout << "Please guess the " << magic_number << " word!\n";
}


string getGuess() {
	string guess = "";
	
	cout << "Please enter here: ";
	getline(cin, guess);
	cout << "Your guess was: " << guess << "\n";
	return guess;
}

string GetGuessAndPrintBack() {
	string guess = getGuess();
	cout << "Your guess was: " << guess << "\n";
}

//Entry Point for the Program
int main()
{
	PrintIntro();
	
    return 0;
}
