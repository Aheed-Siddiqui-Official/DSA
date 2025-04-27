#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m, int maxAllowedPages) { //O(n)
    int stu = 1, pages = 0;

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] > maxAllowedPages) {
            return false;
        }



int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}