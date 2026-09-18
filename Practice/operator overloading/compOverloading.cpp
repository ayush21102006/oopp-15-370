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

    /*friend comp operator +(comp c , int x);*/

    friend comp operator +(int x , comp c);


    void show(){
        cout<<real<<" , "<<img<<endl;
    }
};

/*comp operator +(comp c , int x){
    return comp(c.real + x , c.img + x);
}*/

comp operator +(int x , comp c){
    return comp(x + c.real ,x + c.img);
}


/* When left side of any binary operator is universal(int , long , float , char ), any predefined data , 
then that operator must be overloaded as friend function .*/


int main(){
    comp c1(5,20);
    comp c2;
    c1.show();
    // c2.show();
    /*comp c3 = c1 + 5;*/
    comp c3 = 6 + c1;
    c3.show();

return 0;
}