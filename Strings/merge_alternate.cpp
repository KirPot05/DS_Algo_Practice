#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string ans = "";

    int minSize = min(word1.length(), word2.length());

    int i = 0, j = 0;
    while (i < minSize && j < minSize)
    {
        ans += word1[i];
        ans += word2[j];
        i++;
        j++;
    }

    while (i < word1.length())
    {
        ans += word1[i];
        i++;
    }

    while (j < word2.length())
    {
        ans += word2[j];
        j++;
    }

    return ans;
}

int main()
{

    string word1 = "abcd";
    string word2 = "pq";

    string ans = mergeAlternately(word1, word2);
    cout << ans << endl;

    return 0;
}