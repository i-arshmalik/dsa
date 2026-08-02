#include <iostream>
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
int idx = -1;
Node *buildTree(vector<int> pre) {
    idx++;
    if(pre[idx] == -1) 
        return NULL;
    Node *root = new Node(pre[idx]);
    root->left = buildTree(pre);
    root->right = buildTree(pre);
    return root;
}
int height(Node *root) {
    if(root == NULL) 
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;
}
int count(Node *root) {
    if(root == NULL) 
        return 0;
    int lc = count(root->left);
    int rc = count(root->right);
        return lc+rc+1;
}
int sum_of_nodes(Node *root) {
    if(root == NULL) 
        return 0;
    int lsum = sum_of_nodes(root->left);
    int rsum = sum_of_nodes(root->right);
    return lsum + rsum + root->data;
}
int main() {
    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(pre);
    cout <<"height of tree is ="<<height(root);
    cout <<"\nno of nodes is = " <<count(root);
    cout <<"\nsum of nodes value is = " <<sum_of_nodes(root);
}