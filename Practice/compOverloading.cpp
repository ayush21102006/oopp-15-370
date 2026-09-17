#include<iostream>

using namespace std;

class comp{
    int real , img;

    public:
    comp(int r=0 ,int i=0):real{r},img{i}{}

    comp operator+(comp c)
    {
        this.real , this.img ;
        c.real , c.img;
        int r = this.real + c.real;
        int i = this.img + c.img ;
        comp t(r,i);
        return t;

    }


    void show(){
        cout<<real<<" , "<<img<<endl;
    }
};

int main(){
    comp c1(5,20);
    comp c2(10,15);
    c1.show();
    c2.show();
    comp c3 = c1 + c2;
    cout<<c3;

return 0;
}