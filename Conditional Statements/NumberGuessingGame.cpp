#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // % to ensure the range is between 1-99
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the secret number between 1 and 100.\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretNumber)
            cout << "Too low! Try again.\n";
        else if (guess > secretNumber)
            cout << "Too high! Try again.\n";
        else
            cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts.\n";
    } while (guess != secretNumber);
    _getche();
    return 0;
}
