#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


                                        // MERGE TWO SORTED ARRAY'S

void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx = m+n-1;
    int i = m-1;
    int j = n-1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    while(j >= 0) {
        A[idx--] = B[j--];
    }
}

                                        // NEXT PERMUTATION PROBLEM

void nextPermutation(vector<int>& A) {
        int pivot = -1;
        int n = A.size();
        for(int i = n-2; i>=0 ; i--) {
            if(A[i] < A[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }
        
        for(int i = n-1 ; i>pivot ; i--) {
            if(A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }
        
    }


int main() {

                                        // MERGE TWO SORTED ARRAY'S

    int n = 3, m = 3;
    vector <int> A = {1, 2, 3, 0, 0, 0};
    vector <int> B = {4, 5, 6};
    
                                        // NEXT PERMUTATION PROBLEM

    vector <int> A = {1, 2, 3};
    nextPermutation(A);
    return 0;
}