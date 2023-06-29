// Hacker Rank Question Link : https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true

/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void printLinkedList(SinglyLinkedListNode* head) {
    while (head != NULL) 
    {
        cout << head->data << endl;
        head = head->next;
    }
    return;
}