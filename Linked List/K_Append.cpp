#include "Linked_List.hpp"


int length(Node* head){

    int l = 0;

    while(head != nullptr){
        head = head -> next;
        l++;
    }

    return l;

}


Node* K_Append(Node* &head, int k){

    if(head == nullptr){
        return nullptr;
    }


    Node *Tail = head;
    Node *newHead;
    Node* newTail;

    int l = length(head);    
    int count = 1;


    while(Tail -> next != nullptr){

        Tail = Tail -> next;
        count++;

        if(count == l - k){
            newTail = Tail;
        }

        if(count == l - k + 1){
            newHead = Tail;
        }
    }

    Tail -> next = head;
    newTail -> next = nullptr;
    

    return newHead;
}



int main(){

    Node *head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    Node *ptr = K_Append(head, 3);
    display(ptr);


    return 0;
}