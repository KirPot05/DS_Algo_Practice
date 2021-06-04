#include <iostream>
#include <vector>
using namespace std;

int Longest_Substring(string s){

    int maxlen = 0, start = -1;
    vector <int> dict(256, -1);

    for(int i=0; i<s.length(); i++){

        if(dict[s[i]] > start){

            start = dict[s[i]];
        }

        dict[s[i]] = i;
        maxlen = max(maxlen, i - start);

    }


    return maxlen;
}


int main()
{

    string s = "pewwkew";

    cout << Longest_Substring(s) << endl;


    return 0;
}