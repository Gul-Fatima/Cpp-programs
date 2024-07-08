//Create an abstract class Payment with a pure virtual function processPayment().Derive  two classes CreditCardPayment and PaypalPayment from Payment.Implement the  processPayment() function in both derived classes.Write a program to process a payment  through credit card and PayPal.
#include <iostream>
using namespace std;
class Payment {
public:
	virtual void processPayment()= 0{
	}
};
class debit : public Payment {
public:
	debit(){}
	void processPayment() override{
		cout << "Processing Card payment" << endl;
	}
};
class Paypal : public Payment {
public:
	Paypal(){}
	void processPayment()override {
		cout << "Processing Paypal payment";
	}

};
int main() {
	Payment* d = new debit();
	Payment* p = new Paypal();
	d->processPayment();
	p->processPayment();
}
