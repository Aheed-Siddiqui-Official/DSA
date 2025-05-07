#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector <char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << compress(chars);
    return 0;
}