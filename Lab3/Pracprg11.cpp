#include <iostream>
using namespace std;

class Calculator{
public:
    inline int square(int n){
        return n*n;
    }

    int add(int a,int b=0){
        return a+b;
    }

    int multiply(int a,int b){
        return a*b;
    }

    double multiply(double a,double b){
        return a*b;
    }
};

int main(){
    Calculator c;
    cout<<"Square of 5 = "<<c.square(5)<<endl;
    cout<<"Addition = "<<c.add(10, 20)<<endl;

    cout<<"Addition with one value = "<<c.add(10)<<endl;
    cout<<"Multiplication of integers = "<<c.multiply(4, 5)<<endl;
    cout<<"Multiplication of decimal numbers = "<<c.multiply(2.5, 4.0)<<endl;

return 0;
}
