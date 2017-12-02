Hackerrank -> 30 Days of Code -> Day 23: BST Level-Order Traversal

One possible solution to Hackerrank's BST Level-Order Traversal (30 Days of Code -> Day 23: BST Level-Order Traversal) coding challenge developed using C++ and STL's queue container adaptor.

Task:

  A level-order traversal, also known as a breadth-first search, visits each level of a tree's nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.

Hint: You'll find a queue helpful in completing this challenge.

Input format:

  The locked stub code in your editor reads the following inputs and assembles them into a BST:
The first line contains an integer, T (the number of test cases).
The subsequent T lines each contain an integer, data, denoting the value of an element that must be added to the BST.

Output format:

  Print the value of each node in the tree's level-order traversal as a single line of N space-separated integers.

Sample input:

6
3
5
4
7
2
1

Sample output:

  3 2 5 1 4 7 

Explanation:

  We traverse each level of the tree from the root downward, and we process the nodes at each level from left to right. The resulting level-order traversal is 3 -> 2 -> 5 -> 1 -> 4 -> 7, and we print these data values on a single line.
