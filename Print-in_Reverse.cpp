
// Hacker rank Question Link : https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true

/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void reversePrint(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *pre = NULL;
    SinglyLinkedListNode *curr = llist;
    SinglyLinkedListNode *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        // increase pointer..
        pre = curr;
        curr = next;
    }
    llist = pre;
    while (llist != NULL)
    {
        cout << llist->data << endl;
        llist = llist->next;
    }
    return;
}