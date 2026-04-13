#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;

    Node* head = a;

    cout<<head->data<<"\n"; // 1
    cout<<head->next->data<<"\n"; // 7

    // insert
    Node *temp = head->next;
    Node* newNode = new Node(4);
    newNode->next = temp->next;
    temp->next = newNode;

    // delete
    temp = head;
    temp->next=temp->next->next;

    temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";



    return 0;
}