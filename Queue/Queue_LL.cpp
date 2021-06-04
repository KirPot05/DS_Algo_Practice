#include <iostream>
using namespace std;


class node{

    public:
        int data;
        node *next;

        node(int x){
            data = x;
            next = nullptr;
        }


};


class queue{

    node *front;
    node *back;

    

    public:

        queue(){

            front = nullptr;
            back = nullptr;

        }


        void push(int val){

            node *ptr = new node(val);

            if(front == nullptr){
                front = ptr;
                back = ptr;
                return;
            }

            back -> next = ptr;
            back = ptr;

        }

        int peek(){

            if (front == nullptr)
            {
                cout << "No elements in Queue\n";
                return -1;
            }

            return front -> data;
            
        }

        void pop(){


            if (front == nullptr){
                cout << "No elements in Queue\n";
                return ;
            }

            node *ptr = front;
            front = front -> next;
            delete ptr;

        }


        bool empty(){
            return (front == nullptr);
        }

};





int main()
{

    queue q;

    for(int i=1; i<=10; i++){
        q.push(i);    
    }

    while(!q.empty()){
        cout << q.peek() << " ";
        q.pop();
    }

    if(q.empty()) cout << endl << "Underflow" << endl;


    return 0;
}