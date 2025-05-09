#include <iostream>
#include <vector>
using namespace std;

                                        // NTH FIBONACCI TERM

int fib(int n) {
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

                                        // SORTED ARRAY

bool isSorted(vector <int> arr, int n) {
    if(n==0 || n==1) {
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

                                        // BINARY SEARCH

int binSearch(vector <int> arr, int target, int st, int end) {
    int mid = st+(end-st)/2;

    if(st<=end) {
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] <= target) {
            return binSearch(arr, target, mid+1, end);
        } else {
            return binSearch(arr, target, st, mid-1);
        }
    } else {
        return -1;
    }

    
} 

int main() {
    // cout<<fib(6);
    
    vector <int> arr = {-5, -2, -1, 0, 1, 2, 3, 4 ,5, 8, 9, 11};
    // cout<<isSorted(arr, arr.size());

    int target = 4;
    int st = 0;
    int end = arr.size()-1;
    cout<<binSearch(arr, target, st, end);
    return 0;
}