// Hacker Rank Question Link : https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true

// Insert a Node at the Tail of a Linked List function


/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    SinglyLinkedListNode *d = head;
    SinglyLinkedListNode *update = new SinglyLinkedListNode(data);
    if (d == NULL)
    {
       return update;
    }
    while (d->next != NULL) {
        d = d->next;
    }
    d->next = update;
    return head;
}
