#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end) {

        // THIS IS NOT OPTIMIZED WAY IF WE ADD TOO BIG VALUES SO INT LIMIT WOULD EXCEED
        
        int mid = (end + st)/2;

        // THIS IS AN OPTIMIZED FORMULA TO AVOID LIMIT EXCEED OF INT WHEN INT MAX USED ON PLATFORMS
        int mid = st + (end - st)/2;

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if (tar < arr[mid]) {
            end = mid - 1; 
        } else{
            return mid;
        }
    }
    return -1;
}


int main() {

                                        // BINARY SEARCH

    vector<int> oddArr = {-1, 0, 3, 4, 5, 9, 12};
    int oddTar = 12;

    cout << binarySearch(oddArr, oddTar) << endl;

    vector<int> evenArr = {-1, 0, 3, 5, 9, 12};
    int evenTar = 0;

    cout << binarySearch(evenArr, evenTar) << endl;

    return 0;
}