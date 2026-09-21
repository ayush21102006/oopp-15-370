#include <iostream>

using namespace std;

class comp{
    int real , img;

    public:
    comp(int r=0 ,int i=0):real{r},img{i}{}

    //for prefix ++p
    comp operator ++(){
        real++;
        img++;
        return *this;
    }

    void show(){
        cout<<real<<" , "<<img<<endl;
    }
};

/*to differentiate postfix and prefix decrement operator overloading two function will be define as a member function 0 argument function for prefix(increment and decrement)
and one argument(int) for postfix operator (Increment and decrem,ent)*/

int main(){
    comp c1(5,20);
    comp c2;

    cout<<"Before Increment:"<<endl;
    c1.show();

    comp c3 = ++c1;

    cout<<"After Increment c1:"<<endl;
    c1.show();

    cout<<"Value of c3:"<<endl;
    c3.show();

    return 0;
}
