#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int PostFix_Eval(string s)
{

    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }

        else
        {

            int op2 = st.top();
            st.pop();

            int op1 = st.top();
            st.pop();

            switch (s[i])
            {

            case '+':
                st.push(op1 + op2);
                break;

            case '-':
                st.push(op1 - op2);
                break;

            case '/':
                if (op2 != 0)
                    st.push(op1 / op2);
                else{
                    cout << "Exception : Division by zero!!";
                    return 0;
                }

                break;

            case '*':
                st.push(op1 * op2);
                break;

            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }

    }

    return st.top();

}



int main(int argc, char const *argv[])
{
    //string s = "46+2/5*7+";

    cout << PostFix_Eval("46+2/5*7+") << endl;

    
    return 0;
}
