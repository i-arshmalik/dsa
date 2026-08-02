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
void pre_traversal(Node *root) {
    if(root == NULL) return;
    cout <<root->data <<" ";
    pre_traversal(root->left);
    pre_traversal(root->right);
    return;
}

void inorder_travsersal(Node *root) {
    if(root == NULL) return;
    inorder_travsersal(root->left);
    cout << root->data <<" ";
    inorder_travsersal(root->right);
    return;
}

void postorder_traversal(Node *root) {
    if(root == NULL) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout <<root->data <<" ";
    return;
}
// level order traversal
void level_order(Node *root) {
    queue<Node*> q;
     
    q.push(root);
    while(q.size() > 0) {
        Node *curr = q.front();
        q.pop();
        cout <<curr->data <<" ";
        if(curr->left != NULL) {
            q.push(curr->left);
        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
}

void level_order_h(Node *root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 0) {
        Node *curr = q.front();
        q.pop();
        if(curr == NULL) {
            if(!q.empty()) {
                cout <<endl;
                q.push(NULL);
                continue;
            }
            else {
               break; 
            }
        }
        
        cout <<curr->data<<" ";

        if(curr->left != NULL) {
            q.push(curr->left);
        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
}
int main() {
    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = preorder_tree_make(pre);
    cout <<"pre order traversal = ";
    pre_traversal(root);
    cout <<"\ninorder traversal = ";
    inorder_travsersal(root);
    cout <<"\npostorder traversal = ";
    postorder_traversal(root);

    cout <<"\nlevel order traversal = ";
    level_order(root);
    cout <<"\nlevel order traversal with multi height\n";
    level_order_h(root);
}