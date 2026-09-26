#include<iostream>

using namespace std;
class point{
    int x,y;
    public:
    void input(){
        cout<<"Enter the value of x : ";
        cin>>x;
        cout<<"Enter the value of y : ";
        cin>>y;
    }
    void show(){
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y<<endl;
        cout<<endl;
        cout<<endl;
    }
};

int main()
{
    point p1, p2;
    cout << "Point 1\n";
    p1.input();
    cout << "\nPoint 2\n";
    p2.input();

    cout << "\nPoint 1\n ";
    p1.show();
    cout << "Point 2\n";
    p2.show();

}