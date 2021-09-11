/*
    Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
    I 1
    V 5
    X 10
    L 50
    C 100
    D 500
    M 1000

    Input:
    s = V
    Output: 5

    Input:
    s = III 
    Output: 3
*/ 

#include <iostream>
// #include <vector>
#include <map>
using namespace std;

int romanToDecimal(string str) {
    // code here

    int ans = 0;
    // vector <pair<char, int>> v = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for(int i=0; i < str.size(); i++){
        
        if((i < str.size() - 1) and (mp[str[i]] < mp[str[i+1]])){
            ans += (mp[str[i+1]] - mp[str[i]]);
        }
        
        else{
            // cout << ans << " ";
            ans += (mp[str[i]]);
        }
    }



    return ans;
}


int main(int argc, char const *argv[])
{
    /* code */

    cout << romanToDecimal("XV");

    return 0;
}

