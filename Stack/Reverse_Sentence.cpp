#include <iostream>
#include<stack>

using namespace std;

void reverse_Sentence(string s){

    stack <string> st;

    for(int i=0; i<s.length(); i++){

        string word = "";

        while(s[i] != ' ' && i < s.length()){
            word += s[i++];
            
        }

        st.push(word);

    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

}




int main()
{
    string s = "Hey, how you doing?";
    cout << s << endl;
    
    reverse_Sentence(s);

    
    return 0;
}