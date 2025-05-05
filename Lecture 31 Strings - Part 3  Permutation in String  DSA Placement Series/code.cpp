#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) { // O(1)
    for(int i = 0 ; i<26 ; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq [26] = {0};

    for(int i=0 ; i<s1.length() ; i++) {
        freq[s1[i] - 'a']++;
    }

    

int main() {
                                        // PERMUTATION IN STRING

    string s1 = "bcdefabcdgef";
    string s2 = "abc";
    
    cout << checkInclusion(s1, s2);
    return 0;
}