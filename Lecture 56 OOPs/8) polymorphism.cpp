#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student() {
        cout << "non param cons\n";
    }

    