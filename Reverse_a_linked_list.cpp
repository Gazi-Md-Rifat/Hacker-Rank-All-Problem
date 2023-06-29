// Hacker Rank Question Link : https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true


/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *curr = llist;
    SinglyLinkedListNode *pre = NULL;
    SinglyLinkedListNode *next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = pre;
        // increment
        pre = curr;
        curr = next;    
    }
    return pre;
}