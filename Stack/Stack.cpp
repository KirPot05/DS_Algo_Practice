#include <iostream>

using namespace std;

#define n 1000


class Stack{

    int *arr, Top;

    public:
        Stack(){
            arr = new int [n];
            Top = -1;
        }

    void push(int x){
        
        if(Top == n - 1){
            cout << "Stack Overflow!" << endl;
            return; 
        }

        arr[++Top] = x;
    }

    void pop(){

        if(empty()){
            cout << "No elements present!" << endl;
            return;
        }

        Top--;

    }

    int top(){

        if(empty()){
            cout << "No elements present!" << endl;
            return -1;
        }

        return arr[Top];
        

    }

    bool empty(){
        return (Top == -1);
    }

};


int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    for(int i=0; i<=6; i++){
        cout << st.top() << endl;
        st.pop();
    }
    

    return 0;
}