#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    int size = arr.size();
    int i = 0, j = size - 1;

    vector<vector<int>> pairs;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
            if (arr[i] + arr[j] == s)
            {
                vector<int> pair;
                pair.push_back(arr[i]);
                pair.push_back(arr[j]);
                pairs.push_back(pair);
            }
    }

    sort(pairs.begin(), pairs.end());
    return pairs;
}

int main(int argc, char const *argv[])
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, val, sum;
    cin >> n;

    cin >> sum;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    vector<vector<int>> pairs = pairSum(arr, sum);

    for (auto pair : pairs)
    {
        for (auto item : pair)
        {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}
