#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool Three_Sum(vector<int> a, int target){

    sort(a.begin(), a.end());
    int low, high, current;

    for(int i=0; i<a.size(); i++){

        low = i + 1, high = a.size() - 1;

        while(low < high){

            current = a[i] + a[low] + a[high];

            if(current == target){
                return true;
            } 

            (current < target) ? low++ : high--;

        }
 
    }


    return false;
}


int main()
{

    vector <int> a = {12, 3, 6, 9, 34, 25};
    int target = 18;

    Three_Sum(a, target) ? cout << "True" : cout << "False";


    return 0;
}