#include <iostream>
#include <string>
using namespace std;

class Shape {
    virtual void draw() = 0;//pure virtual function, automatically abstract class, its only idea we can't make objects of this class
};

class Circle : public Shape {
    public:
    void draw() {
        cout << "drawing a circle" << endl;
    }
};

int main() {
    //object of child class
    Circle c1;
    c1.draw();
    return 0;
}