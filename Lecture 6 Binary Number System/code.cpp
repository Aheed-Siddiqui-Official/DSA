#include<iostream>
using namespace std;

                                        // decToBinary Function

// int decToBinary(int decNum) { // 3 // 1
//     int ans = 0;
//     int pow = 1;
    
//     while(decNum > 0) { // 3 > 0 // 1 > 0
//     int rem = decNum % 2; // 3 % 2 => 1 // 1 % 2 => 1
//     decNum /= 2; // 3 / 2 => 1 // 1 / 2 => 0

//     ans += (rem * pow); // 1 * 1 => 0 + 1 => 1 // 1 * 10 => 10 + 1 => 11
//     pow *= 10; // 1 * 10 => 10
//     }

//     return ans;
// }

// int decToBinary(int decNum) {
//     int ans = 0;
//     int pow = 1;

//     while(decNum > 0) {
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }

//     return ans;
// }

                                        // binaryTodec Function

    int binaryTodec(int binNum) { // 101 // 10 // 1
        int ans = 0;
        int pow = 1;

        while(binNum > 0) {
            int rem = binNum % 10; // 1 // 0 // 1
            ans += (rem * pow); // 1 // 0 // 4 => 5

            binNum /= 10; // 10 // 1 // 0
            pow *= 2; // 2 // 4 // 8
        }

        return ans;
    }


int main() {
    // int decNum;
    // cout << "Enter Decimal Number : ";
    // cin >> decNum;

    // for (int i = 1; i <= decNum; i++)
    // {
    //     cout << decToBinary(i) << endl;
    // }
    
    int binNum;
    cout << "Enter Decimal Number : ";
    cin >> binNum;

    cout << binaryTodec(binNum);
    
    
    
    
    
    return 0;
}