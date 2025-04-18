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
    
 
    

    return 0;
}