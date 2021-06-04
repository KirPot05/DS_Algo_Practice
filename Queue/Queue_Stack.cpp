// Implementing Queue using Stack

#include <iostream>
#include <stack>

using namespace std;


class queue{

    stack <int> s1;

    public:
    
        void push(int x){

            s1.push(x);
        }

        int pop(){

            if(s1.empty()){
                cout << "No elements to pop!!" << endl;
                return -1;
            }

            int val = s1.top();
            s1.pop();

            if(s1.empty()){
                return val;
            }

            int item = pop();
            s1.push(val);
            return item;
        }



        bool empty(){

            return (s1.empty());
        }

};



int main()
{

    queue q;


    for(int i=1; i<=10; i++)
        q.push(i);
    

    while(!q.empty()){
        cout << q.pop() << " ";
    }



    return 0;
}