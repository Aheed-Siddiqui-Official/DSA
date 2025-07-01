#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;


                                        // QUEUE FROM SCRATCH

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    
public:
    Queue() {
        head = tail = NULL;
    }

    