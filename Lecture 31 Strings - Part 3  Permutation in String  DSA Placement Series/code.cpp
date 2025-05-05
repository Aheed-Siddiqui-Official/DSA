#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) { // O(1)
    for(int i = 0 ; i<26 ; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
    
}

int main() {
                                        // PERMUTATION IN STRING

    string s1 = "bcdefabcdgef";
    string s2 = "abc";
    
    cout << checkInclusion(s1, s2);
    return 0;
}