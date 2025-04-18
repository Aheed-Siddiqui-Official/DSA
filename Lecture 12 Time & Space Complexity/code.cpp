#include <iostream>
using namespace std;

int main() {
                                        // COMMON TIME COMPLEXITIES
    
                                        // O(1) => CONSTANT (SUM OF NUM 1 TO N)
    int n;
    cin >> n;

    int ans = n * (n+1)/2;
    // cout << ans;

                                        // O(n) => LINEAR (N FACTORIAL / KADANE'S ALGORITHM)
    int fact = 1;

    for (int i = 1 ; i <= n ; i++) {
        fact *= i;
    }
    // cout << fact;
    
                                        // O(n^2 & n^3) => (BUBBLE SORT / PATTERNS / SUB ARRAYS)

                                        // O(logn) => (BINARY SEARCH)

                                        // O(nlogn) => (MERGE SORT / QUICK SORT / GREEDY ALGOS)

                                        // O(2^n) => (EXPONENTIAL)

                                        // O(n!) => NON COMMON (RECURSION)

                                        // PRIME NUMBER PROBLEM

    for (int i = 2 ; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Non prime";
            break;
        }  
    }
    

    return 0;
}