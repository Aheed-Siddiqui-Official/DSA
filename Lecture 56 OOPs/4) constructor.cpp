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

    //constructor creation
    //non-parameterized constructor
    // Teacher() {
    //     // cout << "CS\n";
    //     dept = "CS";
    // }

    //parameterized constructor
    // Teacher (string n, string d, string s, double sal) {
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }


    //this function
    Teacher (string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //custom copy constructor
    Teacher(Teacher &orgObj) {
        cout << "iam copy cons...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }


    void getInfo() {
        cout << "name : " << name << endl;
        cout << "sub : " << subject << endl;
    }
};



int main() {
    //object
    Teacher t1("MAS", "CS", "CPP", 123.21); //constructor call
    t1.getInfo();

    //copy constructor
    Teacher t2(t1);
    t2.getInfo();

    return 0;
}