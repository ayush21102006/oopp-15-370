#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
    string branch;

public:
    Student(string n, int r, string b){
        name = n;
        roll = r;
        branch = b;
    }

    void show(){
        cout << "\nName : " << name;
        cout << "\nRoll : " << roll;
        cout << "\nBranch : " << branch << endl;
    }
};

int main(){
    Student s1("Ayush", 370, "CSE");
    Student s2("Dhruv", 456, "CSE");

    s1.show();
    s2.show();

}