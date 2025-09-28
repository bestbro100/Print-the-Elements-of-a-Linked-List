This exercise focuses on traversing a linked list. You are given a pointer to the head node of a linked list. The task is to print the data of each node, one per line. If the head pointer is null, indicating the list is empty, nothing should be printed.

Function Description
Complete the printLinkedList function which has the following parameter(s):

SinglyLinkedListNode head: a reference to the head of the list

Print
For each node, print its data value on a new line.

Input Format
The first line of input contains n, the number of elements in the linked list. The next n lines contain one element each, the integer values for each node.

Note: Do not read any input from stdin/console.

Constraints
1 <= n <= 1000

1 <= list[i] <= 1000, where list[i] is the ith element of the linked list.

Sample Input
2
16
13
Sample Output
16
13
Explanation
There are two elements in the linked list. They are represented as 16 -> 13 -> NULL. So, the function should print 16 and 13 each on a new line.
