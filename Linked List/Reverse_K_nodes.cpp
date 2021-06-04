#include"Linked_List.hpp"


Node* Reverse_K_Nodes(Node* &head, int k){

    Node* current = head;
    Node* ptr = nullptr;
    Node *nextptr;

    int count = 0;

    while(current != nullptr && count < k){

        nextptr = current -> next;
        current -> next = ptr;

        ptr = current;
        current = nextptr;
        count++;
    }


    if(head != nullptr){
        head -> next = Reverse_K_Nodes(nextptr, k);
    }


    return ptr;

    
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

    Node *ptr = Reverse_K_Nodes(head, 3);

    display(ptr);


    return 0;
}