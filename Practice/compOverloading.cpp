#include<iostream>

using namespace std;

class comp{
    int real , img;

    public:
    comp(int r=0 ,int i=0):real{r},img{i}{}

    // comp operator +(comp c)
    // {
    //     int r = this->real + c.real;
    //     int i = this->img + c.img ;
    //     comp t(r,i);
    //     return t;
    // }

    // comp operator +(comp c){
    //     return comp(real + c.real , img + c.img);
    // }

    friend comp operator +(comp c , int x);

    void show(){
        cout<<real<<" , "<<img<<endl;
    }
};

comp operator +(comp c , int x){
    return comp(c.real + x , c.img + x);
}


int main(){
    comp c1(5,20);
    comp c2;
    c1.show();
    // c2.show();
    comp c3 = c1 + 5;
    c3.show();

return 0;
}