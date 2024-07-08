//Create an abstract class Employee with a pure virtual function calculateSalary().Derive  two classes PermanentEmployee and ContractEmployee from Employee.Implement the  calculateSalary() function in both derived classes.Write a program to calculate the sa
// lary  of a permanent employee and a contract employee.
#include <iostream>
using namespace std;
class Employee {
	
public:
	virtual int Salary() = 0 {};

};
class Permanent : public Employee {
	int salary;
public:
	Permanent(int s) :salary(s){}
	int Salary() override {
		if (salary > 100000) {
			salary -= salary * 0.1;
					}
		else if(salary > 200000){
			salary -= salary * 0.2;
		}
		else {
			salary -= salary * 0.3;
		}
		return salary;
	}
};
class Contract : public Employee {
	int salary;
public:
	Contract(int s) : salary(s) {}
	int Salary()override {
		salary -= salary - 200;
		return salary;
	}
};
int main() {
	Permanent p(230000);
	cout << p.Salary() << endl;
	Contract c(33000);
	cout << c.Salary();
	}
