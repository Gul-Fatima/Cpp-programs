#include<iostream>
using namespace std;
class Counter {
	int value;
public:
	Counter() : value(0) {};
	void Increement() {
		value++;
			}
	void Decreement() {
		value--;
	}
	int getValue() {
		return value;
	}
};
int main() {
	Counter c;
	c.Increement();
	c.Increement();
	cout << c.getValue()<<endl;
	c.Decreement();
	cout << c.getValue();
}
