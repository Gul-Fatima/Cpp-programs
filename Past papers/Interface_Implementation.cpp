////a) Consider the header file of class GradeBook.Implement the definition of member functions(4) by separating interface from implementation.
//#include <string> // class GradeBook uses C++ standard string class
//#include<iostream>
//using namespace std;
//// GradeBook class definition
#include <iostream>
#include "GradeBook.h"
using namespace std;
//class GradeBook
//{
//public:
//	GradeBook(string, string); // constructor that initializes courseName and courseInstructorName
GradeBook ::GradeBook(string courseName, string courseInstructorName) : courseName(courseName),courseInstructorName(courseInstructorName){}
//	void setCourseName(string); // function that sets the course name
void GradeBook::setCourseName(string courseName) {
	courseName = courseName;
}
//	string getCourseName(); // function that gets the course name
string GradeBook::getCourseName() {
	return courseName;
}
//	void displayMessage(); // function that displays a welcome message
void GradeBook::displayMessage() {
	cout << "Welcome"<< endl;
}
//	void setCourseInstructorName(string); // function that sets the course instructor name
void GradeBook :: setCourseInstructorName(string courseInstructorName ){
	courseInstructorName = courseInstructorName;
}
//	string getCourseInstructorName(); //
string GradeBook::getCourseInstructorName() {
	return courseInstructorName;
}
// b) function that get the course instructor name
//private:
//	string courseName; // course name for this Grade Book
//	string courseInstructorName; // a) course instructor name for this GradeBook
//}; // end class GradeBook


int main() {
    // Create a GradeBook object
    GradeBook myGradeBook("CS101 Introduction to C++ Programming", "John Doe");

    // Display initial state of the GradeBook
    myGradeBook.displayMessage();

    // Change course name and instructor
    myGradeBook.setCourseName("CS102 Data Structures in C++");
    myGradeBook.setCourseInstructorName("Jane Smith");

    // Display updated state of the GradeBook
    myGradeBook.displayMessage();

    return 0;
}
