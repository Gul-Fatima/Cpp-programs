#include <iostream>
#include <conio.h>
using namespace std;

float SimpleInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100;
}
int main() {
    float principal, rate;
    int time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    float simpleInterest = SimpleInterest(principal, rate, time);
    cout << "Principal amount: $" << principal << endl;
    cout << "Rate of interest: " << rate << "%" << endl;
    cout << "Time period: " << time << " years" << endl;
    cout << "Simple interest: $" << simpleInterest << endl;
    _getch();
    return 0;
}
