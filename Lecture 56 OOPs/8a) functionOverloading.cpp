#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "int : " << x << endl;
    }

    void show(char ch) {
        cout << "char : " << ch << endl;
    }
};


int main() {
    //compile time polymorphism
    Print p1;
    // p1.show(4);
    p1.show('a');
    return 0;
}