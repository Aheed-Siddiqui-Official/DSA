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

// selectionSort

// void selectionSort(int arr[], int n) {
//     for(int i = 0 ; i<n-1 ; i++) {
//         int smallIndex = i;
//         for(int j = i+1 ; j<n ; j++) {
//             if(arr[j] < arr[smallIndex]){
//                 smallIndex = j;
//             }
//         }
//         swap(arr[i], arr[smallIndex]);
//     }
// }

// insertionSort

void insertionSort(int arr[], int n)
{

    //{1, 5, 3, 7, 6, 9} = 6
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i]; // arr[2] = 3
        int prev = i - 1;  // 2 - 1 = 1

        while (prev >= 0 && arr[prev] > arr[curr]) // T &&  arr[1] = 5 > arr[3] = 3
        {
            arr[prev + 1] = arr[prev]; // arr[2] = arr[1] = 5
            prev--; 
        }
        arr[prev + 1] = curr; // arr[0 + 1] = arr[1] = 5
    }
}



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