#include <iostream>
using namespace std;



int HexToDec(string n){

    int ans = 0, x = 1;
    int s = n.size();

    for(int i = s-1; i>=0; i--){

        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0');
        }

        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }

        x *= 16;
    }

    return ans;
}



string DecToHEx(int n){

    string ans; 
    int x = 1;

    while(x <= n){
        x *= 16;
    }
    x /= 16;

    while(x){
        int lastDigit = n / x;
        n -= x * lastDigit;

        x /= 16;

        if(lastDigit <= 9){
            ans += (lastDigit + '0');
        }

        else{
            ans += ('A' + (lastDigit - 10));
        }
    }

    return ans;
}




int32_t main()
{

    //cout << HexToDec("1CF");
    cout << DecToHEx(100);
    
    return 0;
}