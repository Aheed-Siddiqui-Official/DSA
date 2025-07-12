#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;

    for(int val : arr) {
        root = insert(root, val);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool search(Node* root, int key) {
    if(root == NULL) {
        return false;
    }
    if(root->data == key) {
        return true;
    }
    if(key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

Node* getInorderSuccessor(Node* root) { // left most node in right subtree
    while(root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

