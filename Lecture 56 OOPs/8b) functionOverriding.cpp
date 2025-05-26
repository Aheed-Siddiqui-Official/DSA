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

    