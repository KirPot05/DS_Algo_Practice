#include <iostream>
using namespace std;

void processString(string &s)
{
    int start = 0;
    int end = s.length();

    while (s[0] == ' ')
    {
        s.replace(0, 1, "");
    }

    while (s.back() == ' ')
    {
        s.pop_back();
    }

    for (int i = 0; i < s.length(); i++)
    {
        while (s[i] == ' ' && s[i + 1] == ' ' && i < s.length() - 1)
        {
            s.replace(i, 1, "");
        }
    }
}

string reverseWords(string s)
{
    processString(s);

    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = i;

        if (s[i] == ' ')
        {
            string substr = s.substr(start, end);
            ans = substr + " " + ans;
            start = end + 1;
        }
    }

    return ans;
}

int main()
{

    string str = "a good   example";
    cout << str << endl;
    cout << "Initial length: " << str.length() << endl;

    // processString(str);
    // cout << str << endl;
    // cout << "Modified length: " << str.length() << endl;

    cout << "Modified str: " << reverseWords(str) << endl;
    return 0;
}