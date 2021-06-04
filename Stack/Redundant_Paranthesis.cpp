#include <iostream>
#include <stack>
using namespace std;

bool isoperator(char c){

    return (c == '+' || c == '-' || c == '/' || c == '*'); 
}

bool Redundant(string s){

    stack <char> st;

    for(int i=0; i<s.length(); i++){

        if(isoperator(s[i])){
            st.push(s[i]);
        }

        else if(s[i] == '('){
            st.push(s[i]);
        }

        else if(s[i] == ')'){

            if(st.top() == '('){
                return true;
            }

            while(isoperator(st.top())){
                st.pop();
            }
            st.pop();        
        }

    }

    return false;

}



int main()
{

    string s = "(a+(a+b))";
    //cin >> s;    

    (Redundant(s)) ? cout << "Redundant Paranthesis" : cout << "Non - Redundant";

    return 0;
}