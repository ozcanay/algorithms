#include "linked-list.h"



/*
 * Given a node from a cyclic linked list which has been sorted, write a function to insert a value into the list such that it remains a cyclic sorted list. The given node can be any single node in the list. Return the inserted new node.

3->5->1 is a cyclic list, so 3 is next node of 1.
3->5->1 is same with 5->1->3

Example 1:

Input:
3->5->1
4
Output:
5->1->3->4
Example 2:

Input:
2->2->2
3
Output:
3->2->2->2
 */

