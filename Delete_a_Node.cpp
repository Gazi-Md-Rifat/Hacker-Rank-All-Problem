
// Hacker Rank Question Link : https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true

/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
    if (position == 0)
    {
        return llist->next;
    }
    SinglyLinkedListNode *curr = llist;
    int i = 1;
    while (i < position)
    {
        llist = llist->next;
        i++;
    }
    llist->next = llist->next->next;
    return curr;
}