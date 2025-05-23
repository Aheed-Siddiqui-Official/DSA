#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    string name;
    //deep copy, heap
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj) {
        this->name = obj.name;
        //deep copy
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("mas", 12.32);
    Student s2(s1);
    s1.getInfo();

    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();
    return 0;
}