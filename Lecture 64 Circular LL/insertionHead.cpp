#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularList {
    Node* head;
    Node* tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertNode(int val) {
        Node* newNode = new Node(val);

        if(tail == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode-> next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void print() {
        if(head == NULL) return;

        cout << head->data << "->";

        Node*temp = head->next;
        while(temp != head) { // written head instead of NULL to avoid infinite loop
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << temp->data << endl;
    }
};

int main() {
    CircularList cll;

    cll.insertNode(1);
    cll.insertNode(2);
    cll.insertNode(3);

    cll.print();
    return 0;
}