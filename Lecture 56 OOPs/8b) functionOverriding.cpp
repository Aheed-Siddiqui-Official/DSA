#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void show() {
        cout << "parent class" << endl;
    }

    void virtual virtfunc() {
        cout << "parent virtual function" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "child class" << endl;
    }

    void virtual virtfunc() {
        cout << "child virtual function" << endl;
    }
};

int main() {
    //runtime polymorphism, function overriding
    Parent p1;
    Child c1;
    c1.show();
    p1.show();

    //virtual function same as function overriding
    //dynamic in nature
    //called during runtime
    c1.virtfunc();
    return 0;
}