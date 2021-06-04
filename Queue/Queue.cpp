#include <iostream>
using namespace std;

#define n 100


class queue{

    int *arr;
    int front;
    int back;

    public: 

        queue(){
            arr = new int [n];
            front = -1;
            back = -1;
        }

        void push(int x){

            if(back == n-1){
                cout << "Queue Overflow!!" << endl;
                return;
            }

            arr[++back] = x;

            if(front == -1){
                front++;
            }

        }

        

        int peek(){

            if(front == -1 || front > back){
                cout << "No elements present!!" << endl;
                return -1;
            }

            return arr[front];

        }

        void pop(){

            if(front == -1 || front > back){
                cout << "No elements present!!" << endl;
                return;
            }

            front++;
        }

        bool empty(){
            return (front == -1 || back < front);
        }


};




int main()
{

    queue q;

    for(int i=1; i<=10; i++)
        q.push(i);
    
    
    while(!q.empty()){
        cout << q.peek() << " ";
        q.pop();
    }

    if(q.empty()) cout << endl << "Underflow!!" << endl;


    return 0;
}