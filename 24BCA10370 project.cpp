#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main() {
    int number, guess, attempts = 0;
    char playAgain;

    cout << "🎯 Welcome to the Number Guessing Game! 🎯" << endl;

    do {
        srand(time(0));
        number = rand() % 100 + 1;  
        attempts = 0;

        cout << "\nI have chosen a number between 1 and 100." << endl;
        cout << "Can you guess it?" << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) {
                cout << "Too high! Try again." << endl;
            } else if (guess < number) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts!" << endl;
            }
        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for playing! Goodbye 👋" << endl;
    return 0;
}