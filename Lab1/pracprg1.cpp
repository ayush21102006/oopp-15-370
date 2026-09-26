#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int roll;
    string branch;

    public:
    void input(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll;
        cout<<"Enter branch : ";
        cin>>branch;
    }

    void show(){
        cout<<"\nName : "<<name;
        cout<<"\nRoll No. : "<<roll;
        cout<<"\nBranch : "<<branch;
    }
};


int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1\n";
    s1.input();

    cout << "\nEnter details of Student 2\n";
    s2.input();

    cout << "\nStudent 1 Details";
    s1.show();

    cout << "\nStudent 2 Details";
    s2.show();

    return 0;
}