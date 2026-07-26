#include <iostream>
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
class CircularList {
    Node *head;
    Node *tail;

    public :
    CircularList() {
        head = tail = NULL;
    }

    void insert_at_head(int val) {
        Node *newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            tail->next = head;
            return;
        }
        else {
            newnode->next = head;
            head = newnode;
            tail->next = head;
            return;
        }
    }

    void insert_at_tail(int val) {
        Node *newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            tail->next = head;
            return;
        }
        else {
            tail->next = newnode;
            tail = newnode;
            newnode->next = head;
            return;
        }
    }

    void delete_at_head() {
        if(head == NULL) {
            cout << "LL is empty";
            return;
        }
        else if(head == tail) {  // only 1 node
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;   // 2 or more nodes
        head = head->next;
        tail->next = head;
        delete temp;
        return;
    }

    void delete_at_tail() {
        if(head == NULL) return;
        else if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        else {
            Node *prev = head;
            while(prev->next != tail) {
                prev = prev->next;
            }
            Node *temp = tail;
            tail = prev;
            tail->next = head;
            delete temp;
            return;
        }
    }

    void traverse() {
        if(head == NULL)
        {
            cout<<"LL is empty";
            return;
        }
        Node *temp = head;
        do{
            cout <<temp->data <<" ";
            temp = temp->next;

        }
        while(temp != head);
    }
};
int main() {
    CircularList ll;
    // insert at head
    ll.insert_at_head(1);
    ll.insert_at_head(2);
    ll.insert_at_head(3);
    // insert at tail
    ll.insert_at_tail(3);
    ll.insert_at_tail(2);
    ll.insert_at_tail(1);
    // delete at head
    ll.delete_at_head();
    // delete at tail
    ll.delete_at_tail();
    ll.traverse();

}