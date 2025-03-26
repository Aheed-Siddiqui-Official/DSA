#include <iostream>
using namespace std;

int main() {

                                        // DAY 1

                                        // ARRAY

    // int marks[5] = {1, 2, 3, 4, 5};
    // marks[0] = 101;

    // cout << marks[0] << endl << marks[1] << endl << marks[2] << endl  << marks[3] << endl << marks[4];
    
    //                                     // LIMIT OF ARRAY ( 0 => size-1)

    // cout << marks[-1]; // will print garbage value

                                        // LOOPS ON ARRAY

    // int marks[5] = {1, 2, 3, 4, 5};
    // int size = sizeof(marks) / sizeof(int);
    
    // for(int i = 0 ; i < size ; i++){
    //     cout << marks[i] << endl;
    // }

    int size = 5;
    int marks[size];

    for(int i = 0 ; i < size ; i++) {
        cin >> marks[i];
    }

    for(int i = 0 ; i < size ; i++) {
        cout << marks[i] << endl;
    }













    return 0;
}