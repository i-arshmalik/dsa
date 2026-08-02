#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

void top_view(Node *root) {
    queue<pair<Node*,int>> q;
    map<int,int> m;
    q.push({root,0});
    while(q.size() > 0) {
        Node *curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()) {
            m[currHD] = curr->data;
        }

        if(curr->left != NULL) {
            q.push({curr->left,currHD -1});
        }
        if(curr->right != NULL) {
            q.push({curr->right,currHD +1});
        }
    }

    for(auto it : m) {
        cout <<it.second <<" ";

    }
}

int main() {
    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = preorder_tree_make(pre);
    top_view(root);
}