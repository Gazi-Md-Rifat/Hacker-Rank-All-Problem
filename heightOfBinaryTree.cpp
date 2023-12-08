//  Hacker Rank Question Link : https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true



/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};
*/

int height(Node* root) {
    if (!root || (!root->left && !root->right)){
        return 0;
    }
    int leftEdge = height(root->left);
    int rightEdge = height(root->right);

    return max(leftEdge, rightEdge) + 1;
}