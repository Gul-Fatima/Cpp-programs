#include<iostream>

using namespace std;
/// <summary>
/// here we have created class Employee having 3 attributes Name, company, age along with their datatype , It is just a blueprint that what could be the properties of an employee 

/// </summary>
class Employee {
public:

    /// <Access Modifiers>
/// They are of 3 types:
///     Public : can be globally accessed
///     Private : hidden
///     Protected : immediate b/w public and private

/// </Access Modifiers>
    string Name;
    string Company;
    int Age;
    //Methods are functions that belongs to the class.

    //    There are two ways to define functions that belongs to a class :

    //    Inside class definition
    //    Outside class definition
    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;

    }
};

int main() {
    ////Here we have declared a simple variable number of datatype int
    //int number;
    ////Similarly a class also works as datatype so we first wrote class: Employee and then variable name : employee1;  <--------> INITIATING AN OBJECT
    Employee employee1;
    //employee1.    now when i'll try to access it won't as class by default is private so we use concept of access modifiers.To access we use public.
    
    //%%%%%%%%%%%%key tips : always enclose string in " - " instead of ' - ' ,as single quotation interpret it as char  %%%%%%%%%%%%%%%%%%%%%%%%%%%555
    employee1.Age = 25;
    employee1.Company="Yt";
    employee1.Name = "Alex";
    employee1.IntroduceYourself();
   
    //-------------iNITIATING ANOTHER OBJECT : employee2 --------------------------------
    Employee employee2;
    employee2.Age = 27;
    employee2.Company = "Google";
    employee2.Name = "John";
    employee2.IntroduceYourself();


    cin.get(); // Wait for user input
}
