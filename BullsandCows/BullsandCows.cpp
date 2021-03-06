// BullsandCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h";
#include <iostream>;
#include <string>;
using namespace std;

void PrintIntro();
string getGuess();

void PrintIntro() {
	constexpr int magic_number = 5;
	cout << "Please guess the " << magic_number << " word!\n";
	cout << "You have 3 tries. \n";
}


string getGuess() {
	string guess = "";
	
	cout << "What is your guess? \n";
	getline(cin, guess);
	return guess;
}

bool checkGuess(string guess) {
	string ans = "guess";
	if (ans == guess) {
		return true;
	}

	return false;
}

void GetGuessAndPrintBack() {
	for (int i = 0; i < 3; i++) {
		string guess = getGuess();
		cout << "Your guess was: " << guess << "\n";
		bool check = checkGuess(guess);
		if (check) {
			cout << "Congratulations, you have guessed correctly! \n";
			break;
		}
		else if (i == 2){
			cout << "Thank you for trying but your tries are finished. Please re-run the program to play again.\n";
		}
		else {
			cout << "Desole, c'est pas le reponse correct. Essayez le prochaine fois. \n";
		}
	}
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
	GetGuessAndPrintBack();
	return 0;
}
