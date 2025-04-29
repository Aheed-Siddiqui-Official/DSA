#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) {
    int cows = 1, lastStallPos = arr[0];

    for(int i = 1 ; i<N ; i++) {
        if(arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }

        if(cows == C) {
            return true;
        }
    }
    return false;
}




int main() {
    int N = 7, C = 4;
    vector<int> arr = {1, 8, 7, 11, 12, 14, 20};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}