#include "arrays.h"
#include <vector>

int findDuplicates(vector<int> &arr)
{

    /*
        Approach:
        Array elements will be:
        [ 1 ... N-1, X ] where X is the duplicate

        1. XOR all the array elements
        2. XOR all the numbers ranging from 1 to N-1

        we will find X when X is the extra value present in the array
    */
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans ^= i;
    }

    return ans;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int n, val;
        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            arr.push_back(val);
        }

        cout << "Duplicated element in array: " << findDuplicates(arr) << endl;
    }

    return 0;
}