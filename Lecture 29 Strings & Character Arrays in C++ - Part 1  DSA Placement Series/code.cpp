#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

                                            // CHARACTER & STRINGS(DYNAMIC)

    // char str[] = {'a', 'b', 'c', '\0'}; // Until we dont end arr string with \0 it is not count as valid string. Null character is ignored in string length. 

    // char str1[] = "hello";// String literals means which cant be changed. They are stored in from of array.

    // cout << str[2] << endl;
    // cout << str1;

                                            // INPUT AND OUTPUT IN CHAR

    // char str2[7];

    // cout << "Enter char array : ";
    // cin.getline(str2, 100);

    // for(char ch : str2) {
    //     cout << ch << " ";
    // }

                                            // LENGTH OF ARRAY

    // char str3[] = {"iam mas"};
    // int leng = 0;

    // for(int i = 0 ; i < str3[i] != '\0' ; i++) {
    //     leng++;
    // }

    // cout << leng;
    
                                            // STRING CLASS AND LIBRARY IN CPP

    // string str = "MAS";// Strings are dynamic in nature because they resize at runtime but we cant do this with char like arr is also like char so we use vector instead of arr for dynamic purpose

    //cout << str;

                                            // OPERATORS IN STRINGS

    // string str1 = "MAS";
    // string str2 = "AAS";

    // cout << str1 + str2 << endl;
    // cout << (str1 == str2) << endl;
    // cout << (str1 < str2) << endl;
    // cout << (str1 > str2) << endl;
    // cout << str1.length() << endl;

                                            // INPUT AND OUTPUT IN STRINGS

    // string str;
    // getline(cin, str);// Get line used because cin removes words after white spaces

    // cout << "output : " << str << endl;

    // for(char ch:str) {
    //     cout << ch << " ";
    // }

                                            // REVERSAL QUESTION
                                            // IN STRING

    string str = "mas";
    reverse(str.begin(), str.end());
    cout << str;
    
    return 0;
}