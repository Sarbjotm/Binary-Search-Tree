#include "BST.h"
#include "BT-visualize.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <string>

// Implement the following five methods
// inserts val into BST rooted at x and returns the tree's new root
//Traverse until we see an empty node (NULL) and place there
BTnode * insert(BTnode * x, int val) {
    if (x == NULL){
        BTnode* temp = new BTnode;
        temp->val = val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (val <= x->val){
        x->left = insert(x->left, val);
    }
    else{
        x->right = insert(x->right, val);
    }
    /*
    If our val is less than the parent go left
    If our val is greater than the parent go right
    if x == NUll return our value


    */
    return x;
}
// returns true iff target in tree rooted at x

/*
Search in O(nlogn), go right if element greater than node above otherwise left
Return 0 as an error code if tree does not exist


*/
bool search(BTnode * x, int target){
    //Root is x
    if (x == NULL){
        return false; //This means the tree is empty
    }
    if(x->val == target){ //If root->val == target then we have found it
        return true;
    }
    else if(x->val < target){
        //This means target is greater so check right subtree
        return search(x->right, target);
    }
    else{ // val <= x->val so search left tree
        return search(x->left, target);
    }
}

// Find the maximum value of a tree rooted at x

/*
Max element will always be the most right element: (x->right)
Keep going right until x->right == NULL
then return x->val


*/


int findmax(BTnode * x) {
    //just keep on going right until null since max value is at numm
    //Base case if x->right == NULL
    if (x == NULL){
        printf("Tree does not exist, returning error code 0 \n");
        return 0;
    }
    while(x->right != NULL){ //traverse right
        x = x->right;
    }
    return x->val;
}

/*
Min element will always be the most left element: (x->left)
Keep traversing left until x->right == NULL
then return x->val


*/


// Find the minimum value of a tree rooted at x
int findmin(BTnode * x) {
    //just keep on going left untill null x->left == NULL
    if (x == NULL){
        printf("Tree does not exist, returning error code 0 \n");
        return 0;
    }
    while(x->left != NULL){ //traverse left
        x = x->left;
    }
    return x->val;
}


/*
Inorder: Left->Root->Right
*/

void printnumbersInorder(BTnode* x){
    if (x == NULL){
        return; // if nothing is in the tree (root is NULL)
    }
    printnumbersInorder(x->left);
    printf(" %d", x->val );
    printnumbersInorder(x->right);
}

// Given a binary tree, print its nodes in in-order
void printInOrder(BTnode * x){
    //now we want to go to left most print then parent print, then child on right print go back up
    printnumbersInorder(x);
    printf("\n");
}


/*

Preorder: root->left->right


*/

void printnumbersPreOrder(BTnode* x){
    if (x == NULL){
        return; // if nothing is in the tree (root is NULL)
    }
    printf(" %d", x->val );
    printnumbersPreOrder(x->left);
    printnumbersPreOrder(x->right);
    
}

// Given a binary tree, print its nodes in Pre-order
void printPreOrder(BTnode * x){
    printnumbersPreOrder(x);
    printf("\n");
}

/*
PostOrder: left->right->root

*/


void printnumbersPostOrder(BTnode* x){
    if (x == NULL){
        return; // if nothing is in the tree (root is NULL)
    }
    printnumbersPostOrder(x->left);
    printnumbersPostOrder(x->right);
    printf(" %d", x->val );
    
}

void printPostOrder(BTnode * x){
    printnumbersPostOrder(x);
    printf("\n");
}

int height(BTnode *x){
    static int height_var = 0;
    static int height_var2 = 0;
    if (x == NULL){
        return 0;
    }
    
   
    int heightLeft = height(x->left);
    int heightRight = height(x->right);

    if(heightLeft > heightRight){
        
        return 1+heightLeft; 
    }
    else{
        return 1+heightRight; 
    }

    if
    


}

int countNodes(BTnode *x){
    if (x == NULL){
        return 0;
    }
    return 1+countNodes(x->left)+countNodes(x->right);
    

}





// You don't need to worry about these methods below
BTascii print_helper(BTnode * x);

void print(BTnode * x) {
    BTascii ret = print_helper(x);
    ret.display();
}

BTascii print_helper(BTnode * x) {
    if (x == NULL) return BTascii();
    BTascii left = print_helper(x->left);
    BTascii right = print_helper(x->right);
    char buf[25];
    sprintf(buf, "%d", x->val); return join(left, right, std::string(buf)); 

}
void postfree(BTnode * x) {
    if (x == NULL) return;
    postfree(x->left);
    postfree(x->right);
    delete x;
}
