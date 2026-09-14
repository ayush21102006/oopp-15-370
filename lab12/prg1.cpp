#include<bits/stdc++.h>
using namespace std ;

class point {
    int x , y ;
    public :
    point(int x=0 , int y=0):x{x},y{y}{}

    friend void operator<<(ostream &os , point p);

    point operator+(point p){
        int a = x + p.x ;
        int b = y + p.y ;
        point q(a,b);
        return q;
    }
};
     void operator<<(ostream &os , point p){
        cout<<p.x<<" "<<p.y<<endl;
 }


int main(){
    point p1(10,5);
    point p2(-9,16);
    point p3 = p1 + p2 ;
    cout<<p1;
    cout<<p2;
    cout<<p3;
}