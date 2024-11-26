/*
     Programming Assignment: Binary Search
     Programmer: Hershey Marbeda
     Due Date: 11.23.2024
 
    Assignment Description:
    2.) Write a function, singleParent, that returns the number of nodes in a binary tree that have only one child.
        Add this function the class binaryTreeType and create a program to test this function.
        (NOTE: First create a binary search tree.)
 
 */

#include <iostream>
using namespace std;

class binaryTreeType {
public:
    struct Node {
        int data;
        Node* left;
        Node* right;
    };
    
    // Function to count nodes with only one child
    int singleParent(Node* root)
    {
        if (root == nullptr) return 0;
        
        int count = 0;
        
            // Check if node has exactly one child
        if ((root->left != nullptr && root->right == nullptr) || (root->left == nullptr && root->right != nullptr))
        {
            cout << "Node " << root->data << " has one child." << endl;
            count += 1; // Correctly increment count
        }
        
        // Recursively check left and right subtrees
        count += singleParent(root->left);
        count += singleParent(root->right);
        
        return count;
    }
    
    
        // Helper function to create a new node
    Node* createNode(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }
    
        // Helper function to insert nodes in a binary search tree
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return createNode(value);
        }
        
        if (value < root->data) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }
        
        return root;
    }
};

int main() {
    binaryTreeType tree;
    binaryTreeType::Node* root = nullptr;
    
        // Create a binary search tree
    root = tree.insert(root, 10);
    tree.insert(root, 5);
    tree.insert(root, 15);
    tree.insert(root, 3);
    tree.insert(root, 7);
    tree.insert(root, 12);
    tree.insert(root, 20);
    tree.insert(root, 2);
    
        // Output the count of nodes with one child
    int result = tree.singleParent(root);
    cout << "Number of nodes with only one child: " << result << endl << endl;
    
   
    return 0;
}




