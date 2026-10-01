#include<iostream>

using namespace std;

class Emp{
    public:
    Emp(){
        cout<<"Employee constructor"<<endl;
    }
    ~Emp(){
        cout<<"Emp destructor"<<endl;
    }
};

class Man : public Emp{
    public:
    Man(){
        cout<<"Manager constructor"<<endl;
    }
    ~Man(){
        cout<<"Man destructor"<<endl;
    }
};


class Family{
    public:
    Family(){
        cout<<"Family Constructor"<<endl;
    }
    ~Family(){
        cout<<"Family destructor"<<endl;
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