#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    //properties, attributes
    string name;
    string dept;
    string subject;

    //methods, member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    