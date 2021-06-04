#include<iostream>

using namespace std;



class Node{

    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = nullptr;
        }  

};

int length(Node* head){

    int l = 0;

    while(head != nullptr){
        head = head -> next;
        l++;
    }

    return l;

}



void insertAtTail(Node* &head, int val){

    Node *n = new Node(val);

    if(head == nullptr){
        head = n;
        return;
    }

    Node *temp = head;

    while(temp -> next != nullptr){
        temp = temp -> next;
    }

    temp -> next = n;

}

void InsertAtHead(Node* &head, int val){

    Node *ptr = new Node(val);

    ptr -> next = head;

    head = ptr;


}


void insert_between(Node* &head, int val, int pos){

    Node *ptr = new Node(val);

    Node *temp = head;

    for(int i = 0; i < pos-1; i++){
        temp = temp -> next;
    }

    ptr -> next = temp -> next;
    temp -> next = ptr;


}


void deleteAthead(Node* &head){

    Node* ptr = head;
    head = head -> next;

    delete ptr;

}


void deletion(Node* &head, int val){

    if(head == nullptr)
        return;

    if(head -> next == nullptr){
        deleteAthead(head);
    }

    Node *temp = head;
    
    while(temp -> next -> data != val){
        temp = temp -> next;
    }

    Node *ptr = temp -> next;
    temp -> next = (temp -> next) -> next;

    delete ptr;

}


string search(Node* &head, int key){

    Node *temp = head;
    
    while(temp != nullptr){
        
        if(temp -> data == key){
            return "Present!";
        }
        temp = temp -> next;
    }

    return "Not Present";
}


void display(Node *head){

    while(head != nullptr){
        cout << head -> data << " " << "-> ";
        head = head -> next;
    }
    cout << "NULL" <<endl;
}
