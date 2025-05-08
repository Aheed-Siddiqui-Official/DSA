#include <iostream>
using namespace std;

                                        // PRINT NUM FROM N TO 1

// void printNum(int n) { // recursive function
//     if(n==1){
//         cout << n;
//         return;
//     }
//     cout<<n<<" ";
//     printNum(n-1);
// }

                                        // N FACTORIAL

int nFact(int n) {
    if(n==1) { // Base case is smallest value
        return 1;
    }
    return n * nFact(n-1);
}


int main() {
    // printNum(10);
    // cout<<nFact(5);
    cout<<sum(5);
    return 0;
}