#ifndef _BST_H_
#define _BST_H_
#include <iostream>
#include "BT-node.h"

// Implement the following five methods in BST.cpp file.

// Insert val into BST rooted at x and returns the tree's new root
BTnode * insert(BTnode * x, int val);

// Return true iff target in tree rooted at x
bool search(BTnode * x, int target);

// Return maxmium value of the tree rooted at x. Return 0 if tree is empty.
int findmax(BTnode * root);

// Return maxmium value of the tree rooted at x. Return 0 if tree is empty.
int findmin(BTnode * root);

// Given a binary tree, print its nodes in in-order
void printInOrder(BTnode * root);
void printnumbersInorder(BTnode* x);

//Given a binary tree, print its nodes in pre-order
void printPreOrder(BTnode * x);
void printnumbersPreOrder(BTnode* x);

//Given a binary tree, print its nodes in post-order
void printPostOrder(BTnode * x);
void printnumberPostOrder(BTnode* x);

//Given a binary tree, gives the height
int height(BTnode * x);

//Count number of nodes
int countNodes(BTnode * x);

// You don't need to implement these below in BST.cpp file
void print(BTnode * root);
void postfree(BTnode * root);

#endif // _BT_H_
