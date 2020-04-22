#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "BST.h"
#include "BT-node.h"

// Test your methods in the main function
int main () {

    BTnode * tree = NULL;
    int max = findmax(tree);
    printf("maximum value: %d\n", max);

    for (int i = 0; i < 4; i++) {
        int newnum = rand() % 50 + 1;
        printf("Inserting . . . %d\n", newnum);
        // Test your insert function
        tree = insert(tree, newnum);
        print(tree);
        putchar('\n');
		
		// This is just to pause until you press enter after every insert
        getchar();
    }
    // Test your search function
    // printf("Searching for %d: %d\n", rand() % 50 + 1,search(tree, 30));
    // printf("Searching for %d: %d\n",rand() % 50 + 1, search(tree, 209));
    printf("Searching for %d: %d\n", 9, search(tree, 9));
    printf("Searching for %d: %d\n", 25, search(tree, 25));

    // Print out the maximum value in the tree
    max = findmax(tree);
    printf("maximum value: %d\n", max);

    // Print out the minimum value in the tree
    int min = findmin(tree);
    printf("minimum value: %d\n", min);

    // Test your printAscendOrder function
    printf("Elements in ascending order:");
    printInOrder(tree);

    //Testing our Preorder function
    printf("Elements in pre order:");
    printPreOrder(tree);

    //Testing our Postorder function
    printf("Elements in post order:");
    printPostOrder(tree);

    printf("The height of the tree is %d \n", height(tree));
    printf("The number of nodes in the tree is %d \n", countNodes(tree));

    postfree(tree);
    return 0;

}
