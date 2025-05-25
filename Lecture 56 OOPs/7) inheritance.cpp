#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    //parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // //non-parameterized constructor
    // Person () {
    //     cout << "Parent Constructor" << endl;
    // }

    
    ~Person() {
        cout << "Parent Destructor" << endl;
    }
};

