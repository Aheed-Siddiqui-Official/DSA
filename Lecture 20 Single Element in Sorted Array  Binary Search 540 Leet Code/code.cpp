#include <iostream>
#include <vector>
using namespace std;

int singleElemSortedArray(vector<int> &vec) {
    int st = 0;
    int end = vec.size() - 1;

    if (end == 0) return vec[0];

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(mid == 0 && vec[0] != vec[1]) return vec[mid];
        if(mid == end-1 && vec[end-1] != vec[end-2]) return vec[mid];

        if(vec[mid] != vec[mid - 1] && vec[mid] != vec[mid + 1]) {
            return vec[mid];
        }
        
        // Odd

        if(mid % 2 == 0) {
            if(vec[mid - 1] == vec[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } 
        
        // Even

        
    }
    return -1;
}







int main() {
    vector<int> vec = {2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 9, 9};
    cout << vec.size();
    singleElemSortedArray(vec);
    return 0;
}