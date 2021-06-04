#include <iostream>
#include <stack>

using namespace std;


bool isValid(string s){

    stack<char> st;

    int n = s.length();

    for(int i=0; i<n; i++){

        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }

        else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }


    }

    return (st.empty());
}


int main()
{
    string s = "{[(()])}";

    if(isValid(s)){
        cout << "Valid String" << endl;
    }

    else 
        cout << "Invalid String" << endl;

    
    return 0;
}