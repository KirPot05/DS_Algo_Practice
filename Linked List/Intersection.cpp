#include "Linked_List.hpp"


void intersect(Node* &head1, Node* &head2, int pos){

    Node* temp1 = head1;
    pos--;

    while(pos--){
        temp1 = temp1 -> next;
    }

    Node* temp2 = head2;

    while(temp2 -> next != nullptr){
        temp2 = temp2 -> next;
    }

    temp2 -> next = temp1;

}



int intersection(Node* &head1, Node* &head2){

    int l1 = length(head1);
    int l2 = length(head2);

    Node* ptr1;
    Node* ptr2;
    int d = 0;

    if(l1 > l2){
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }

    else{
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d-- > 0){
        ptr1 = ptr1 -> next;
    }

    while(ptr1 != nullptr && ptr2 != nullptr){

        if(ptr1 == ptr2){
            return ptr1 -> data;
        }

        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }

    return -1;
}


int main(){

    Node* head1 = nullptr;
    Node* head2 = nullptr;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);

    insertAtTail(head2, 8);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);

    intersect(head1, head2, 4);

    display(head1);
    display(head2);

    cout << intersection(head1, head2) << endl;

    return 0;
}