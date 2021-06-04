// Sliding Window Maximum
// O(N logN) approach -> Multiset
// O(N) approach -> Deque

#include <iostream>
#include <deque>
#include <vector>
using namespace std;



int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    int n, k;
    cin >> n >> k;

    vector <int> v(n);

    for(auto &i : v){
        cin >> i;
    }


    deque <int> d;
    vector <int> ans;

    for(int i=0; i<k; i++){

        while(!d.empty() && v[d.back()] < v[i]){
            d.pop_back();
        }

        d.push_back(i);
    }

    ans.push_back(v[d.front()]);

    for(int i=k; i<n; i++){

        if(d.front() == i - k){
            d.pop_front();
        }

        while(!d.empty() && v[d.back()] < v[i]){
            d.pop_back();
        }

        d.push_back(i);
        ans.push_back(v[d.front()]);

    }

    

    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;


    


    return 0;
}

