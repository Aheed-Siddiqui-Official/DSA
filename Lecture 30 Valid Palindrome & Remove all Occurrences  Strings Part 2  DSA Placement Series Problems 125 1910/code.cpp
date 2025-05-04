#include <iostream>
#include <algorithm>
using namespace std;


                                    // isPalindrome Question

// isalnum() is spp function used to find string is alpha numeric or not

// bool isAlphaNum(char ch) {
//     if((ch >= '0' && ch <='9') || 
//         (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
//             return true;
//         }
//         return false;
// }

// bool isPalindrome(string s) {
//     int st = 0, end = s.length() - 1;

//     while(st < end) {
//         if(!isAlphaNum(s[st])) {
//             st++;
//         }
//         if(!isAlphaNum(s[end])) {
//             end--;
//         }
//         if(tolower(s[st]) != tolower(s[end])) {
//             return false;
//         }


int main() {
                                    // isPalindrome Question

    // string s = "m@ad&am";

    // cout << isPalindrome(s);

                                    // Remove all occurrences

    string s = "dabceabcfabcsdfgabcccabc";
    string part = "abc";

    cout << removeOccurrences(s, part);
    return 0;
}