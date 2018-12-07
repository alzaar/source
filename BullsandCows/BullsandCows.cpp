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
	cout << "You have 3 tries. \n";
}


string getGuess() {
	string guess = "";
	
	cout << "What is your guess? \n";
	getline(cin, guess);
	return guess;
}

void GetGuessAndPrintBack() {
	string guess = getGuess();
	cout << "Your guess was: " << guess << "\n";
}

int loop() {
	cout << "How many times would you like to guess the word? \n";
	int num = 0;
	cin >> num;
	return num;
}
//Entry Point for the Program
int main()
{
	PrintIntro();
	for (int i = 0; i < 3; i++) {
		GetGuessAndPrintBack();
	}

    return 0;
}
