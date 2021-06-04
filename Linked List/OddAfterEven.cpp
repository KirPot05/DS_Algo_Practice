#include "Linked_List.hpp"

void EvenAfterOdd(Node* &head){

    Node *odd = head;
    Node *even = head -> next;
    Node *evenstart = even;

    while(odd -> next != nullptr && even -> next != nullptr){

        odd -> next = even -> next;
        odd = odd -> next;

        even -> next = odd -> next;
        even = even -> next;

    }

    odd -> next = evenstart;
    
    if(odd -> next != nullptr){
        even -> next = nullptr;
    }

}


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *head = nullptr;

    for(int i=0; i<6; i++){
        insertAtTail(head, arr[i]);
    }

    display(head);

    EvenAfterOdd(head);
    display(head); 

    return 0;
}