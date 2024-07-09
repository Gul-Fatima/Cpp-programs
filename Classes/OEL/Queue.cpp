#include<iostream>
#include <vector>
using namespace std;
class Queue {
	vector<int> v;
public:
	void insert(int val) {
		v.push_back(val);
			}
	void dequeue() {

		v.erase(v.begin());
	}
	void peek() {
		cout << v[0];
	}
};
int main() {
	Queue q;
	q.insert(7);
	q.insert(8);
	q.dequeue();
	q.peek();
}
