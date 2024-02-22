#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

string gcdOfStrings(string str1, string str2)
{
    // string divisor = str1.length() < str2.length() ? str1 : str2;
    // string dividend = str1.length() < str2.length() ? str2 : str1;

    // int i = 0;
    // while (i < dividend.length())
    // {
    //     int index = dividend.find(divisor);
    //     if (index == -1)
    //     {
    //         return "";
    //     }

    //     i += index + divisor.length();
    // }

    // return divisor;

    unordered_set<char> s1;
    for (char s : str1)
    {
        s1.insert(s);
    }

    set<char> s2;
    for (char s : str2)
    {
        s2.insert(s);
    }

    string ans = "";

    for (char a : s1)
    {
        ans += a;
    }

    return ans;
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";

    string ans = gcdOfStrings(str1, str2);
    if (ans.length() == 0)
    {
        cout << "Is not a GCD" << endl;
    }
    else
    {

        cout << ans << endl;
    }

    return 0;
}