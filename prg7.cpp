#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;
    static int totalMarks;   

public:
    Student(string n, int m) {
        name = n;
        marks = m;
        totalMarks += m;
    }

    friend void showDetails(const Student& s);

    static void showTotalMarks() {
        cout << "Total Marks of all students = " << totalMarks << endl;
    }
};

int Student::totalMarks = 0;

void showDetails(const Student& s) {
    cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
}

int main() {
    Student s1("Ayush", 85);
    Student s2("Rohit", 90);
    Student s3("Dhruv", 75);

    showDetails(s1);
    showDetails(s2);
    showDetails(s3);

    Student::showTotalMarks();
}
