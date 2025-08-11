#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setName(string name) {
        this->name = name; 
    }
    
    string getName() {
        return name;
    }

    void setMarks(int marks) {
        if (marks >= 0 && marks <= 100) {
            this->marks = marks;
        } else {
            cout << "Invalid marks! Please enter between 0 and 100." << endl;
            this->marks = 0; 
        }
    }

    int getMarks() {
        return marks;
    }

    char getGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
};

int main() {
    Student s1;
    string name;
    int marks;

    cout << "Enter student name: ";
    getline(cin, name);
    s1.setName(name);

    cout << "Enter marks (0-100): ";
    cin >> marks;
    s1.setMarks(marks);

    cout << "\nStudent: " << s1.getName() << endl;
    cout << "Marks: " << s1.getMarks() << endl;
    cout << "Grade: " << s1.getGrade() << endl;

    return 0;
}