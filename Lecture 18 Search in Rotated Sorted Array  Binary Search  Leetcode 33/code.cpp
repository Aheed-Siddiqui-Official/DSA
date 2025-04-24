#include <iostream>
#include <vector>
using namespace std;

int rotatedSortedArray(vector<int> &vec, int target) {
    int st = 0;
    int end = vec.size() - 1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(target == vec[mid]) {
            return mid;
        } 

                                                // LEFT SORTED

        if(vec[st] <= vec[mid]) {
            if(vec[st] <= target && target <= vec[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }


int main() {

    int target;
    cout << "Enter Targeted Value = ";
    cin >> target;

    vector<int> vec = {10, 9, 8, 7, 1, 2, 3, 4, 5, 6};

    cout << "Value At = " << rotatedSortedArray(vec, target);

    return 0;
}