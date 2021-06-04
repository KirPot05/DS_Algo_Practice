#include"Doubly_Linked_List.hpp"


int main(){

    Node *head = nullptr;

    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    
    display(head);

    //deletion(head, 1);
    deletion(head, 6);

    display(head);


    return 0;
}