//c) Complete the missing code and write the output. // This program takes two numbers (pay rate & hours)
	// and multiplics them to get grosspay
	// it then calculates net pay by subtracting 15%
#include <iostream>
#include <iomanip> 
using namespace std;
//Function prototypes
//void printDescription();
void printDescription(){ //The function heading {
	cout << "*********************************" << endl;
	cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and multiplies them to get gross pay ";
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "** *****" << endl;
}
void computePaycheck(float rate, int time, float& gross, float& net) {
	// Fill in the code to find grosspay and net pay
	gross = rate * time;
	net = gross * 0.85;
}
int main() {
	float payRate; 
	float grossPay;
	float netPay;
	int hours;
	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;
	printDescription(); //Call to Description function
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;

	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;

	cout << endl << endl;

	computePaycheck(payRate, hours, grossPay, netPay);
	// Fill in the code to output grosspay
	cout << "The net pay is $" << netPay << endl;
	cout << "We hoped you enjoyed this program" << endl;
	return 0;
}
