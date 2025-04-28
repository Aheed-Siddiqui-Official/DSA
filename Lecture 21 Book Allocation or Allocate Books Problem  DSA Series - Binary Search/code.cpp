#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}