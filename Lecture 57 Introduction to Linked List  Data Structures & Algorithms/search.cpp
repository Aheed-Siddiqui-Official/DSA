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

    //Search in a LL
    int search(int key) {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    //Print a ll
    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    cout << "Pos : " << ll.search(3) << endl;;
    return 0;
}