#include <iostream>
using namespace std;

void callByValue(int x){
    x=x+10;
}

void callByRef(int &x){
    x=x+10;
}

void callByAddress(int *x){
    *x= *x+10;
}

int main(){
    int a= 20;
    int b= 20;
    int c= 20;

    callByValue(a);
    callByRef(b);
    callByAddress(&c);
    cout <<"After call by value: "<<a <<endl;
    cout<<"After call by reference: "<< b<<endl;
    cout<<"After call by address: "<<c<<endl;

    return 0;
}