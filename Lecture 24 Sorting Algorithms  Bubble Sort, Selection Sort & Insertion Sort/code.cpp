#include <iostream>
using namespace std;



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