#include <iostream>
using namespace std;

class Student {
    int roll_no;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter roll number, name, and marks: ";
        cin >> roll_no;
        cin >> name;
        cin >> marks;
    }

    void display() {
        cout << "Student Details:" << endl;
        cout << roll_no << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main() {
    Student S;
    S.input();
    S.display();
    return 0;
}
