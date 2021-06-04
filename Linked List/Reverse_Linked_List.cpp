#include<iostream>
#include"Linked_List.hpp"

using namespace std;


Node* Reverse(Node* &head){

    Node* ptr = NULL;
    Node* current = head;
    Node* nextptr;
    
    while(current != nullptr){
        nextptr = current -> next;
        current -> next = ptr;

        ptr = current;
        current = nextptr;
        
    }

    return ptr;
}


Node* Recursive_Reverse(Node* &head){
    
    if(head == nullptr || head -> next == nullptr){
        return head;
    }

    
    Node* ptr = Recursive_Reverse(head -> next);

    head -> next -> next = head;
    head -> next = nullptr;

    return ptr; 

}


int main(){

    Node *head = nullptr;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    Node *temp = head;

    // Node *ptr = Reverse(head);
    // display(ptr);

    Node* ptr2 = Recursive_Reverse(temp);
    display(ptr2);

    return 0;
}