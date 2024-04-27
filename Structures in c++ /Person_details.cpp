//Define a structure named Person with members name and age.Create a variable of this structure type, initialize it, and display its contents.

#include <iostream>
#include <conio.h>
using namespace std;
struct Person {
    string name;
    int age;
};
int main() {
    Person person1;
    person1.name = "Gul Fatima";
    person1.age = 44;
    cout << "Name : " << person1.name << endl;
    cout << "Age : " << person1.age << endl;
    _getch();
    return 0;
}
