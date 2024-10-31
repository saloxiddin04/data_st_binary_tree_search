//
//  main.cpp
//  binary_tree_traversals_and_search
//
//  Created by Saloxiddin Sayfuddinov on 28/10/24.
//

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inOrderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    cout<< root->data << " ";
    inOrderTraversal(root->right);
};

void preOrderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    
    cout << "InOrder: ";
    inOrderTraversal(root);
    cout << endl;
    
    cout << "PreOrder: ";
    preOrderTraversal(root);
    cout << endl;
    
    cout << "PostOrder: ";
    postOrderTraversal(root);
    cout << endl;
}
