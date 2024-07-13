#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate the next multiplication question and return the correct answer
int generateQuestion() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));

    int num1 = rand() % 10 + 1; // Generate random number between 1 and 10
    int num2 = rand() % 10 + 1; // Generate random number between 1 and 10
    int correctAnswer = num1 * num2;

    cout << "How much is " << num1 << " times " << num2 << " ? ";
    return correctAnswer;
}

// Function to handle the question and answer process
void handleQuestion() {
    int answer;
    int correctAnswer = generateQuestion();

    while (true) {
        cin >> answer;

        if (answer == correctAnswer) {
            cout << "Very good!" << endl;
            break;
        } else {
            cout << "No. Please try again." << endl;
        }
    }
}

int main() {
    cout << "Welcome to the Multiplication Quiz!" << endl;
    handleQuestion();
    
    return 0;
}
