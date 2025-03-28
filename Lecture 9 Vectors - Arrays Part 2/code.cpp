#include <iostream>
#include <vector>
using namespace std;

// int singleNumber(vector<int>& nums) {
//     int ans = 0;

//     for (int val : nums) {
//         ans ^= val;
//     }
//     return ans;
// }

    void reverseVector(vector<int>& vec, int size) {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            swap(vec[start] , vec[end]);
            start++;
            end--; 
        }
    }
    
int main() {

                                        // DEFINITION OF VECTORS 

    // vector<int> vec1; // 0
    // // cout << vec1[0];

    // vector<int> vec2 = {1, 2, 3};
    // // cout << vec2[0] << endl;

    //             // Size, Values
    // vector<int> vec3(3, 0);
    // cout << vec3[0] << endl;
    // cout << vec3[1] << endl;
    // cout << vec3[2] << endl;

                                        // FOR EACH LOOP ON VECTORS

    // vector<char> vec = {'a', 'b', 'c'};

    // for(char val : vec) {
    //     cout << val << endl;
    // }

   
    

    return 0;
}