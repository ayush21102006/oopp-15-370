#include <iostream>
#include <vector>
using namespace std;

class Student {
    vector<int>marks;

public:
    Student() {
        marks={85, 92, 78, 88, 95};
    }

    void displayMarks() {
        cout<<"Student marks: ";
        for(auto mark:marks){
            cout<<mark<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Student s;
    s.displayMarks();

return 0;
}