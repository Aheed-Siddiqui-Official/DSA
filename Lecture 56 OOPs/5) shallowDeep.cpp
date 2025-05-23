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

    