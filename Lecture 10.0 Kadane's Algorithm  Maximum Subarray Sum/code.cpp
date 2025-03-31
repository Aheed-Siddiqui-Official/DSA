#include <iostream>
#include <climits>
using namespace std;

int main() {

                                        // PROGRAM TO PRINT ALL SUBARRAY'S

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // for (int st = 0 ; st < n ; st++) {
    //     for (int end = st ; end < n; end++) {
    //         for (int i = st ; i <= end ; i++) {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

                                        // PROGRAM TO FIND SUM OF MAX SUB ARRAY
                                        // BRUTAL APPROACH

    // int maxSum = INT_MIN;
    
    // for(int st = 0 ; st < n ; st++) {
    //     int currSum = 0;
    //     for(int end = st ; end < n ; end++) {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }

    // cout << "MAX SUB ARRAY = " << maxSum << endl;

                                        // PROGRAM TO FIND SUM OF MAX SUB ARRAY Kadane's Algorithm LEETCODE 53

    // int currSum = 0;
    // int maxSum = INT_MIN;

    // for(int i = 0 ; i < n ; i++) {
    //     currSum += arr[i];
    //     maxSum = max(currSum, maxSum);

    //     if (currSum < 0) {
    //         currSum = 0;
    //     }
    // }

    // cout << "MAX SUB ARRAY = " << maxSum << endl;

                







    return 0;
}