/* 
    
    Stack using Queue (Method 1)    

    Making Push Operation costly

*/


#include <iostream>
#include <queue>

using namespace std;



class Stack{

    int n;
    queue <int> q1;
    queue <int> q2;

    public:

        Stack(){
            n = 0;
        }

        void push(int x){

            q2.push(x);
            n++;

            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            queue <int> temp = q1;
            q1 = q2;
            q2 = temp;


        }

        void pop(){

            q1.pop();
            n--;

        }

        int top(){
            return q1.front();
        }

        int size(){
            return n;
        }

        bool empty(){
            return q1.empty(); 
        }

};








int main(){


    Stack st;
    
    for(int i=1; i<=10; i++){
        st.push(i);
    }

    cout << "Size : " << st.size() << endl;



    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << "Size : " << st.size() << endl;



    if(st.empty()) cout << endl << "Underflow!!" << endl;



    return 0;
}