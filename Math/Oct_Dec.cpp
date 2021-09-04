#include <iostream>
using namespace std;



int octalToDecimal(int n){

    int ans = 0, x = 1;

    while(n){
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }

    return ans;
}

int decToOctal(int n){

    int ans = 0, x = 1;

    while(x <= n){
        x *= 8;
    }
    x /= 8;

    while(x){
        int last = n/x;
        n -= x * last;

        x /= 8;
        ans = ans * 10 + last;
    }


    return ans;
}



int main()
{

    cout << octalToDecimal(144) << endl;

    cout << decToOctal(100) << endl;

    return 0;
}