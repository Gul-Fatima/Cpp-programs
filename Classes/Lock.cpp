#include <iostream>
using namespace std;

class ComboLock {
public:
    // Constructor to set the combination and initialize dial and step to 0
    ComboLock(int secret1, int secret2, int secret3)
        : secret1(secret1), secret2(secret2), secret3(secret3), dial(0), step(0) {}

    // Resets the dial to 0 and step to 0
    void reset() {
        dial = 0;
        step = 0;
    }

    // Turns the dial to the left by a given number of ticks
    void turnLeft(int ticks) {
        dial = (dial + ticks) % 40;
        if (step == 1 && dial == secret2) {
            step = 2;
        }
        else if (step != 1) {
            step = 0;
        }
    }

    // Turns the dial to the right by a given number of ticks
    void turnRight(int ticks) {
        dial = (dial - ticks + 40) % 40;
        if (step == 0 && dial == secret1) {
            step = 1;
        }
        else if (step == 2 && dial == secret3) {
            step = 3;
        }
        else {
            step = 0;
        }
    }

    // Attempts to open the lock
    bool open() const {
        return step == 3;
    }

private:
    int secret1, secret2, secret3;
    int dial; // Current position of the dial
    int step; // Current step in the combination
};

int main() {
    ComboLock lock(10, 20, 30);

    lock.reset();
    lock.turnRight(30); // First number in the combination
    lock.turnLeft(10);  // Second number in the combination
    lock.turnRight(20); // Third number in the combination

    if (lock.open()) {
        cout << "Lock opened successfully!" << endl;
    }
    else {
        cout << "Failed to open the lock." << endl;
    }

    return 0;
}
