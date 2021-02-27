# BST

A binary search tree has the propety that all values in the left subtree are <= to its parent, and the values in the right subtree are greater then the parent. 

This program allows you to count the number of leaves, count the number of nodes, find the height, search for a specific number, find the max/min element and display the values of the tree in inorder/preorder/postorder 

## Compile

Either do make all, or g++ main.cpp BST.cpp BT-visualize.cpp

## Sample Output
```
Inserting . . . 8
8


Inserting . . . 50
 8 
 :.
  :
 50


Inserting . . . 24
 8  
 :..
   :
  50
  ::
  : 
 24 


Inserting . . . 9
 8  
 :..
   :
  50
  ::
  : 
 24 
 :: 
 :  
 9  


Searching for 9: 1
Searching for 25: 0
maximum value: 50
minimum value: 8
Elements in ascending order: 8 9 24 50
Elements in pre order: 8 50 24 9
Elements in post order: 9 24 50 8
The height of the tree is 4 
The number of nodes in the tree is 4 

```

