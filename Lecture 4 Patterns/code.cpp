#include<iostream>
using namespace std;

int main() {
                    // SQUARE PATTERN

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // for(int i = 0 ; i <= n ; i++) { // line
    //     char ch = 'A';
    //         for(int j = 0 ; j <= n ; j++) { // print number till 5
    //             cout << ch;
    //             ch = ch + 1;
    //         }

    //                 cout << endl;
    // }

                    // SQUARE PATTERN WITH CONTINUE COUNTING

    // int n;
    // cout << "Enter n : ";
    // cin >> n; // 3
    
    // int sum = 0;

    // for(int i = 0 ; i < n ; i++) { // 0 < 3
    //     for(int j = 0 ; j < n ; j++) { // 0 < 3
    //         cout << sum << " ";
    //         sum += 1;
    //     }
    //         cout << endl;
    // }

                        // SQUARE PATTERN WITH CONTINUE COUNTING IN ALPHABETS

    // int n;
    // cout << "Enter n : ";
    // cin >> n; // 3
    
    // int sum = 0;
    // char ch = 'A';

    // for(int i = 0 ; i < n ; i++) { // 0 < 3  // line 2
        
    //     for(int j = 0 ; j < n ; j++) { // 0 < 3 // 1 < 3
    //         cout << ch << " "; // A B C D
    //         ch += 1; // A+1 = B+1 = C+1 =D
    //     }
    //         cout << endl;
    // }

                        // PYRAMID PATTERN

    // int n;
    // cout << "Enter n : ";
    // cin >> n; 

    // for(int i = 0 ; i < n ; i++){ // 0 < 3 // 1 < 3 // 2 < 3 // 3 < 3 false loop break
    //     for(int j = 0 ; j <= i ; j++) { //  i = 0 // i = 1 // i = 2
    //         cout << "* "; // * ** ***
    //     }
    //         cout << endl;
    // }


                        // PYRAMID PATTERN FOR NUMBERS

    // int n;
    // cout << "Enter n : ";
    // cin >> n; 

    // for(int i = 0 ; i < n ; i++){ 
    //     for(int j = 0 ; j <= i ; j++) { 
    //         cout << i << " ";
    //     }
    //         cout << endl;
    // }


                        // PYRAMID PATTERN FOR CHARACTERS

    // int n;
    // cout << "Enter n : ";
    // cin >> n; 

    // char ch = 'A';

    // for(int i = 0 ; i < n ; i++){ 
    //     for(int j = 0 ; j <= i ; j++) { 
    //         cout << ch << " ";
    //     }
    //         ch += 1;
    //         cout << endl;
    // }

                        // PYRAMID PATTERN FOR REVERSE NUMBERS

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // for(int i = 0 ; i < n ; i++) { // 0 < 3 // 1 < 3
    //     for(int j = i + 1 ; j > 0 ; j--) { // 1 > 0 // 2 > 0 1 > 0 
    //         cout << j;
    //     }
    //     cout << endl;
    // }

                        // FLOYD'S PATTERN

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // int num = 1;

    // for(int i = 0 ; i < n ; i++) { 

    //     for(int j = i + 1 ; j > 0 ; j--) {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

                        // INVERTED TRIANGlE PATTERN

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // for (int i = 0 ; i < n; i++) {
    //     for (int j = 0 ; j < i; j++){ 
    //         cout << " ";
    //     }
    //         for (int j = 0; j < n - i ; j++) {
    //             cout << (i + 1);
    //         }
    //     cout << endl;
    // }

                    // PYRAMID PATTERN

    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    
    // for (int i = 0; i < n; i++) {
    //     // loop for spaces (n - i - 1 times)
    //     for (int j = 0; j < n-i-1 ; j++) {
    //         cout << " ";
    //     }
        
    //     // loop for first set of characters (1 to i + 1 times)
    //     for (int j = 1 ; j <= i + 1 ; j++) {
    //         cout << j;
    //     }
        
    //     // loop for set 2 (i to 1)
    //     for (int j = i ; j >= 1; j--) {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

                    // HOLLOW PATTERN
    
    






    return 0;
}