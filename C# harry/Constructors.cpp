#include<iostream>
/// <CONSTRUCTORS>
/// when an object of a classis created a constructor is envoked
/// </CONSTRUCTORS>

using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name,string company , int age  ) {
        Name = name;
        Company = company;
        Age = age;
         
    }
};

int main() {
    Employee employee1 =Employee("Alex","Yt",25);
    /*employee1.Age = 25; --| this Employee ... constructor will replace these 3 line of code
    employee1.Company = "Yt";
    employee1.Name = "Alex";*/
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Google", 27);
    employee2.Age = 27;
    employee2.Company = "Google";
    employee2.Name = "John";
    employee2.IntroduceYourself();

    cin.get(); // Wait for user input
}
