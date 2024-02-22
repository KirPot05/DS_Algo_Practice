#include <iostream>
#include <set>
using namespace std;

string removeDup(string s)
{

    if (s.length() == 0)
    {
        return "";
    }

    char c = s[0];
    string ans = removeDup(s.substr(1));

    if (c == ans[0])
    {
        return ans;
    }

    return (c + ans);
}

int main(int argc, char const *argv[])
{

    string s = "avvvbbbaa11";

    cout << removeDup(s);

    return 0;
}
