#include <iostream>
#include <stack>



using namespace std;


void reverse(string &s){

    int n = s.length();

    for(int i=0; i <= n/2; i++){
        swap(s[i], s[n - 1 - i]);
    }

}



int prec(char c){

    if(c == '^'){
        return 3;
    }

    else if(c == '*' || c == '/'){
        return 2;
    }

    else if(c == '+' || c == '-'){
        return 1;
    }



    return -1;
}




string convert(string s){

    stack <char> st;
    reverse(s);
    
    string res;

    for(int i=0; i<s.length(); i++){
        if(s[i] == ')'){
            s[i] = '(';
        }

        else if(s[i] == '('){
            s[i] = ')';
        }

        
    }



    for (int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            res += s[i];
        }

        else{
            
            if(s[i] == '('){
                st.push(s[i]);
            }

            else if(s[i] == ')'){
                
                while(!st.empty() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }

                if(!st.empty()){
                    st.pop();
                }
            }

            else {
                while (!st.empty() && prec(st.top()) >= prec(s[i])){
                    res += st.top();
                    st.pop();
                }

                st.push(s[i]);
            }
           
        }
    }
    
    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    reverse(res);

    return res;

}   


int main()
{   
    string s = "(a+b-c)*(a+k-l)";
    cout << s << endl;
    
    cout << convert(s) << endl;

    
    return 0;
}