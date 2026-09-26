#include <iostream>
using namespace std;

class point{
    int x,y;

public:
    void input();
    void show();
};

inline void point::input(){
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
}

inline void point::show(){
    cout<<"The value of x is : "<<x<<endl;
    cout<<"The value of y is : "<<y<<endl;
}

int main(){
    point p1,p2;
    cout<<"Point 1\n";
    p1.input();

    cout<<"Point 2\n";
    p2.input();

    cout<<"Point 1\n";
    p1.show();

    cout<<"Point 2\n";
    p2.show();

return 0;
}
