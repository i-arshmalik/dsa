#include<iostream>
using namespace std;
class Node {
    public : 
    int data;
    Node *next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node *head;
    Node *tail;

    public :
    List() {
    head = tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head;
            head = newNode;            
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
        
    }

    void pop_front() {
        if(head == NULL) {
            cout<<"LL is empty";
            return;
        }
        else {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void pop_back() {
        if(head == NULL) {
            cout<<"LL is empty";
            return;
        }
        else {
            Node *temp = head;
            while(temp->next->next != NULL) {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
            return;
        }
    }

    void insert_at_index(int val, int pos) {
        if(pos < 0) {
            cout<<"Invalid position";
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }
        int i = 0;
        Node *temp = head;
        while(i != pos-1) {
            i++;
            if(temp == NULL) {
                cout<<"invalid pos";
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

    
    int search(int val) {
        Node *temp = head;
        int i = 0;
        while(temp != NULL) {
            if(temp->data == val) {
                return i;
            }
            else {
                i++;
                temp = temp->next;
            }
        }
        return -1;
    }

    void traverse() {
        Node *temp = head;
        while(temp != NULL) {
            cout <<temp->data <<" ";
            temp = temp->next;
        }
        cout <<endl;
    }
};
int main() {
    List ll;

    //push_front
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.traverse();
    // push back 
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.traverse();
    // pop front;
    ll.pop_front();
    ll.traverse();
    // pop back
    ll.pop_back();
    ll.traverse();
    // insert at index
    ll.insert_at_index(7,2);
    ll.insert_at_index(9,0);
    ll.traverse();
    // Search 
    cout<< ll.search(1) <<endl;
    cout<< ll.search(99) <<endl;

}