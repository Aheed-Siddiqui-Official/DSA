#include <iostream>
#include <vector>
using namespace std;

int peakMountain(vector<int> &vec) {
    int st = 1;
    int end = vec.size() - 2;

    while(st <= end) {
        int mid = st + ((end - st) / 2);

        if(vec[st] < vec[mid] > vec[mid + 1]) {
            return mid;
        }

        if(vec[mid - 1] < vec[mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> mountain = {0, 3, 8, 9, 5, 2};
    cout << "Peak Value = " << peakMountain(mountain);
    return 0;
}