#include<iostream>

using namespace std;

class A{
    public: A(int x){cout<<"A constructor"<<x<<endl;}
};

class B:public A{
    public: 
    B():A(10)
    {
        cout<<"B constructor "<<endl;
    }
};

int main(){
    B obb;

return 0;
}