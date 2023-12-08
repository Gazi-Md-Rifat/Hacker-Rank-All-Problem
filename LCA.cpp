// hacker Rank Question Link : https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem?isFullScreen=true


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
Node *lca(Node *root, int v1,int v2) {

    if (!root){
        return NULL;
    }
    if (root->data == v1 || root->data == v2){
        return root;
    }


    Node *leftLCA = lca(root->left, v1, v2);
    Node * rightLCA = lca(root->right, v1, v2);
    
    if (leftLCA && rightLCA){
        return root;
    }
    else if (leftLCA){
        return leftLCA;
    }
    return rightLCA;
}