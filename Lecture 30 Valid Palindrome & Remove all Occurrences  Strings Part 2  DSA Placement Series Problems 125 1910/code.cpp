#include <iostream>
#include <algorithm>
using namespace std;



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