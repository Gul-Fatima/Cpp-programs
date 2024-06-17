/// <ENCAPSUATION>
/// it is a process of tying all data and functions in a class and making that class private or partially private
/// so others can't modify the actual methods and attributes.     or say 
/// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
///</ENCAPSUATION>
#include<iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    //making getter and setter
    //we can add conditional statements while defining get/set methods
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }

    string getCompany() {
        
        return Company;
    }
    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("Alex", "Yt", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Google", 27);
    employee2.IntroduceYourself();
    employee1.setCompany("Gog");
    //Accessing through get and set method
    std::cout << employee1.getName() << " is hired in " << employee1.getCompany() << endl;



    cin.get(); // Wait for user input
}

