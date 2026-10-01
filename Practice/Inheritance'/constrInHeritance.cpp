#include<iostream>

using namespace std;

class Emp{
    public:
    Emp(){
        cout<<"Employee constructor"<<endl;
    }
   
};

class Man : public Emp{
    public:
    Man(){
        cout<<"Manager constructor"<<endl;
    }
    
};


class Family{
    public:
    Family(){
        cout<<"Family Constructor"<<endl;
    }
};

// class Director:public Man , public Family{ 
class Director:public Family , public Man{
public:
    Director(){
        cout<<"Director Constructor"<<endl;
    }
};



int main(){
    // Emp e;
    // Man m;
    Director D;
return 0;
}