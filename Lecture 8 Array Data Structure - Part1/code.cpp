#include <iostream>
#include <climits>
using namespace std;

// void changeArr(int arr[], int size) {
//     cout << "in function\n";
//     for(int i = 0 ; i < size ; i++){
//         arr[i] = 2 * arr[i];
//     }
// }

int linearSearch(int array[] , int size, int find) {
    for (int i = 0 ; i < size ; i++) {
        if (array[i] == find)
        {
            return i;
        }
    }
    return -1;
}

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

    // int size = 5;
    // int marks[size];

    // for(int i = 0 ; i < size ; i++) {
    //     cin >> marks[i];
    // }

    // for(int i = 0 ; i < size ; i++) {
    //     cout << marks[i] << endl;
    // }

                                        // DAY 2

                                        // FINDING SMALLEST NUMBER

    // int size;
    // cout << "Enter size of array = ";
    // cin >> size;

    // int array[size];

    // int smallest = INT_MAX;

    // int index = 0;

    // for (int i = 0 ; i < size ; i++)
    // {
    //     cin >> array[i];
    // }

    // for (int i = 0;  i < size ; i++)
    // {
    //     cout << array[i] << " ";
    // }
    
    // for (int j = 0 ; j < size ; j++)
    // {
    //     if (array[j] < smallest)
    //     {
    //         smallest = array[j];
    //         index = j;
    //     }   
    // }
    // cout << endl;
    // cout << "Smallest value = " << smallest << endl;
    // cout << "Index At = " << index;

                                        // FINDING LARGEST NUMBER

    // int size;
    // cout << "Enter size of array = ";
    // cin >> size;

    // int array[size];

    // int largest = INT_MIN;

    // int index = 0;

    // for(int i = 0 ; i < size ; i++) {
    //     cin >> array[i]; 
    // }

    // for (int i = 0 ; i < size ; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // for(int i = 0 ; i < size ; i++) {
    //     if (array[i] > largest)
    //     {
    //         largest = array[i];
    //         index = i;
    //     }
    // }
    // cout << endl;
    // cout << "Largest value = " << largest << endl;
    // cout << "Index At = " << index;

                                        // PASS BY REFERENCE
    
    // int arr[] = {1, 2, 3};

    // changeArr(arr, 3);

    // cout << "in main\n";
    // for(int i = 0 ; i < 3 ; i++){ // 2, 4, 6
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

                                        // LINEAR SEARCH

    int size;
    cout << "Enter size of array = ";
    cin >> size;

    int array[size];

    int find;
    cout << "Value to find = ";
    cin >> find;

    for (int i = 0 ; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0 ; i < size ; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;

    cout << "Index At = " << linearSearch(array, size ,find) << endl;

    
    return 0;
}