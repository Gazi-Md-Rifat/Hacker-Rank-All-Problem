// Hacker Rank Question Link : https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?isFullScreen=true




/*
 * class attribute..
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) 
{
    SinglyLinkedListNode *head = llist;
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data); 
    if (position == 0)
    {
        return node;
    }  
    int i = 1; 
    while (i < position)
    {
        head = head->next;
        i++;
    }
    SinglyLinkedListNode *next_node;
    next_node = head->next;
    head->next = node;
    head->next->next = next_node;
    return llist;
}