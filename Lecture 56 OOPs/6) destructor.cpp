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

    ~Student() {
        cout << "Destructor" << endl;
        //how to delete dynamic memory
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("mas", 12.32);
    s1.getInfo();

    return 0;
}