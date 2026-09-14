#include<bits/stdc++.h>
using namespace std ;

int add (int x ,int y){
    return x + y ;
}

float add(float x, float y){
    return x + y ;
}

string add(string x, string y){
    return x + y ;
}


int main() {
    
    int intResult = add(10, 20);
    cout << "Addition (integers) : " << intResult << endl;


    float floatResult = add(5.5f, 4.5f);
    cout << "Addition (floats) : " << floatResult << endl;

    
    string strResult = add("Ayush, ", "Kumar");
    cout << "Concatenation (strings): " << strResult << endl;

    return 0;
}