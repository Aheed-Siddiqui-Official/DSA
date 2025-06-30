#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

                                        // STACK FROM SCRATCH USING A VECTOR

class StackVec {
    vector<int> v;

public:
    void push(int val) { //O(1)
        v.push_back(val);
    }

    void pop() { //O(1)
        v.pop_back();
    }

    int top() { //O(1)
        return v[v.size()-1];        
    }

    bool empty() {
        return v.size() == 0;
    }
};

                                        // STACK FROM SCRATCH USING LL

class StackLL {
    list<int> ll;

public:
    void push(int val) { //O(1)
        ll.push_front(val);
    }

    void pop() { //O(1)
        ll.pop_front();
    }

    int top() { //O(1)
        return ll.front();       
    }

    bool empty() {
        return ll.size() == 0;
    }
};

int main() {

                                        // STACK FROM SCRATCH USING A VECTOR

    // StackVec s;
    // s.push(1);
    // s.push(2);
    // s.push(3);

                                        // STACK FROM SCRATCH USING LL

    // StackLL ll;
    // ll.push(1);
    // ll.push(2);
    // ll.push(3);

                                        // STACK FROM STL

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}