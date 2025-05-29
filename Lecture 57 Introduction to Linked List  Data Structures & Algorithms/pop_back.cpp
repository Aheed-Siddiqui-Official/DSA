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

    //Pop back logic
    void pop_back() {
        if(head == NULL) {
            cout << "LL is empty\n";
            return;
        }
        else {
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;//tail data delete's in heap storage
            tail = temp;//assign tail variable value to temp variable value
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

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    ll.pop_back();

    ll.printLL();
    return 0;
}