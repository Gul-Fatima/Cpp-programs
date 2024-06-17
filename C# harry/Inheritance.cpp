#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee {
public:
    virtual void anyfunction() = 0;
};

class Employee : public AbstractEmployee {
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

class Developer : public Employee {
public:
    string FavProgramminglanguage;

    Developer(string name, string company, int age, string favprolan) : Employee(name, company, age) {
        FavProgramminglanguage = favprolan;
    };

    void FixBug() {
        cout << getName() << " likes " << FavProgramminglanguage << " language";
    }
};

int main() {
    Employee employee1 = Employee("Alex", "Yt", 25);
    Employee employee2 = Employee("John", "Google", 27);

    // Usage of anyfunction
    employee1.anyfunction();
    employee2.anyfunction();

    Developer d = Developer("Alex", "YT", 25, "Python");
    d.FixBug();

    cin.get(); // Wait for user input
}
