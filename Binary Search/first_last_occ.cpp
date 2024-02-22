#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int firstOcc(vector<int> &arr, int n, int k)
{

    int start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < k)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int lastOcc(vector<int> &arr, int n, int k)
{

    int start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < k)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> occ;

    occ.first = firstOcc(arr, n, k);
    occ.second = lastOcc(arr, n, k);

    return occ;
}

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 5, k = 3;
    vector<int> arr = {2, 3, 3, 5, 6, 7};

    cout << "First Occurence: " << firstOcc(arr, n, k) << endl;
    cout << "Last Occurence: " << lastOcc(arr, n, k) << endl;
    return 0;
}
