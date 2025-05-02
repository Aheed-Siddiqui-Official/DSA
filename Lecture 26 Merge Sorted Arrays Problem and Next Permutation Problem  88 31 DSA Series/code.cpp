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