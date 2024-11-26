# CSCI 202: P.A. M05.2: Using Binary Search

## Assignment Description
1) Programming Exercise #2 (pg. 1414)

Write the definition of the function, leavesCount, that takes as a parameter a pointer to the root node of a binary tree and returns the number of leaves in a binary tree.  Add this function to the class binaryTreeType and create a program to test the function.

2) Programming Exercise #4 (pg. 1414)

Write a function, singleParent, that returns the number of nodes in a binary tree that have only one child.  Add this function the class binaryTreeType and create a program to test this function.  (NOTE: First create a binary search tree.)

## My Methods
1. This program implements a binary search tree with the `binaryTreeType` class and `nodeType` struct. The `insertNode` method initializes new nodes, while `LeavesCount` recursively counts leaf nodes, summing the counts from the left and right subtrees.
2. The program defines a `binaryTreeType` class to count nodes with one using the `singleParent` method, which recursively traverses the tree, increments a count for nodes with one child and prints their values. Helper methods `createNode` and `insert` manage node creation and insertion.
