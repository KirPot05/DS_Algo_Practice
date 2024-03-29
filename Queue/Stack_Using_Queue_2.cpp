/* 
    
    Stack using Queue (Method 2)    

    Making Pop Operation costly

*/

#include <iostream>
#include <queue>
using namespace std;


class stack{

    int n;
    queue <int> q1;
    queue <int> q2;


    public:
        stack(){
            n = 0;
        }

        void push(int x){

            q1.push(x);
            n++;

        }

        void pop(){

            if(q1.empty()){
                cout << "No elements present!!" << endl;
                return;
            }

            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            q1.pop();
            n--;

            queue <int> temp = q1;
            q1 = q2;
            q2 = temp;

        }

        int top(){
            
            if(q1.empty()){
                cout << "No elements present!!" << endl;
                return -1;
            }

            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            int ans = q1.front();
            q1.pop();

            q2.push(ans);

            queue <int> temp = q1;
            q1 = q2;
            q2 = temp;


            return ans;

        }



        int size(){
            return n;
        }

        bool empty(){

            return q1.empty();

        }


};



int main(){

    stack st;

    for(int i=1; i<=10; i++){
        st.push(i);
    }

    cout << "Size : " << st.size() << endl; 

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl << (st.empty() ? "Stack Empty!!" : "Not empty");


    return 0;
}

