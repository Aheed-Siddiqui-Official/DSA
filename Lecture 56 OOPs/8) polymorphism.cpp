#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student() {
        cout << "non param cons\n";
    }

    Student(string name) {
        this->name = name;
        cout << "param cons";
    }
};


int main() {
    //polymorphism example
    //constructor overloading, compile time polymorphism
    // Student s1;
    Student s1("mas");
    return 0;
}