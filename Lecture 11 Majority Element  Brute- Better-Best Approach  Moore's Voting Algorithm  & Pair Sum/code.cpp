#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

                                        // PAIR SUM BRUTE APPROACH

                        // 2,4, 6, 8, 10      14          5
    // vector<int> pairSum(vector<int> vec, int target, int size) {
    //     vector<int> ans;


    //     for (int i = 0 ; i < size ; i++) {
    //         for (int j = i + 1 ; j < size ; j++) {
    //             if (vec[i] + vec[j] == target) {
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 return ans;
    //             }   
    //         }    
    //     }

    //     return ans;
    //}

                                        // PAIR SUM OPTIMIZED APPROACH

    //  vector<int> pairSum(vector<int>& vec, int size, int target) {
    //     vector<int> ans;
    //         int i = 0;
    //         int j = size - 1;

    //         while (i < j) {
    //             int pairSum = vec[i] + vec[j];

    //             if (pairSum > target) {
    //                 j--;
    //             } else if (pairSum < target) {
    //                 i++;
    //             } else {
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 return ans;
    //             }
                
    //         }
    //         return ans;
    // }



                                        // MAJORITY ELEMENT OPTIMIZED

    // int majorityElement(vector<int>& vec, int size) {
    
    //     sort(vec.begin(), vec.end());

    //     int freq = 1;
    //     int ans = vec[0];

    //     for (int i = 0 ; i < size ; i++) {
    //         if(vec[i] == vec[i - 1]) {
    //             freq++;
    //         } else {
    //             freq = 1;
    //             ans = vec[i];
    //         }

    //         if(freq > size / 2) {
    //             return ans;
    //         }
    //     }
    //     return ans;
    // }

                                        //MOORE'S VOTING ALGORITHM

    int majorityElement(vector<int>& vec, int size) {
        int freq = 0;
        int ans;

        for(int i = 0 ; i < size ; i++) {
            if(freq == 0){
                ans = vec[i];
            } if (ans == vec[i]) {
                freq++;
            } else {
                freq--;
            }
        }

        int count = 0;
        for(int val : vec) {
            if(val == ans) {
                count++;
            }
        }

        if(count > size / 2) {
            return ans;
        } else {
            return -1;
        }


        return ans;
    }





int main() {

    int size;
    cout << "Enter size of array = ";
    cin >> size;

    vector<int> vec(size);

    for (int i = 0 ; i < size ; i++) {
        cin >> vec[i];
    }

    for (int i = 0 ; i < size ; i++) {
        cout << vec[i] << " ";
    }

    cout << endl;

                                        // PAIR SUM BRUTE APPROACH

    // vector<int> ans = pairSum(vec, targetSum, size);
    // cout << ans[0] << ", " << ans[1];

    // int targetSum;
    // cout << "Enter targeted sum = ";
    // cin >> targetSum;

                                        // PAIR SUM OPTIMIZED APPROACH
    
    // vector<int> ans = pairSum(vec, targetSum, size);
    // cout << ans[0] << ", " << ans[1];

    // int targetSum;
    // cout << "Enter targeted sum = ";
    // cin >> targetSum;

                                        // MAJORITY ELEMENT

                                        //BRUTE FORCE
   
    // cout << "Majority Element = " << majorityElement(vec, size);

                                        //OPTIMIZED

    // cout << "Majority Element = " << majorityElement(vec, size);
                                            
                                        //MOORE'S VOTING ALGORITHM

    cout << "Majority Element = " << majorityElement(vec, size);







    return 0;
}