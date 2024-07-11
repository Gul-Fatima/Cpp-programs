#include <iostream>
#include<vector>
using namespace std;
class Decimal {
	int num;
	vector<int> bin;
public:
	Decimal(int n) : num(n) { }
	
	void display() {
		for (int i = bin.size() - 1;i >= 0;i--) {
			cout << bin[i];
		}
	}
	friend void to_bin(Decimal &obj );
};
void to_bin(Decimal &obj) {
	while (obj.num > 0) {
		obj.bin.push_back(obj.num % 2);
		obj.num /= 2;
	}

}
int main() {
	Decimal d(8);
	to_bin(d);
	d.display();
}
