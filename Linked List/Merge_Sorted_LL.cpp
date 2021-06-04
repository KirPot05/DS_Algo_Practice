#include "Linked_List.hpp"


Node* Merge_Recursive(Node* &head1, Node* &head2){

    if(head1 == nullptr){
        return head2;
    }

    if(head2 == nullptr){
        return head1;
    }

    Node* result;
    
    if(head1 -> data < head2 -> data){
        result = head1;
        result -> next = Merge_Recursive(head1 -> next, head2);
    }

    else{
        result = head2;
        result -> next = Merge_Recursive(head1, head2 -> next);
    }


    return result;
}


Node* Merge(Node* &head1, Node* &head2){

    Node* ptr = nullptr;
    Node *temp1 = head1;
    Node *temp2 = head2;

    while(temp1 != nullptr && temp2 != nullptr){

        if(temp1 -> data < temp2 -> data){
            insertAtTail(ptr, temp1 -> data);
            temp1 = temp1 -> next;
            
        }

        else{
            insertAtTail(ptr, temp2 -> data);
            temp2 = temp2 -> next;
        }

    }

    while(temp1 != nullptr){
        insertAtTail(ptr, temp1->data);
        temp1 = temp1 -> next;
    }

    
    while(temp2 != nullptr){
        insertAtTail(ptr, temp2->data);
        temp1 = temp2 -> next;
    }


    
    return ptr;
}



int main(){

    Node *head1 = nullptr;
    Node *head2 = nullptr;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head1, 9);
    insertAtTail(head1, 11);
    
    display(head1);
    

    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    insertAtTail(head2, 8);
    insertAtTail(head2, 10);
    
    display(head2);


    Node *ptr = Merge_Recursive(head1, head2);
    display(ptr);


    return 0;
}