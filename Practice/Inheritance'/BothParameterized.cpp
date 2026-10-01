#include<iostream>

using namespace std;

class A{
    public: A(int x){cout<<"A constructor"<<x<<endl;}
};

class B:public A{
    public: 
    B(int x , int y):A(x+y)
    {
        cout<<"B constructor "<<x<<endl;
    }
};

int main(){
    B obb(10,20);
    A(30);
return 0;
}