// Hacker Rank Question Link : https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?isFullScreen=true

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


Node * insert(Node * root, int data) {

    if (!root){
        return new Node(data);
    }

    if (root && root->data > data){
        root->left = insert(root->left, data);
    }
    else {// root->data < data
        root->right = insert(root->right, data);
    }

    return root;
}