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

