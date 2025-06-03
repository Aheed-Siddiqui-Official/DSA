#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};      

class DoublyList {
    Node* head;
    Node* tail;

public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pop_back() {
        if(head == NULL) {
            cout << "DLL is empty" << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL) {
            tail->next = NULL;
        }

        temp->prev = NULL;
    }

    