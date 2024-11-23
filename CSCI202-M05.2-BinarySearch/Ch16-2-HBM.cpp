/*
     Programming Assignment: Binary Search
     Programmer: Hershey Marbeda
     Due Date: 11.23.2024
 
    Assignment Description:
    1) Programming Exercise #2 (pg. 1414)
 
    Write the definition of the function, leavesCount, that takes as a parameter a pointer to the root node of a binary tree
    and returns the number of leaves in a binary tree.  Add this function to the class binaryTreeType and create a program to
    test the function.
 
 */

#include <iostream>

using namespace std;

// Class to search for a binary tree
class binaryTreeType
{
public:
    // Linked List
    struct nodeType
    {
        int info;
        nodeType* right; // to place the bigger value
        nodeType* left; // to place the smaller value
    };
    
    
    // Function to count the number of leaves
    int LeavesCount(nodeType* root)
    {
        if (root == nullptr)
            return 0;
        
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        
        return LeavesCount(root->left) + LeavesCount(root->right);
    }
    
    // Function to insert a node
    nodeType* insertNode(int value)
    {
        nodeType* newNode = new nodeType;
        newNode->info = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }
    
};


int main()
{
    // Table Heading
    cout << string(100, '-') << endl
         << "\t\t\tProgramming Assignment: Binary Search" << endl
         << string(100, '-') << endl << endl;
    
    // Declaration of Variables
    binaryTreeType tree;
    
    binaryTreeType::nodeType* root = tree.insertNode(10);
    root->left = tree.insertNode(5);
    root->right = tree.insertNode(15);
    root->left->left = tree.insertNode(3);
    root->left->right = tree.insertNode(7);
    
    cout << "Number of leaves: " << tree.LeavesCount(root);
    
    cout << endl << endl;
    return 0;
}
