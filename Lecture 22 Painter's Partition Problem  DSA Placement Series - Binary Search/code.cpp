#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedLimit) { //O(n)
    int painters = 1, time = 0;

    for(int i = 0 ; i<n ; i++) {
        if(time + arr[i] <= maxAllowedLimit) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
} 

int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;

    for(int i = 0 ; i<n ; i++) { //O(n)
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while(st <= end) { //(Olog(sum) * n)
        int mid = st + (end-st)/2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector <int> arr = {30, 40, 60, 70, 100};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}