#include <iostream>
using namespace std;

//creating linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    //Push front logic
    void push_front(int val) {
        Node* newNode = new Node(val);//dynamic when used new key word and also process in memory after function call
        
        //When no node exists
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    //Pop front logic
    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty\n";
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        
        
    }

   