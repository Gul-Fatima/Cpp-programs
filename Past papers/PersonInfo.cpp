//) Create a class PersonType and DateType as component classes and show composition in enclosing class PersonInfo.Write a driver program also.
#include<iostream>
using namespace std;
class PersonType {
	string name;
	int idNo;
public:
	PersonType(){}
	PersonType(string n , int i) : name(n),idNo(i){}
	int getid() {
		return idNo;
	}
	string getname() {
		return name;
	}
};
class DateType {
	int date, month, year;
public:
	DateType(){}
	DateType(int d,int m,int y) : date(d),month(m),year(y){}
	int getdate() {
		return date;
	}
	int getmonth() {
		return month;
	}
	int getyr() {
		return year;
	}

};
class PersonInfo {
	PersonType person;
	DateType date;
public:
	PersonInfo(const PersonType& p, const DateType& d) : person(p), date(d) {}
	void info() {
		cout << "Name : " << person.getname() << endl;
		cout << "Id No : " << person.getid() << endl;
		cout << "Date : " << date.getyr() << " / " << date.getmonth() << " / " << date.getdate();
	
	}

};
int main() {
	PersonType person("Ali", 246);
	DateType date(20, 4, 2024);
	PersonInfo p(person,date);
	p.info();

}
