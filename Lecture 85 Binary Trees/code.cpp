#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
    
};

static int idx = -1;
Node* builtTree(vector<int> preOrder) {
    idx++;

    if(preOrder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preOrder[idx]);
    root->left = builtTree(preOrder); //LEFT SUBTREE
    root->right = builtTree(preOrder); //RIGHT SUBTREE
    return root;
}

