#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    Number add(const Number &obj) {
        Number temp;
        temp.value = this->value + obj.value;
        return temp; 
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(15), n2(25);

    cout << "Object n1: ";
    n1.display();

    cout << "Object n2: ";
    n2.display();

    Number n3 = n1.add(n2);

    cout << "Result object n3 (n1 + n2): ";
    n3.display();

    return 0;
}