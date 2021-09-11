#include <iostream>
#include <map>
using namespace std;

// string encode(string src)
// {     
//   //Your code here 
//     string result = "";
//     map<char, int> mp;
    
//     for(int i=0; i<src.length(); i++){
//         mp[src[i]]++;
//     }
    
//     for(auto i = mp.begin(); i != mp.end(); i++){
//         result += i -> first;
//         result += (i -> second + '0');
        
//     }
    
//     return result;
// }   


string encode(string s){


    string ans; 
    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        
        cnt++;
        
        if(s[i] != s[i+1]){
            ans += s[i];
            ans += (cnt + '0');
            cnt = 0;
        }
        
    }

    return ans;
}


int main(){

    cout << encode("aaabbbcccc");

    return 0;
}