// volating srp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for std::find

using namespace std;

class EduSystem {
    string studentName;
    vector<string> Student;

public:
    EduSystem() {}

    void enrollStudent(string name) {
        if (find(Student.begin(), Student.end(), name) == Student.end()) {
            Student.push_back(name);
            cout << name << " enrolled successfully." << endl;
        } else {
            cout << "Student already enrolled." << endl;
        }
    }

    double calculateGPA(const vector<double>& grades) {
        if (grades.empty()) {
            return 0.0;
        }

        double total = 0;
        for (const auto& g : grades) {
            total += g;
        }

        return total / grades.size();
    }

    void printTranscript(const string& name, const vector<double>& grades) {
        cout << "Transcript for " << name << ":" << endl;
        cout << "Grades: ";
        for (double g : grades) {
            cout << g << " ";
        }
        cout << endl;
        cout << "GPA: " << calculateGPA(grades) << endl;
    }
};

int main() {
    EduSystem edu;
    edu.enrollStudent("Alice");
    edu.enrollStudent("Bob");
    edu.enrollStudent("Alice"); // duplicate

    vector<double> aliceGrades = {3.5, 3.7, 4.0};
    edu.printTranscript("Alice", aliceGrades);

    return 0;
}


//following SRP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class EduSystem {
    vector<string> students;

public:
    EduSystem() {}

    void enrollStudent(const string& name) {
        if (!isStudentEnrolled()) {
            students.push_back(name);
            cout << name << " enrolled successfully." << endl;
        } else {
            cout << "Student already enrolled." << endl;
        }
    }

    bool isStudentEnrolled(const string& name) const {
        return find(students.begin(), students.end(), name) != students.end();
    }
};

class GPAcalculator {
public:
    double calculateGPA(const vector<double>& grades) {
        if (grades.empty()) {
            return 0.0;
        }

        double total = 0;
        for (const auto& g : grades) {
            total += g;
        }

        return total / grades.size();
    }
};

class TranscriptPrinter {
    GPAcalculator calculator;

public:
    void printTranscript(const string& name, const vector<double>& grades, const EduSystem& e) {
        if (!e.isStudentEnrolled(name)) {
            cout << name << " is not enrolled in the system." << endl;
            return;
        }

        cout << "Transcript for " << name << ":" << endl;
        cout << "Grades: ";
        for (double g : grades) {
            cout << g << " ";
        }
        cout << endl;
        cout << "GPA: " << calculator.calculateGPA(grades) << endl;
    }
};

int main() {
    EduSystem edu;
    edu.enrollStudent("Alice");
    edu.enrollStudent("Bob");
    edu.enrollStudent("Alice"); // duplicate

    vector<double> aliceGrades = {3.5, 3.7, 4.0};

    TranscriptPrinter printer;
    printer.printTranscript("Alice", aliceGrades, edu);
    printer.printTranscript("Charlie", {3.0, 2.5}, edu); // not enrolled

    return 0;
}
