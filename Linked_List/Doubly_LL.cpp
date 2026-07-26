#include <iostream>
using namespace std;
class Node {
    public :
    int data;
    Node *prev;
    Node *next;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};
class DoublyList {
    Node *head;
    Node *tail;

    public :
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            return;
        }
        else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
            return;
        }
    }

    void push_back(int val) {
        Node *newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            return;
        }
        else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            return;
        }
    }

    void pop_front() {
        if(head == NULL) {
            cout <<"LL is empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;

        if(head != NULL)
            head->prev = NULL;
        else tail = NULL;

        delete temp;
        return ;
    }

    void pop_back() {
        if(tail == NULL) {
            cout <<"LL is empty\n";
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        if(tail != NULL)
            tail->next = NULL;
        else {
            head = NULL;
        }

        delete temp;
        return;
    }
    void traverse() {
        Node *temp = head;
        while(temp != NULL) {
            cout <<temp->data <<" ";
            temp = temp->next;
        }
    }
};
int main() {
    DoublyList ll;
    // push front
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    // push back
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    // pop front
    ll.pop_front();
    // pop back
    ll.pop_back();
    ll.traverse();
}