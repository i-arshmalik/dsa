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

void Kth_level(Node *root ,int k) {
    if(root == NULL)
        return;
    if(k==1) {
        cout <<root->data <<" ";
        return;
    }
    Kth_level(root->left,k-1);
    Kth_level(root->right,k-1);
    return;
}

int main() {
    vector<int> pre = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = preorder_tree_make(pre);
    int k = 3;
    Kth_level(root,k);

}