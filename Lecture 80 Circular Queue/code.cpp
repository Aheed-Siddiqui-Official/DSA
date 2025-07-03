#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, cap;
    int f = 0 , r = 1;

public:
    CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) {
        if(currSize == cap) {
            cout << "CQ is full\n";
            return;
        } else {
            r = (r + 1) % cap;
            arr[r] = data;
            currSize++;
        }
    }

    