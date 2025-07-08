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

//postorder
void postOrder(Node* root) {
    if(root == NULL){
        return;
    } else {        
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = builtTree(preorder);
    
    postOrder(root);
    cout << endl;
    return 0;
}