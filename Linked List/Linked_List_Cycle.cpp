#include"Linked_List.hpp"




void MakeCycle(Node* &head, int pos){

    Node *temp = head;
    Node* startnode;

    int count = 1;

    while(temp -> next != nullptr){

        if(count == pos){
            startnode = temp;
        }
        temp = temp -> next;
        count++;
    }

    temp -> next = startnode;

}


string Detect_Cycle(Node* &head){

    Node* fast = head;
    Node* slow = head;

    while(fast != nullptr && fast -> next != nullptr){

        fast = fast -> next -> next;
        slow = slow -> next;

        if(fast == slow){
            return "Cycle Detected!";
        }

    }

    return "No Cylces Present!";

}

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

    MakeCycle(head, 3);
    cout << Detect_Cycle(head) << endl;

    Remove_Cycle(head);
    display(head);
    cout << Detect_Cycle(head) << endl;


    return 0;
}