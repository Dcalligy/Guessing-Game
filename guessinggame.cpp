#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int randRange(int low, int high);

int main(){

	srand(time(NULL));
	int userGuess;
	int guessCount = 0;

	for(int i = 0; i < 1000; i++) {

		cout << "Guess a number between 1 and 100: " << "\n";
		cin >> userGuess;
		if (userGuess < randRange(1,100)) {
			cout << "Your guess was too low\n" << "Try again\n";
			guessCount++;
		}
		else if (userGuess > randRange(1, 100)) {
			cout << "You guess was too high!\n" << "Try again!\n";
			guessCount++;
		}
		else{
			cout << "You guessed the right number! " << userGuess << "\n";
			guessCount++;
			cout << "It took: " << guessCount << " number of guesses\n";
			system("pause");
			return 0;
		}
	}
	system("pause");
    return 0;
}

int randRange(int low, int high) {

	// gets a random number to be between 
	// our set range, then adds the lowest
	// possible value
	return rand() % (high - low + 1) + low;
}

