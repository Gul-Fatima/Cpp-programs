#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int computerChoice = rand() % 3; 
    int userChoice;
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "Enter your choice:\n";
    cout << "0: Rock\n";
    cout << "1: Paper\n";
    cout << "2: Scissors\n";
    cin >> userChoice;
    cout << "You chose: ";
    switch (userChoice) {
    case 0:
        cout << "Rock\n";
        break;
    case 1:
        cout << "Paper\n";
        break;
    case 2:
        cout << "Scissors\n";
        break;
    default:
        cout << "Invalid choice\n";
        return 1;
    }
    cout << "Computer chose: ";
    switch (computerChoice) {
    case 0:
        cout << "Rock\n";
        break;
    case 1:
        cout << "Paper\n";
        break;
    case 2:
        cout << "Scissors\n";
        break;
    }
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";     }
    else if ((userChoice == 0 && computerChoice == 2) ||
        (userChoice == 1 && computerChoice == 0) ||
        (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!\n";     }
    else {
        cout << "Computer wins!\n";     }
    _getche();
    return 0;
}
