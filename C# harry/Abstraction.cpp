#include <iostream>
#include <string> // Include the <string> header for using the string class
using namespace std;
//and this class acts as (say : buttons of remote) that can invoke functionalities without caring about how it is happening.
class AbstractEmployee {
public:
    virtual void anyfunction() = 0;
}; // Use braces to define the class
//In the class , there is backened where our function and data is defined
class Employee : public AbstractEmployee { // Added inheritance from AbstractEmployee
private:
    string Name;
    string Company; 
    int Age;
public:
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

    void setAge(int age) {
        Age = age;
    }

    int getAge() {
        return Age;
    }

    void anyfunction() {
        // any condition related
        if (Age > 30) {
            cout << Name << " got promoted." << endl;
        }
        else {
            cout << Name << " No promotion." << endl;
        }
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
    Employee employee1 = Employee("Alex", "Yt", 35);
    Employee employee2 = Employee("John", "Google", 27);

    // Usage of anyfunction
    employee1.anyfunction();
    employee2.anyfunction();

    cin.get(); // Wait for user input
}
