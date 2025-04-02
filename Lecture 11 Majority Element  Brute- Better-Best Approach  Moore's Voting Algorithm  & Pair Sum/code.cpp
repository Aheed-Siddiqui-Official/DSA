#include <iostream>
#include <vector>
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

     vector<int> pairSum(vector<int> vec, int size, int target) {
        vector<int> ans;
            int i = 0;
            int j = size - 1;

            while (i < j) {

    }

int main() {

    int size;
    cout << "Enter size of array = ";
    cin >> size;

    vector<int> vec(size);

    for (int i = 0 ; i < size ; i++) {
        cin >> vec[i];
    }

    for (int j = 0 ; j < size ; j++) {
        cout << vec[j] << " ";
    }

    cout << endl;

    int targetSum;
    cout << "Enter targeted sum = ";
    cin >> targetSum;

                                        // PAIR SUM BRUTE APPROACH

    // vector<int> ans = pairSum(vec, targetSum, size);
    // cout << ans[0] << ", " << ans[1];

                                        // PAIR SUM OPTIMIZED APPROACH
    
    vector<int> ans = pairSum(vec, targetSum, size);
    cout << ans[0] << ", " << ans[1];
    
    


    return 0;
}