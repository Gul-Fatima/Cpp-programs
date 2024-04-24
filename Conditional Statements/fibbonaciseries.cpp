#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int numTerms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;

    int first = 0, second = 1, nextTerm;
    cout << "Fibonacci Series up to " << numTerms << " terms:" << endl;

    for (int i = 0; i < numTerms; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        cout << nextTerm << " ";
    }
    cout << endl;
    _getche();
    return 0;
}

