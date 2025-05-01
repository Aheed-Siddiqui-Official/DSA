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



    return 0;
}
