#include "Linked_List.hpp"



void Remove_Cycle(Node* &head){

    Node *fast = head;
    Node *slow = head;

    do
    {
        slow = slow -> next;
        fast = fast -> next -> next;

    } while (slow != fast);
    
    fast = head;

    while(fast -> next != slow -> next){
        fast = fast -> next;
        slow = slow -> next;
    }

    slow -> next = nullptr;

}   
 


int main(){


    Node* head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);



    Remove_Cycle(head);
    display(head);


    return 0;
}