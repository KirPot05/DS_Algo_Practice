#include<iostream>

using namespace std;


int String_Isogram(string s){

    int hash[26] = {0};
        
        for(int i=0; i<s.length(); i++){
            
            hash[s[i] - 'a']++;
        }
        
        for(int i : hash){
            
            if(i > 1)
                return 0;
        }
        
        
        return 1;

}



int main(){

    string s;
    cin >> s;

    if(String_Isogram(s))
        cout << "True";

    else 
        cout << "False";


    return 0;
}