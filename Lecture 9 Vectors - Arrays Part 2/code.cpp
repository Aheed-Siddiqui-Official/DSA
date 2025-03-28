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

                                        // VECTOR FUNCTIONS

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    //                                     // SIZE

    // cout << "size = " << vec.size() << endl;

    //                                     // PUSH BACK ADDS ELEMENT AFTER LAST

    // vec.push_back('f');
    // vec.push_back('g');
    // vec.push_back('h');
    // cout << "size after push back = " << vec.size() << endl;

    //                                     // POP BACK DELETES ELEMENT FROM LAST

    // vec.pop_back();
    // cout << "size after pop back = " << vec.size() << endl;

    //                                     // FRONT PRINTS FIRST VALUE
    
    // cout << "first value = " << vec.front() << endl;

    //                                     // BACK PRINTS LAST VALUE

    // cout << "last value = " << vec.back() << endl;
                                        
    //                                     // AT INDEX NO

    // cout << "target index = " << vec.at(3) << endl;

                                            // MEMORY ALLOCATION IN VECTORS

    // vector<int> vec;

    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // cout << vec.size() << endl; // 3
    // cout << vec.capacity() << endl;  // 4

    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // cout << vec.size() << endl; // 5
    // cout << vec.capacity() << endl;  // 8

      

    return 0;
}