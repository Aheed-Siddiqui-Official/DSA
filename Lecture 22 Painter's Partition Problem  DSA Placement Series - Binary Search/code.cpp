#include <iostream>
#include <climits>
#include <vector>
using namespace std;



int main() {
    vector <int> arr = {30, 40, 60, 70, 100};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}