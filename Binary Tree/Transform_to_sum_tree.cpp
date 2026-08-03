#include <iostream>
#include <queue>
#include <vector>
using namespace std; 
class Node {
    public :
    int data;
    Node *left;
    Node *right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;
Node *preorder_tree_make(vector<int> pre) {
    idx++;
    if(pre[idx] == -1) return NULL;
    Node *root = new Node(pre[idx]);
    root->left = preorder_tree_make(pre);
    root->right = preorder_tree_make(pre);
    return root;
}

int transform(Node *root) {
    if(root == NULL) 
        return 0;
    int lsum = transform(root->left);
    int rsum = transform(root->right);
    root->data += lsum + rsum;
    return root->data;
}

int main() {
    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = preorder_tree_make(pre);
    cout <<"sum of all node = " <<transform(root);
}