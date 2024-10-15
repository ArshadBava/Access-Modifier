#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

protected:
    int rollNumber;

public:
    int age;
    
    Student(string studentName, int studentRollNumber, int studentAge) {
        name = studentName;
        rollNumber = studentRollNumber;
        age = studentAge;
    }
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
    }
};

class GraduateStudent : public Student {
public:
    GraduateStudent(string name, int roll, int age) : Student(name, roll, age) {}

    void displayGraduateInfo() {
        cout << "Roll Number (protected): " << rollNumber << endl;
        cout << "Age (public): " << age << endl;
    }
};

int main() {
    string name;
    int rollNumber, age;
    
    cout << "Enter details for the Student:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Age: ";
    cin >> age;

    Student s1(name, rollNumber, age);
    
    cout << "\nStudent's age (public): " << s1.age << endl;
    s1.displayInfo();
    
    cin.ignore();
    cout << "\nEnter details for the Graduate Student:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Age: ";
    cin >> age;

    GraduateStudent gs1(name, rollNumber, age);
    gs1.displayGraduateInfo();
    
    return 0;
}

