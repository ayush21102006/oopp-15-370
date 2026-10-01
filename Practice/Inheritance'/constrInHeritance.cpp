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


int main(){
    // Emp e;
    Man m;

return 0;
}