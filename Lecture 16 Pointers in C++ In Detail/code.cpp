#include <iostream>
using namespace std;

void changeA(int *a){
    *a = 20;
}

int main() {

                                        // POINTERS

                                        // DEFINITION

    // int a = 10;
    // int *ptr = &a;

    // cout << ptr, &a;

    // float price = 100.25;
    // float *ptr = &price;

    // cout << ptr, &price;

                                        // POINTER TO POINTER

    // int a = 10;
    // int *ptr = &a;

    // int **parPtr = &ptr;

    // cout << &ptr << endl;
    // cout << parPtr;

                                        // DEREFERENCING OPERATOR

    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;

    // cout << *(parPtr) << endl;
    // cout << *(&ptr);

    // cout << **(parPtr);

                                        // NULL POINTER

    // int *ptr = NULL;
    // cout << *ptr;

    // int a = 5;
    // int *p = &a;
    // int **parPtr = &p;
    
    // cout << *p << endl;
    // cout << **parPtr << endl;
    // cout << p << endl;
    // cout << *parPtr << endl;

                                        // PASS BY REFERENCE

    // int a = 10;
    // changeA(&a);

    // cout << a;

                                        // ARRAY POINTER

    // int arr[] = {1, 2, 3, 4, 5}; // Constant Pointer

    // cout << arr << endl;
    // cout << *arr << endl;

                                        // POINTER ARITHMETIC

    // INCREMENT (++), DECREMENT (--) => addition in memory according to data type 

    // int a = 10;
    // int *ptr = &a;

    // cout << ptr << endl;
    // ptr++;
    // cout << ptr << endl;
    // ptr--;
    // cout << ptr << endl;

    // ADD SUBTRACT => addition in memory according to data type
    
    // cout << ptr << endl;
    // ptr = ptr+4;
    // cout << ptr << endl;
    // ptr = ptr-3;
    // cout << ptr << endl;

    // ADD SUBTRACT IN ARRAY

    // int arr[] = {1, 2, 3, 4, 5};

    // cout << *arr << endl;
    // cout << *(arr+1) << endl;
    // cout << *(arr+2) << endl;
    
    // ADDITION OF POINTERS

    // int *ptr;
    // int *ptr2 = ptr + 2;
    
    // cout << ptr2 - ptr;


    
    return 0;
}