#include <iostream>
#include <map>
using namespace std;


int solution(string list[], int n){

    map<string, int> mp;

    int count = 0;

    for(int i=0; i<n; i++){ 
        mp[list[i]]++;
    }

    for(auto it = mp.begin(); it!=mp.end(); it++){
        if(it -> second == 2){
            count++;
        }
    }

    return count;
}       

int main(){

    string list[] = {"Tom", "Courage", "Tom", "Courage", "For", "Tom", "For"};
    int n = 7;

    cout << solution(list, n);

    return 0;
}