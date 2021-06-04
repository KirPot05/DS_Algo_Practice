#include <iostream>
#include <vector>
using namespace std;


int Max_One(vector <int> a, int k){

    int ans = 0, zerocount = 0, j=0;

    for(int i=0; i<a.size(); i++){

        if(a[i] == 0){
            zerocount++;
        }

        while(zerocount > k){

            if(a[j] == 0)
                zerocount--;
            
            j++;
        }

        ans = max(ans, i - j + 1);

    }

    return ans;
}


int main()
{
    vector <int> a = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 3;

    cout << Max_One(a, k);

    


    return 0;
}