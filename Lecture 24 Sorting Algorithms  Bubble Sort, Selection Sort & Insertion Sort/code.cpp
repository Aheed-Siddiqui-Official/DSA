#include <iostream>
using namespace std;

// bubble sort

// void bubbleSort(int arr[], int n) {
//     //O(n^2)
//     for(int i = 0 ; i<n-1 ; i++) {
//         bool isSwap = false;
//         for(int j = 0 ; j<n-i-1 ; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap) { // for sorted array
//             return;
//         }
//     }
// }



int main()
{
    int n = 6;
    int arr[] = {1, 5, 3, 7, 6, 9};
    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    insertionSort(arr, n);

    printArr(arr, n);
    return 0;
}