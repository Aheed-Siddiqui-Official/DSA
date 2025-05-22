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

    //setter
    void setSalary(double s) {
        salary = s;
    }

    //getter
    double getSalary() {
        return salary;
    }
};



int main() {
    //object
    Teacher t1;
    t1.name = "MAS";
    t1.dept = "CS";
    t1.subject = "CS";
    t1.setSalary(124.343);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}