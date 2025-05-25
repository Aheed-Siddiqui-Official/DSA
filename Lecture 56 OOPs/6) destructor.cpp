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

    