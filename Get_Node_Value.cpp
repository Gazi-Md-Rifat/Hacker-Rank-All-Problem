// Hacker Rank Question Link : https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true


/*
 * class attribute..
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) 
{
    vector<int> temp;
    SinglyLinkedListNode *head = llist;
    while (head != NULL)
    {
        int c = head->data;
        temp.push_back(c);
        head= head->next;
    }
    int ans = temp[temp.size() - 1 - positionFromTail];
    return ans;
}
