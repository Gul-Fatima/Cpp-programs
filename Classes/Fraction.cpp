//6.	Question: Create a class Fraction with attributes numerator and denominator.Implement a method to simplify the fraction.
#include <iostream>
using namespace std;
class Fraction {
	int num, din;
public:
	Fraction(int n , int d): num(n),din(d){}
	int gcd(int a, int b) {
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
		void simplify() {
			int div = gcd(num, din);
			num /= div;
			din /= div;
			//return num, din;
		}
		void display() {
			simplify();
			cout << num << "/" << din;

	}
};
int main() {
	Fraction f(18, 8);
	f.display();
}
