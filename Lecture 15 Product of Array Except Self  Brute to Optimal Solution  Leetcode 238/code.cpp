#include <iostream>
#include <vector>
using namespace std;

                                        // Define AVL Tree Node
    struct Node {
        int data;
        Node* left;
        Node* right;
        int height;

        Node(int value) {
            data = value;
            left = right = nullptr;
            height = 1; // height of a new node is initially 1
        }
    };

                                        // Get height of a node
    int getHeight(Node* node) {
        if (!node) return 0;
        return node->height;
    }

                                        // Get balance factor of a node
    int getBalance(Node* node) {
        if (!node) return 0;
        return getHeight(node->left) - getHeight(node->right);
    }

                                        // Get maximum of two integers
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

                                        // Right rotate (LL Rotation)
    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

                                        // Perform rotation
        x->right = y;
        y->left = T2;

                                        // Update heights
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

                                        // Return new root
        return x;
    }

                                        // Left rotate (RR Rotation)
    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

                                        // Perform rotation
        y->left = x;
        x->right = T2;

                                        // Update heights
        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

                                        // Return new root
        return y;
    }

                                        // Insert into AVL Tree and return new root
    Node* insert(Node* node, int key) {
                                        // Standard BST insertion
        if (!node) return new Node(key);

        if (key < node->data)
            node->left = insert(node->left, key);
        else if (key > node->data)
            node->right = insert(node->right, key);
        else
            return node; // No duplicates

                                        // Update height
        node->height = 1 + max(getHeight(node->left), getHeight(node->right));

                                        // Get balance factor
        int balance = getBalance(node);

                                        // Perform rotations if unbalanced

                                        // Case 1: Left Left
        if (balance > 1 && key < node->left->data)
            return rightRotate(node);

                                        // Case 2: Right Right
        if (balance < -1 && key > node->right->data)
            return leftRotate(node);

                                        // Case 3: Left Right
        if (balance > 1 && key > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

                                        // Case 4: Right Left
        if (balance < -1 && key < node->right->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

                                        // Return the unchanged node pointer
        return node;
    }

                                        // Inorder Traversal (prints tree in sorted order)
    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

int main() {

                                        // BRUTE FORCE

    // vector<int> vec = {1, 2, 3, 4, 5};
    // vector<int> ans(vec.size(), 1);

    // for(int i = 0 ; i < vec.size() ; i++) {
    //     for(int j = 0 ; j < vec.size() ; j++) {
    //         if(i != j) {
    //             ans[i] *= vec[j];
    //         }
    //     }
    // }




    

    return 0;
}