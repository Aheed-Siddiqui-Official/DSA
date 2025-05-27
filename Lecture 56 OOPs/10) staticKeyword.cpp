#include <iostream>
#include <string>
using namespace std;

//Static Keyword
void func() {
    static int x = 0;
    cout << "x : " << x << endl;
    x++;
};

