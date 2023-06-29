// Hacker Rank Question Link : https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem isFullScreen=true


/*
 * class attribute
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */



SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *update = new SinglyLinkedListNode(data);
    update->next = llist;
    
    return update;
}