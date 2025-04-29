#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





int main() {
    int N = 7, C = 4;
    vector<int> arr = {1, 8, 7, 11, 12, 14, 20};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}