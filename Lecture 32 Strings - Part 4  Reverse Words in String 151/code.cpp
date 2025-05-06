#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for(int i = 0 ; i<n ; i++) {
        string word = "";

        
}

int main() {
    string str = "the pen";

    cout << reverseWords(str);
    return 0;
}