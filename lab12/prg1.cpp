#include<bits/stdc++.h>
using namespace std ;

class point {
    int x , y ;
    public :
    point(int x=0 , int y=0):x{x},y{y}{}

friend ostream &operator<<(ostream &os , point p);

    point operator+(point p){
        int a = x + p.x ;
        int b = y + p.y ;
        point q(a,b);
        return q;
    }
};

ostream &operator<<(ostream &os , point p){
    os<<p.x<<" "<<p.y<<endl;
    return os; 
}

int main(){
    point p1(10,5);
    point p2(-9,16);
    point p3 = p1 + p2 ;
    cout<<p1<<p2<<p3; // method chaining 
}