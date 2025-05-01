#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

                                        // BRUTE FORCE O(nlogn)

    // sort(nums.begin(), nums.end());

    // for(int i = 0 ; i<nums.size() ; i++) {
    //     cout << nums[i];
    // }

                                        // OPTIMIZED O(n)

    // int countZero = 0;
    // int countOne = 0;
    // int countTwo = 0;

    // //O(n)
    // for(int i = 0 ; i<nums.size() ; i++) {
    //     if(nums[i] == 0) {
    //         countZero++;
    //     } else if (nums[i] == 1) {
    //         countOne++;
    //     } else{
    //         countTwo++;
    //     }
    // }

    // int idx = 0;

    // for(int j = 0 ; j<countZero ; j++) {
    //     nums[idx++] = 0;
    // }

    // for(int j = 0 ; j<countOne ; j++) {
    //     nums[idx++] = 1;
    // }

    // for(int j = 0 ; j<countTwo ; j++) {
    //     nums[idx++] = 2;
    // }

    // for (int x : nums) {
    //     cout << x << " ";
    // }

                                    // MOST OPTIMAL O(n) (DNF ALGORITHM)

    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid++; low++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
