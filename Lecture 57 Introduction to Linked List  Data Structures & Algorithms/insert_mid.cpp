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

    //Insert Middle Logic
    void insert(int val, int pos) {
        if(pos < 0) {
            cout << "invalid pos\n";
            return;
        }

        else if(pos == 0) {
            push_front(val);
            return;
        }

        else{
            Node* temp = head;
            for(int i = 0 ; i<pos-1 ; i++) {
                if(temp == NULL) {
                    cout << "invalid pos\n";
                    return;
                }
                temp = temp->next;
            }

            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
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

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();

    ll.insert(4, 0);

    ll.printLL();
    return 0;
}