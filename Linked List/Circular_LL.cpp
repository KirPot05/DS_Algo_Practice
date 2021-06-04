
#include <iostream>

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

void insertAtHead(Node* &head, int val){


    Node *ptr = new Node(val);
    
    if(head == nullptr){
        ptr -> next = ptr;
        head = ptr;
        return;
    }

    Node *temp = head;

    while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = ptr;
    ptr -> next = head;
    head = ptr;


}


void insertAtTail(Node* &head, int val){

    if(head == nullptr){
        insertAtHead(head, val);
        return;
    }

    Node *ptr = new Node(val);
    Node *temp = head;
    
    while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = ptr;
    ptr -> next = head;

}

void deleteAtHead(Node* &head){

    Node *temp = head;
    Node *ptr = head;
    

    while(temp -> next != head){
        temp = temp -> next;
    }

    temp -> next = head -> next;
    head = head -> next;
    delete ptr;


}

void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    Node *temp = head;
    int count = 1;
    while(pos - 1 != count){
        temp = temp -> next;
        count++;
    }

    Node *ptr = temp -> next;

    temp -> next = temp -> next -> next;
    
    delete ptr;


}

void display(Node *head){

    Node *temp = head;

    do{
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }while(temp != head);

    cout << "NULL" << endl;

}

int main(){

    Node *head = nullptr;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    display(head);

    deletion(head, 6);
    display(head);

    deletion(head, 1);
    display(head);



    return 0;
}
