#include <iostream>
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


Node *insert(Node *root, int val) {
    if(root == NULL)  
        return new Node(val);
    if(val < root->data) {
        root->left = insert(root->left , val);
    }
    else {
        root->right = insert(root->right , val);
    }
    return root;
}
void inorder(Node *root) {
    if(root == NULL)    return;
    inorder(root->left);
    cout <<root->data <<" ";
    inorder(root->right);
}

Node *inorder_sucessor(Node *root) {
    while(root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node *delete_node(Node* root, int key) {
    if(root == NULL)
        return NULL;
    if(key < root->data)
        root->left =  delete_node(root->left , key);
    else if(key > root->data) 
        root->right = delete_node(root->right , key);
    else {
        if(root->left == NULL) {
            Node *temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right == NULL) {
            Node *temp = root->left;
            delete(root);
            return temp;
        }
        else {
            Node *IS = inorder_sucessor(root->right);
            root->data = IS->data;
            root->right = delete_node(root->right , IS->data);
        }
    
    }
    return root;
}
int main() {
    Node *root = NULL;
    root = insert(root,6);
    root = insert(root,2);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,1);
    root = insert(root,3);
    inorder(root); 
    cout <<endl;
    root = delete_node(root , 3);
    inorder(root);
}