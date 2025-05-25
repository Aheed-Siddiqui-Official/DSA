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

class Student : public Person {
public:
    int rollNo;

    //parameterized constructor call
    Student(string name, int age, int rollNo) : Person(name, age) {
        this->rollNo = rollNo;
    }

    //non-parameterized constructor
    // Student () {
    //     cout << "Child Constructor" << endl;
    // }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no : " << rollNo << endl;
    }

    ~Student() {
        cout << "Child Destructor" << endl;
    }
};

int main() {
    Student s1("mas", 12, 123);
    // s1.name = "MAS";
    // s1.age = 22;
    // s1.rollNo = 123;
    s1.getInfo();
    return 0;
}