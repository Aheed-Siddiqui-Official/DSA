#include <iostream>
#include <string>
using namespace std;

class Shape {
    virtual void draw() = 0;//pure virtual function, automatically abstract class, its only idea we can't make objects of this class
};

