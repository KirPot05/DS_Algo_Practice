#include "iostream"

using namespace std;


class Node{

    public: 
        int data;
        Node *next;
        Node *prev;
    
        Node(int val){
            data = val;
            next = nullptr;
            prev = nullptr;
        }


};

void InsertAtHead(Node* &head, int val){

    Node *ptr = new Node(val);
    ptr -> next = head;

    if(head != nullptr){
        head -> prev = ptr;
    }

    head = ptr;

}

void InsertAtTail(Node* &head, int val){

    if(head == nullptr){
        InsertAtHead(head, val);
        return;
    }

    Node *temp = head;
    Node *ptr = new Node(val);
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    
    ptr -> prev = temp;
    temp -> next = ptr;

}



void display(Node *head){

    while(head != nullptr){

        cout << head -> data << " -> ";
        head = head -> next;
    }

    cout << "NULL" << endl;
}


void deleteAtHead(Node* &head){

    Node* ptr = head;
    head = head -> next;
    head -> prev = nullptr;

    delete ptr;
}   


void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(temp != nullptr && count != pos){

        temp = temp -> next;
        count++;

    }

    temp -> prev -> next = temp -> next;

    if(temp -> next != nullptr){
        temp -> next -> prev = temp -> prev;
    }

    delete temp;
    

}