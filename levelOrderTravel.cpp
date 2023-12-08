// Hacker Rank Question Link : https://www.hackerrank.com/challenges/tree-level-order-traversal/problem?isFullScreen=true

/*
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

void levelOrder(Node *root){
    if (!root){
        return;
    }
    queue<Node *> container;
    container.push(root);
    // container.push_back(NULL);

    while (!container.empty()){

        Node *temp = container.front();
        container.pop();

        cout << temp->data << " ";

        if (temp->left){
            container.push(temp->left);
        }
        if (temp->right){
            container.push(temp->right);
        }
    }
}

// --------------------------------------------- usint dqeue -----------------------------


void levelOrder(Node *root){
    if (!root){
        return;
    }
    deque<Node*> container;
    container.push_back(root);

    while (!container.empty()){
        Node *temp = container.front();
        container.pop_front();
        
        cout << temp->data << " ";
        
        if (temp->left){
            container.push_back(temp->left);
        }
        if (temp->right){
            container.push_back(temp->right);
        }
    }
}