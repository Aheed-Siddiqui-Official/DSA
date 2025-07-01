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

    void push(int data) { // insert data at tail O(1)
        Node* newNode = new Node(data);

        if(empty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(empty()) { // O(1)
            cout << "LL is empty" << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front() {
        if(empty()) {
            cout << "LL is empty" << endl;
            return -1;
        } else {
            return head->data;
        }
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    // Queue q;
    // q.push(1);
    // q.push(2);
    // q.push(3);

                                        // USING STL LIBRARY

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

                                        // DEQUE

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    cout << "front : " << dq.front() << " back : " << dq.back() << endl;

    dq.pop_back();
    dq.pop_front();

    cout << "front : " << dq.front() << " back : " << dq.back() << endl;
    return 0;
}