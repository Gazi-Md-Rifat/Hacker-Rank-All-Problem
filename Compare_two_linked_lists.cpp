// Hacker Rank Question Link : https://www.hackerrank.com/challenges/compare-two-linked-lists/problem?isFullScreen=true



/*
 * class attribute..
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    // if ((head1 == NULL && head2 != NULL) )
    SinglyLinkedListNode *head = head1;
    SinglyLinkedListNode *heed = head2;
    while (head != NULL && heed != NULL)
    {
        if (head->data != heed->data)
        {
            return false;
        }
        head = head->next;
        heed = heed->next;
    }   
    if (heed == head)
    {
        return true;
    } 
    
    return false;
}