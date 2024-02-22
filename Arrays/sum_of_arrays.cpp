#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    I/P:
    [1, 2, 3, 4]
    [6]

    result = [1, 2, 4, 0]

    Operation should be carried out like math addition
      1234
    + 0006
      1240
*/
vector<int> addArrays(vector<int> &a, vector<int> &b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0, sum = 0;

    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        sum = val1 + val2 + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int val1 = a[i];
        sum = val1 + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        i--;
    }

    while (j >= 0)
    {
        int val2 = b[j];
        sum = val2 + carry;
        ans.push_back(sum / 10);
        carry = sum / 10;
        j--;
    }

    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 3, 4, 5};

    vector<int> ans = addArrays(a, b);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}