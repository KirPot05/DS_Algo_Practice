#include <iostream>
#include <vector>
using namespace std;


long long gcd(long long  a, long long  b){

    if(b == 0){
        return a;
    }

    return gcd(b, a % b);
}


vector<long long> gcd1(long long l, long long r){

    vector <long long> ans;
    long long  a = l, b = r;
    bool help = false;

    while(a >= 1 && b >= 1){
        if(gcd(a, b) == 1){
            help = true;
            break;
        }

        a--;
        b--;
    }

    if(help){
        ans.push_back(a);
        ans.push_back(b);
    } else{
        ans.push_back(-1);
        ans.push_back(-1);
    }


    return ans;
}


int main(int argc, char const *argv[])
{
    long long l = 0, r = 0;
    // cin >> l >> r;

    vector <long long> a = gcd1(1, 1);

    for(long long i : a){
        cout << i << " ";
    }cout << endl;


    return 0;
}
